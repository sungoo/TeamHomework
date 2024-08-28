// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_RunAway.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "MyAIController.h"
#include "MyPlayer.h"

UBTTask_RunAway::UBTTask_RunAway()
{
	NodeName = TEXT("Run Away");
}

EBTNodeResult::Type UBTTask_RunAway::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    auto aiController = OwnerComp.GetAIOwner();
    if (aiController)
    {
        APawn* ControlledPawn = aiController->GetPawn();
        if (ControlledPawn)
        {
            // 보스의 위치를 가져오기 위해 Blackboard에서 Boss 위치 키를 사용
            FVector bossPos = aiController->GetBlackboardComponent()->GetValueAsVector("BossPos");

            // 도망갈 방향을 계산 (보스와 반대 방향으로)
            FVector runDirection = ControlledPawn->GetActorLocation() - bossPos;
            runDirection.Normalize();

            // 도망갈 위치 계산
            FVector runDestination = ControlledPawn->GetActorLocation() + runDirection * runDistance;

            // AI가 목표 위치로 이동하도록 명령
            aiController->MoveToLocation(runDestination);

            // 태스크 성공을 반환
            return EBTNodeResult::Succeeded;
        }
    }

    // AIController나 Pawn이 없을 경우 실패 반환
    return EBTNodeResult::Failed;
}
