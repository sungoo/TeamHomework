// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "MyStatComponent.h"
#include "MyItem.h"

UMyGameInstance::UMyGameInstance()
{
	GetItemDataTable();
}

void UMyGameInstance::Init()
{
	Super::Init();

	FActorSpawnParameters params;
	params.Name = TEXT("UIManager");
	_uiManager = GetWorld()->SpawnActor<AMyUIManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);
	
	params.Name = TEXT("PlayerManager");
	_playerManager = GetWorld()->SpawnActor<AMyPlayerManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);

	params.Name = TEXT("vfxManager");
	_vfxManager = GetWorld()->SpawnActor<AVFX_Manager>(FVector::ZeroVector, FRotator::ZeroRotator, params);
}

void UMyGameInstance::GetItemDataTable()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> itemData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/ItemData.ItemData'"));

	if (itemData.Succeeded())
	{
		UDataTable* data = itemData.Object;
		int32 i = 0;
		while (true)
		{
			FItemData* itemdata = data->FindRow<FItemData>(*FString::FromInt(i), TEXT(""));
			if (itemdata == nullptr)
				break;
			FItemData item = *itemdata;
			_itemData.Add(i, item);

			i++;
		}
	}
}

void UMyGameInstance::GetStatDataTable()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> playerData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/PlayerData.PlayerData'"));

	if (playerData.Succeeded())
	{
		UDataTable* data = playerData.Object;
		int32 i = 0;
		while (true)
		{
			FMyStatData* playerdata = data->FindRow<FMyStatData>(*FString::FromInt(i), TEXT(""));
			if (playerdata == nullptr)
				break;
			FMyStatData stat = *playerdata;
			_playerData.Add(i, stat);

			i++;
		}
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> monsterData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/PlayerData.PlayerData'"));

	if (monsterData.Succeeded())
	{
		UDataTable* data = monsterData.Object;
		int32 i = 0;
		while (true)
		{
			FMyStatData* monsterdata = data->FindRow<FMyStatData>(*FString::FromInt(i), TEXT(""));
			if (monsterdata == nullptr)
				break;
			FMyStatData stat = *monsterdata;
			_monsterData.Add(i, stat);

			i++;
		}
	}
}

FMyStatData UMyGameInstance::GetStatDataByTypeAndLevel(CreatureType type, int32 level)
{
	switch (type)
	{
	case CreatureType::Archer:
	case CreatureType::Knight:
		return _playerData[level];
		break;
	case CreatureType::Monster:
	case CreatureType::BossMonster:
		return _monsterData[level];
		break;
	default:
		break;
	}
	return _playerData[level];
}

FItemData UMyGameInstance::GetItemDataByCode(int32 code)
{
	return _itemData[code];
}