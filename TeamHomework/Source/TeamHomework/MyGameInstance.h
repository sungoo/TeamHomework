// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyUIManager.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

#define UIManager Cast<UMyGameInstance>(GetGameInstance())->GetUIManager()
// #define EffectManager Cast<UMyGameInstance>(GetGameInstance())->GetEffectManager()

UCLASS()
class TEAMHOMEWORK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	virtual void Init() override;

	// FMyStatData* GetStatDataByLevel(int level);

	class AMyUIManager* GetUIManager() { return _uiManager; };
	// class AMyEffectManager* GetEffectManager() { return _effectManager; };

private:
	UPROPERTY()
	class UDataTable* _statTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AMyUIManager* _uiManager;
	// 
	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	// class AMyEffectManager* _effectManager;
};
