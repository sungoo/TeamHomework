// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyUIManager.h"
#include "MyPlayerManager.h"
#include "MyItem.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

#define UIManager Cast<UMyGameInstance>(GetWorld()->GetGameInstance())->GetUIManager()
#define PlayerManager Cast<UMyGameInstance>(GetWorld()->GetGameInstance())->GetPlayerManager()
// #define EffectManager Cast<UMyGameInstance>(GetGameInstance())->GetEffectManager()

struct FItemData;

UCLASS()
class TEAMHOMEWORK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

private:
	virtual void Init() override;
	void GetItemDataTable();
public:
	// FMyStatData* GetStatDataByLevel(int level);
	FItemData GetItemDataByCode(int32 code);

	class AMyUIManager* GetUIManager() { return _uiManager; };
	class AMyPlayerManager* GetPlayerManager() { return _playerManager; };
	// class AMyEffectManager* GetEffectManager() { return _effectManager; };

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AMyUIManager* _uiManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AMyPlayerManager* _playerManager;
	
	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	// class AMyEffectManager* _effectManager;

	//Data Table
	UPROPERTY()
	class UDataTable* _statTable;

	UPROPERTY()
	TMap<int32, FItemData> _itemData;
};
