// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_AggroInfo.h"
#include "MyPlayer.h"
#include "Components/Widget.h"
#include "Components/VerticalBox.h"
#include "Components/ProgressBar.h"

void UUI_AggroInfo::NativeConstruct()
{ 
}

void UUI_AggroInfo::SetPlayerInfo(TArray<AMyPlayer*> players)
{
	TArray<UWidget*> damageBars = DamageBox->GetAllChildren();
	for (int32 i = 0; i < damageBars.Num(); i++)
	{
		UProgressBar* damageBar = Cast<UProgressBar>(damageBars[i]);
		if (damageBar)
		{
			_damageInfo.Add(players[i], damageBar);
		}
	}

	TArray<UWidget*> hpBars = HpBox->GetAllChildren();
	for (int32 i = 0; i < hpBars.Num(); i++)
	{
		UProgressBar* hpBar = Cast<UProgressBar>(hpBars[i]);
		if (hpBar)
		{
			_damageInfo.Add(players[i], hpBar);
		}
	}
}

void UUI_AggroInfo::SetDamageValue(float ratio)
{
	
}

void UUI_AggroInfo::SetHpValue(float ratio)
{
}
