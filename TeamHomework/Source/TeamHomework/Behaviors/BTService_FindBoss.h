// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_FindBoss.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UBTService_FindBoss : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_FindBoss();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

