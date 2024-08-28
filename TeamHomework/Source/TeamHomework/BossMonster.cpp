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
	_statCom->AddAttackDamage(50.0f);
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
	_players.RemoveAll([](AMyPlayer* player)
		{ return player->_statCom->IsDead(); });

	// 모두 죽었으면 끝
	if (_players.IsEmpty())
		return;

	// 공격력 순으로 정렬
	Algo::Sort(_players, [](AMyPlayer* player1, AMyPlayer* player2)
		{ return player1->_bossAttack > player2->_bossAttack; });

	// 최대 4명 공격
	if (_players.Num() < _attackNum)
		_attackNum = _players.Num();

	FDamageEvent damageEvent;
	for (int i = 0; i < _attackNum; i++)
	{
		// TODO : 장판 커짐
		_players[i]->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		_players[i]->_damagedByBoss = true;

		GetWorld()->GetTimerManager().SetTimer(_players[i]->damageResetTimerHandle, FTimerDelegate::CreateLambda([this, player = _players[i]]()
			{
				player->_damagedByBoss = false;
			}), 1.0f, false);
	}
}

void ABossMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
