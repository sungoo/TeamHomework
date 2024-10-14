// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDeco_IsBossDead.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UBTDeco_IsBossDead : public UBTDecorator
{
	GENERATED_BODY()
	
	UBTDeco_IsBossDead();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
