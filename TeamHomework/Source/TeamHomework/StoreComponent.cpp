// Fill out your copyright notice in the Description page of Project Settings.


#include "StoreComponent.h"

#include "MyPlayer.h"
#include "MyInventoryComponent.h"

// Sets default values for this component's properties
UStoreComponent::UStoreComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	_storeInventory = CreateDefaultSubobject<UMyInventoryComponent>(TEXT("Store Inventory"));
	_playerInventory = CreateDefaultSubobject<UMyInventoryComponent>(TEXT("Player Inventory"));
}


// Called when the game starts
void UStoreComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStoreComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStoreComponent::SetSaleItem(int32 slot, AMyItem* item)
{
	if (slot < 0 || slot >= _itemSlotNum)
		return;
	if (_itemOnSale.Find(slot))
		return;
	if (item == nullptr)
		return;

	_itemOnSale.Add(slot, item);
	_storeInventory->AddItem(item);
}

void UStoreComponent::StoreOpen(AMyPlayer* targetPlayer)
{
	if (targetPlayer)
		_playerInventory = targetPlayer->GetInventory();
	else
		_playerInventory = nullptr;
}

