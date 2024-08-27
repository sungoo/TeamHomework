// Fill out your copyright notice in the Description page of Project Settings.


#include "BossMonster.h"
#include "Components/SphereComponent.h"
#include "MyPlayer.h"
#include "MyStatComponent.h"
#include "MyGameModeBase.h"
#include "Algo/Sort.h"
#include "Engine/DamageEvents.h"
#include "MyAnimInstance.h"


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
}

void ABossMonster::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	_trigger->OnComponentBeginOverlap.AddDynamic(this, &ABossMonster::OnMyCharacterOverlap);
}

void ABossMonster::OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	_isOverlapped = true;
	_originPlayer = Cast<AMyPlayer>(OtherActor);
}

void ABossMonster::CharacterOverlapped()
{
	if (_isOverlapped && _originPlayer != nullptr)
	{
		FVector bossPos = GetActorLocation();
		auto gameModeBase = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());
		
		if (gameModeBase && gameModeBase->_bossModeStarted == false)
			gameModeBase->StartBossMode(this);
	}
}

void ABossMonster::AggroAttack()
{
	// 죽은 플레이어 삭제
	_players.RemoveAll([](AMyPlayer* player)
		{ return player->_statCom->IsDead(); });

	// 모두 죽었으면 끝
	if (_players.IsEmpty())
		return;

	// 보스의 공격
	// 공격력 순으로 정렬
	Algo::Sort(_players, [](AMyPlayer* player1, AMyPlayer* player2)
		{ return player1->_bossAttack > player2->_bossAttack; });
	
	// 최대 4명 공격
	if (_players.Num() < _attackNum)
		_attackNum = _players.Num();

	FDamageEvent damageEvent;
	for (int i = 0; i < _attackNum; i++)
	{
		// TODO : 장판공격
		_players[i]->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
	}

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

void ABossMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CharacterOverlapped();
}
