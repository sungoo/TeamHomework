// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUIManager.h"

#include "MyInventoryUI.h"
#include "MyHpBar.h"

#include "Components/Image.h"

#include "MyItem.h"
#include "MyInventoryComponent.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AMyUIManager::AMyUIManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<UUserWidget> inventoryClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInventory_BP.MyInventory_BP_C'"));
	if (inventoryClass.Succeeded())
	{
		_inventoryUI = CreateWidget<UMyInventoryUI>(GetWorld(), inventoryClass.Class);
	}
}

// Called when the game starts or when spawned
void AMyUIManager::BeginPlay()
{
	Super::BeginPlay();
	
	_inventoryUI->AddToViewport();
	_inventoryUI->SetVisibility(ESlateVisibility::Hidden);
}

// Called every frame
void AMyUIManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyUIManager::ToggleInventory()
{
	_inventoryUI->ToggleVisibility();
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

