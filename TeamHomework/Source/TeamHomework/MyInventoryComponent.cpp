// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInventoryComponent.h"
#include "MyItem.h"

// Sets default values for this component's properties
UMyInventoryComponent::UMyInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UMyInventoryComponent::PutItem(AMyItem* item)
{
	bool result = false;

	if (_items.Num() < _inventoryMax)
	{
		_items.Push(item);
		result = true;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Inventory is full!"));
	}
	return result;
}

bool UMyInventoryComponent::DropItem(int32 itemIndex)
{
	bool result = false;

	return result;
}

