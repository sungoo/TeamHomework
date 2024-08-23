// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUIManager.h"

#include "MyInventoryUI.h"
#include "PlayerSelectionUI.h"
#include "MyHpBar.h"
#include "MyStoreUI.h"
#include "UI_BaseDisplay.h"

#include "Components/Image.h"

#include "MyItem.h"
#include "MyInventoryComponent.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AMyUIManager::AMyUIManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	static ConstructorHelpers::FClassFinder<UUserWidget> baseDisplay(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprint/UI/BaseDisplay_BP.BaseDisplay_BP_C'"));
	if (baseDisplay.Succeeded())
	{
		_baseDisplayUI = CreateWidget<UUI_BaseDisplay>(GetWorld(), baseDisplay.Class);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> inventoryClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInventory_BP.MyInventory_BP_C'"));
	if (inventoryClass.Succeeded())
	{
		_inventoryUI = CreateWidget<UMyInventoryUI>(GetWorld(), inventoryClass.Class);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> playerSelectionClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprint/UI/PlayerSelection_BP.PlayerSelection_BP_C'"));
	if (playerSelectionClass.Succeeded())
	{
		_playerSelectionUI = CreateWidget<UPlayerSelectionUI>(GetWorld(), playerSelectionClass.Class);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> storeClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprint/UI/MyStoreUI_BP.MyStoreUI_BP_C'"));
	if (storeClass.Succeeded())
	{
		_storeUI = CreateWidget<UMyStoreUI>(GetWorld(), storeClass.Class);
	}

	_widgets.Add(_baseDisplayUI);
	_widgets.Add(_playerSelectionUI);
	_widgets.Add(_inventoryUI);
	_widgets.Add(_storeUI);
}

// Called when the game starts or when spawned
void AMyUIManager::BeginPlay()
{
	Super::BeginPlay();
	
	OpenUI(UI_List::PlayerSelection);
}

// Called every frame
void AMyUIManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyUIManager::OpenUI(UI_List type)
{
	int32 UIindex = (int32)type;
	if (UIindex > _widgets.Num())
		return;

	_widgets[UIindex]->SetVisibility(ESlateVisibility::Visible);
	_widgets[UIindex]->AddToViewport(UIindex);
}

void AMyUIManager::CloseUI(UI_List type)
{
	int32 UIindex = (int32)type;
	if (UIindex > _widgets.Num())
		return;

	_widgets[UIindex]->SetVisibility(ESlateVisibility::Hidden);
	_widgets[UIindex]->RemoveFromParent();
}

void AMyUIManager::CloseAll()
{
	for (auto widget : _widgets)
	{
		widget->SetVisibility(ESlateVisibility::Hidden);
		widget->RemoveFromParent();
	}
}

void AMyUIManager::AddItem(UMyInventoryComponent* inventoryComponent)
{
	TArray<FItemDetail*> itemDetails = _inventoryUI->_itemDetails;
	TArray<AMyItem*> items = inventoryComponent->_items;

	for (int i = 0; i < items.Num(); i++)
	{
		if (i < itemDetails.Num())
		{
			itemDetails[i]->_itemType = items[i]->_itemType;
			_inventoryUI->SetItemImage(i);
		}
	}
}

void AMyUIManager::DropItem(UMyInventoryComponent* inventoryComponent)
{
}

