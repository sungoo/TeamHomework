// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyUIManager.h"
#include "MyPlayerManager.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

#define UIManager Cast<UMyGameInstance>(GetGameInstance())->GetUIManager()
#define PlayerManager Cast<UMyGameInstance>(GetGameInstance())->GetPlayerManager()
// #define EffectManager Cast<UMyGameInstance>(GetGameInstance())->GetEffectManager()

UCLASS()
class TEAMHOMEWORK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	virtual void Init() override;

	// FMyStatData* GetStatDataByLevel(int level);
	struct FItemData* GetItemDataByCode(int code);

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
	class UDataTable* _itemData;
};
