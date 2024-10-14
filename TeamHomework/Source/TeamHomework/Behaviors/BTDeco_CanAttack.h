// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDeco_CanAttack.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UBTDeco_CanAttack : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTDeco_CanAttack();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
