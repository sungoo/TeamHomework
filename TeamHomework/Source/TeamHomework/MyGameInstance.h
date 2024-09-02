// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyUIManager.h"
#include "MyPlayerManager.h"
#include "VFX_Manager.h"
#include "MyStatComponent.h"
#include "MyItem.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

#define UIManager Cast<UMyGameInstance>(GetWorld()->GetGameInstance())->GetUIManager()
#define PlayerManager Cast<UMyGameInstance>(GetWorld()->GetGameInstance())->GetPlayerManager()
#define VFXManager Cast<UMyGameInstance>(GetGameInstance())->GetVFXManager()

struct FItemData;
struct FMyStatData;

UCLASS()
class TEAMHOMEWORK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

private:
	virtual void Init() override;
	void GetItemDataTable();
	void GetStatDataTable();
public:
	FMyStatData GetStatDataByTypeAndLevel(CreatureType type, int32 level);
	FItemData GetItemDataByCode(int32 code);

	class AMyUIManager* GetUIManager() { return _uiManager; };
	class AMyPlayerManager* GetPlayerManager() { return _playerManager; };
	class AVFX_Manager* GetVFXManager() { return _vfxManager; };

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AMyUIManager* _uiManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AMyPlayerManager* _playerManager;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AVFX_Manager* _vfxManager;

	//Data Table
	UPROPERTY()
	TMap<int32, FMyStatData> _archerData;
	UPROPERTY()
	TMap<int32, FMyStatData> _knightData;
	UPROPERTY()
	TMap<int32, FMyStatData> _monsterData;
	UPROPERTY()
	TMap<int32, FMyStatData> _bossData;

	UPROPERTY()
	TMap<int32, FItemData> _itemData;
};
