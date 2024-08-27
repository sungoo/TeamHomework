// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Creature.h"
#include "BossMonster.generated.h"

/**
 * 
 */

UCLASS()
class TEAMHOMEWORK_API ABossMonster : public ACreature
{
	GENERATED_BODY()
	
public:
	ABossMonster();

protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UFUNCTION()
	void OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void CharacterOverlapped();

public:
	virtual void Tick(float DeltaTime) override;

	void AggroAttack();


	UPROPERTY(VisibleAnywhere)
	class USphereComponent* _trigger;

	UPROPERTY()
	bool _isOverlapped;

	UPROPERTY()
	class AMyPlayer* _originPlayer;

	int32 _aggroNum = 10;
	int32 _attackNum = 4;
	TArray<class AMyPlayer*> _players;
};
