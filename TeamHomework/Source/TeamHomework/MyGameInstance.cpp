// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "MyStatComponent.h"
#include "MyItem.h"

UMyGameInstance::UMyGameInstance()
{
	GetItemDataTable();
	GetStatDataTable();
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
	static ConstructorHelpers::FObjectFinder<UDataTable> archerData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/ArcherData.ArcherData'"));

	if (archerData.Succeeded())
	{
		UDataTable* data = archerData.Object;
		int32 i = 1;
		while (true)
		{
			FMyStatData* archerdata = data->FindRow<FMyStatData>(*FString::FromInt(i), TEXT(""));
			if (archerdata == nullptr)
				break;
			FMyStatData stat = *archerdata;
			_archerData.Add(i, stat);

			i++;
		}
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> knightData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/KnightData.KnightData'"));

	if (knightData.Succeeded())
	{
		UDataTable* data = knightData.Object;
		int32 i = 1;
		while (true)
		{
			FMyStatData* knightdata = data->FindRow<FMyStatData>(*FString::FromInt(i), TEXT(""));
			if (knightdata == nullptr)
				break;
			FMyStatData stat = *knightdata;
			_knightData.Add(i, stat);

			i++;
		}
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> monsterData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/MonsterData.MonsterData'"));

	if (monsterData.Succeeded())
	{
		UDataTable* data = monsterData.Object;
		int32 i = 1;
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

	static ConstructorHelpers::FObjectFinder<UDataTable> bossData
	(TEXT("/Script/Engine.DataTable'/Game/Blueprint/Data/BossData.BossData'"));

	if (bossData.Succeeded())
	{
		UDataTable* data = bossData.Object;
		int32 i = 1;
		while (true)
		{
			FMyStatData* bossdata = data->FindRow<FMyStatData>(*FString::FromInt(i), TEXT(""));
			if (bossdata == nullptr)
				break;
			FMyStatData stat = *bossdata;
			_bossData.Add(i, stat);

			i++;
		}
	}
}

FMyStatData UMyGameInstance::GetStatDataByTypeAndLevel(CreatureType type, int32 level)
{
	switch (type)
	{
	case CreatureType::Archer:
		return _archerData[level];
		break;
	case CreatureType::Knight:
		return _knightData[level];
		break;
	case CreatureType::Monster:
		return _monsterData[level];
		break;
	case CreatureType::BossMonster:
		return _bossData[level];
		break;
	default:
		break;
	}
	return _archerData[level];
}

FItemData UMyGameInstance::GetItemDataByCode(int32 code)
{
	return _itemData[code];
}