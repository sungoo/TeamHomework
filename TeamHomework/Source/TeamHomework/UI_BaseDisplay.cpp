// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_BaseDisplay.h"

#include "Components/TextBlock.h"

void UUI_BaseDisplay::UpdateNowGold(int amount)
{
	_gold += amount;
}

void UUI_BaseDisplay::UpdateDisplayGold()
{
	_GoldValue->SetText(FText::FromString(FString::FromInt(_gold)));
}
