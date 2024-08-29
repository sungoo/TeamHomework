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
	// TArray<UWidget*> damageBars = DamageBox->GetAllChildren();
	// for (int32 i = 0; i < damageBars.Num(); i++)
	// {
	// 	UProgressBar* damageBar = Cast<UProgressBar>(damageBars[i]);
	// 	if (damageBar)
	// 	{
	// 		if ()
	// 	}
	// }
}

void UUI_AggroInfo::SetDamageValue(float ratio)
{
	
}

void UUI_AggroInfo::SetHpValue(float ratio)
{
}
