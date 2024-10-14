// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDeco_IsDamagedByBoss.h"


#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "MyAIController.h"
#include "../Characters/MyPlayer.h"




UBTDeco_IsDamagedByBoss::UBTDeco_IsDamagedByBoss()
{
	NodeName = TEXT("Is Damaged By Boss");
}

bool UBTDeco_IsDamagedByBoss::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
    bool result = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

    result = OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("IsDamaged"));

    if (result)
    {
        UE_LOG(LogTemp, Warning, TEXT("damaged by boss"));
    }

    return result;

}
