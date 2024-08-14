// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API AMyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMyAIController();

protected:
	virtual void BeginPlay() override;

public:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

private:
	FTimerHandle _timerHandle;

	UPROPERTY()
	class UBlackboardData* _bd;

	UPROPERTY()
	class UBehaviorTree* _bt;
};
