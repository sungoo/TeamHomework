// Fill out your copyright notice in the Description page of Project Settings.


#include "BossMonster.h"
#include "Components/SphereComponent.h"
#include "MyPlayer.h"
#include "MyStatComponent.h"
#include "MyGameModeBase.h"
#include "Algo/Sort.h"
#include "Engine/DamageEvents.h"
#include "MyAnimInstance.h"
#include "MyStatComponent.h"



ABossMonster::ABossMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));

	_trigger->SetupAttachment(RootComponent);
	_trigger->SetCollisionProfileName(TEXT("MyNPC"));
	_trigger->SetSphereRadius(500.0f);
}

void ABossMonster::BeginPlay()
{
	Super::BeginPlay();

	SetAnimation();
}

void ABossMonster::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	_trigger->OnComponentBeginOverlap.AddDynamic(this, &ABossMonster::OnMyCharacterOverlap);
	
	// 삭제 예정
	_statCom->SetHp(500.0f);
	// _statCom->AddAttackDamage(50.0f);
}

void ABossMonster::OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	_originPlayer = Cast<AMyPlayer>(OtherActor);
	if (_originPlayer != nullptr)
	{
		FVector bossPos = GetActorLocation();
		auto gameModeBase = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());

		if (gameModeBase && !_bossModeStarted)
		{
			_bossModeStarted = true;
			gameModeBase->StartBossMode(this);
		}
	}
}

void ABossMonster::AggroAttack()
{
	// 공격 애니메이션 재생
	if (!_isAttacking && _animInstance != nullptr)
	{
		_isAttacking = true;

		_animInstance->PlayAttackMontage();

		_curAttackIndex %= 3;
		_curAttackIndex++;

		_animInstance->JumpToSection(_curAttackIndex);
	}
}

void ABossMonster::AttackHit()
{
	// 죽은 플레이어 제외
	_players.RemoveAll([](TTuple<AMyPlayer*, int32> player)
		{ return player.Key->_statCom->IsDead(); });

	// 모두 죽었으면 끝
	if (_players.IsEmpty())
		return;

	// 공격력 순으로 정렬
	Algo::Sort(_players, [](const TTuple<AMyPlayer*, int32>& player1, const TTuple<AMyPlayer*, int32>& player2)
		{ return player1.Key->_bossAttack > player2.Key->_bossAttack; });

	// 최상위 1명 공격
	FHitResult hitResult;

	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 500.0f;
	float attackRadius = 1000.0f;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		GetActorLocation() + GetActorForwardVector() * attackRange,
		GetActorLocation() + GetActorForwardVector() * attackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(attackRadius),
		params
	);

	if (bResult && hitResult.GetActor()->IsValidLowLevel() && hitResult.GetActor() == _players[0].Key)
	{
		FDamageEvent damageEvent;

		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		
		_hitPoint = hitResult.ImpactPoint;
		_attackHitEventDelegate.Broadcast();
		VFXManager->Play("Explosion", _hitPoint);

		_players[0].Key->_damagedByBoss = true;

		GetWorld()->GetTimerManager().SetTimer(_players[0].Key->damageResetTimerHandle, FTimerDelegate::CreateLambda([this, player = _players[0].Key]()
			{
				player->_damagedByBoss = false;
			}), 1.0f, false);
	}

	_aggroHpChangedDelegate.Broadcast(_statCom->HpRatio(), _players[0].Value);

	// FDamageEvent damageEvent;
	// _players[0].Key->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
	
}

void ABossMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
