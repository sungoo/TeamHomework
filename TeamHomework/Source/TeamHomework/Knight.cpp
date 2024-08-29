// Fill out your copyright notice in the Description page of Project Settings.


#include "Knight.h"
#include "BossMonster.h"
#include "MystatComponent.h"
#include "Engine/DamageEvents.h"
#include "UI_AggroInfo.h"

void AKnight::AttackHit()
{
	Super::AttackHit();

	FHitResult hitResult;

	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 150.0f;
	float attackRadius = 50.0f;

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

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel() && !hitResult.GetActor()->IsA(this->GetClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Success"));
		FDamageEvent damageEvent;

		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		_hitPoint = hitResult.ImpactPoint;

		ABossMonster* boss = Cast<ABossMonster>(hitResult.GetActor());
		if (boss)
		{
			_bossAttack += _statCom->GetAttackDamage();
			boss->_aggroDamageDelegate.Broadcast(_bossAttack, this);
		}

		drawColor = FColor::Red;
	}

	FVector center = GetActorLocation() + GetActorForwardVector() * attackRange;
	DrawDebugSphere(GetWorld(), center, attackRadius, 30, drawColor, false, 2.0f);
}
