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

	if (bResult && hitResult.GetActor()->IsValidLowLevel() && !hitResult.GetActor()->IsA(AMyPlayer::StaticClass()))
	{
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
			_damageToBoss += finalDamage; // 누적되는 데미지도 랜덤 데미지로 설정
			boss->_aggroDamageDelegate.Broadcast(_damageToBoss, this);
		}

		hitResult.GetActor()->TakeDamage(finalDamage, damageEvent, GetController(), this);

		_hitPoint = hitResult.ImpactPoint;
		_attackHitEventDelegate.Broadcast();
		VFXManager->Play("Explosion", _hitPoint);

		drawColor = FColor::Red;
	}

	FVector center = GetActorLocation() + GetActorForwardVector() * attackRange;
	// DrawDebugSphere(GetWorld(), center, attackRadius, 30, drawColor, false, 2.0f);
}
