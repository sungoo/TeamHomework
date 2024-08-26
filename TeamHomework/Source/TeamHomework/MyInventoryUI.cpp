// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInventoryUI.h"

#include "Components/UniformGridPanel.h"
#include "Components/Widget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"

#include "MyPlayerController.h"

#include "Kismet/GameplayStatics.h"

UMyInventoryUI::UMyInventoryUI(const FObjectInitializer& ObjectInitializer)
:UUserWidget(ObjectInitializer)
{
	SetDefaultTexture();
}

void UMyInventoryUI::NativeConstruct()
{
	Super::NativeConstruct();

	SetButtons();
	for (int i = 0; i < 9; i++)
	{
		SetItemImage(i);
	}
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
			Button_.Add(button);
		}
	}
}

void UMyInventoryUI::SetDefaultTexture()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> texture(
		TEXT("/Script/Engine.Texture2D'/Game/Graphics/Icons/Tex_efault.Tex_Default'")
	);
	if (texture.Succeeded())
	{
		_defaultTexture = texture.Object;
	}
}

void UMyInventoryUI::SetItemImage(int32 inventoryIndex, AMyItem* item)
{
	UImage* image = Cast<UImage>(Button_[inventoryIndex]->GetChildAt(0));
	
	if (item == nullptr)
		image->SetBrushFromTexture(_defaultTexture);
	else
		image->SetBrushFromTexture(item->GetItemTexture());
}