// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AggroAttack.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UBTTask_AggroAttack : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_AggroAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	bool _isAttacking = false;
};
