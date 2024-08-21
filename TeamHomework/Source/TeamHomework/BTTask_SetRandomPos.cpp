// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SetRandomPos.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "Creature.h"
#include "MyAIController.h"

UBTTask_SetRandomPos::UBTTask_SetRandomPos()
{
	NodeName = TEXT("Set Random Position");
}

EBTNodeResult::Type UBTTask_SetRandomPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto blackboard = OwnerComp.GetBlackboardComponent();
	auto aiOwner = OwnerComp.GetAIOwner()->GetPawn();



	return result;
}
