// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_GotoNextState.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_GotoNextState::UBTTask_GotoNextState()
{
	NodeName = TEXT("Go to Next State");
}

EBTNodeResult::Type UBTTask_GotoNextState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto blackboard = OwnerComp.GetBlackboardComponent();
	if (blackboard == nullptr)
		return EBTNodeResult::Failed;

	int32 originNum = blackboard->GetValueAsInt(FName(TEXT("RandomNum")));
	int32 maxState = blackboard->GetValueAsInt(FName(TEXT("MaxState")));
	
	int32 next = (++originNum) % (maxState + 1);

	blackboard->SetValueAsInt(FName(TEXT("RandomNum")), next);

	return result;
}