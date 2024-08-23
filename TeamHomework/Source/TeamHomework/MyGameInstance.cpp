// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "MyItem.h"

UMyGameInstance::UMyGameInstance()
{
	 static ConstructorHelpers::FObjectFinder<UDataTable> itemData
	 (TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/ItemData.ItemData'"));
	 
	 if (itemData.Succeeded())
	 {
	 	_itemData = itemData.Object;
	 	UE_LOG(LogTemp, Error, TEXT("item data Load Complete"));
	 }
}

void UMyGameInstance::Init()
{
	Super::Init();

	// auto statData = GetStatDataByLevel(2);
	// UE_LOG(LogTemp, Warning, TEXT("Level : %d, MaxHp : %d, Attack : %d"), statData->level, statData->maxHp, statData->attack);
	// 
	FActorSpawnParameters params;
	params.Name = TEXT("UIManager");
	_uiManager = GetWorld()->SpawnActor<AMyUIManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);
	
	params.Name = TEXT("PlayerManager");
	_playerManager = GetWorld()->SpawnActor<AMyPlayerManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);

	// params.Name = TEXT("EffectManager");
	// _effectManager = GetWorld()->SpawnActor<AMyEffectManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);
}

FItemData* UMyGameInstance::GetItemDataByCode(int code)
{
	auto itemData = _itemData->FindRow<FItemData>(*FString::FromInt(code), TEXT(""));
	return itemData;
}

// FMyStatData* UMyGameInstance::GetStatDataByLevel(int level)
// {
// 	auto statData = _statTable->FindRow<FMyStatData>(*FString::FromInt(level), TEXT(""));
// 	return statData;
// }
