// Fill out your copyright notice in the Description page of Project Settings.


#include "Archer.h"
#include "BossMonster.h"

#include "MystatComponent.h"
#include "Engine/DamageEvents.h"

void AArcher::AttackHit()
{
	Super::AttackHit();

	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 1000.0f;
	float attackRadius = 20.0f;
	float halfheight = attackRange * 0.5f;
	FVector foward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector::UpVector, foward);
	FVector center = GetActorLocation() + foward * halfheight;

	FVector start = GetActorLocation();
	FVector end = start + foward * halfheight;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		start,
		end,
		quat,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(attackRadius, halfheight),
		params
	);

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel() && !hitResult.GetActor()->IsA(AMyPlayer::StaticClass()))
	{
		drawColor = FColor::Red;
		FDamageEvent damageEvent;

		// 기본 공격 데미지를 가져옵니다.
		float baseDamage = _statCom->GetAttackDamage();
		float finalDamage = baseDamage;

		// 보스인 경우에만 랜덤 요소 추가
		ABossMonster* boss = Cast<ABossMonster>(hitResult.GetActor());
		if (boss)
		{
			float randomFactor = FMath::RandRange(0.8f, 1.2f); // 80%에서 120% 사이의 랜덤한 배율 적용
			finalDamage = baseDamage * randomFactor;
			_bossAttack += finalDamage; // 누적되는 데미지도 랜덤 데미지로 설정
			boss->_aggroDamageDelegate.Broadcast(_bossAttack, this);
		}

		hitResult.GetActor()->TakeDamage(finalDamage, damageEvent, GetController(), this);

		_hitPoint = hitResult.ImpactPoint;
		_attackHitEventDelegate.Broadcast();
		VFXManager->Play("Explosion", _hitPoint);

		// DrawDebugCapsule(GetWorld(), center, attackRange * 0.5f, attackRadius, quat, FColor::Red, false, 2.0f);
	}

	else
	{
		// DrawDebugCapsule(GetWorld(), center, attackRange * 0.5f, attackRadius, quat, FColor::Green, false, 2.0f);
	}
}
