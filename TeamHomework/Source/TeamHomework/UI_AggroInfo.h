// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_AggroInfo.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UUI_AggroInfo : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	void SetPlayerInfo(TArray<class AMyPlayer*> players);
	void SetDamageValue(float ratio);
	void SetHpValue(float ratio);

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* NameBox;

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* DamageBox;

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* HpBox;

	UPROPERTY()
	TMap<class AMyPlayer*, class UProgressBar*> _damageInfo;

	UPROPERTY()
	TMap<class AMyPlayer*, class UProgressBar*> _hpInfo;
};
