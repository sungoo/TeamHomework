// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMonster.h"
#include "MyAIController.h"
#include "Creature.h"
#include "MystatComponent.h"
#include "Engine/DamageEvents.h"


AMyMonster::AMyMonster()
{
}

void AMyMonster::BeginPlay()
{
	Super::BeginPlay();

	Init();
	SetAnimation();
}

void AMyMonster::Init()
{
	Super::Init();

	auto aiController = Cast<AMyAIController>(GetController());
	aiController->Possess(this);
}

void AMyMonster::AttackHit()
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

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		// && !hitResult.GetActor()->IsA(this->GetClass())

		UE_LOG(LogTemp, Warning, TEXT("Hit Success"));
		FDamageEvent damageEvent;

		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);

		drawColor = FColor::Red;
	}

	FVector center = GetActorLocation() + GetActorForwardVector() * attackRange;
	DrawDebugSphere(GetWorld(), center, attackRadius, 30, drawColor, false, 2.0f);
}
