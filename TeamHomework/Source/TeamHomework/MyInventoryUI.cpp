// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInventoryUI.h"

#include "Components/UniformGridPanel.h"
#include "Components/Widget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"

#include "MyPlayerController.h"

#include "Kismet/GameplayStatics.h"

void UMyInventoryUI::NativeConstruct()
{
	Super::NativeConstruct();

	_defaultTexture = nullptr;

	SetButtons();
}

void UMyInventoryUI::SetButtons()
{
	TArray<UWidget*> widgets;
	widgets = SlotGrid->GetAllChildren();

	for (UWidget* widget : widgets)
	{
		UButton* button = Cast<UButton>(widget);
		if (button)
		{
			_itemButtons.Add(button);
		}
	}
}

void UMyInventoryUI::SetItemImage(int32 inventoryIndex, AMyItem* item)
{
	UImage* image = Cast<UImage>(_itemButtons[inventoryIndex]->GetChildAt(0));
	
	if (item == nullptr)
		image->SetBrushFromTexture(_defaultTexture);
	else
		image->SetBrushFromTexture(item->GetItemTexture());
}