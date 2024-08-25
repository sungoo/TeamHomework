// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAMHOMEWORK_API UMyInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	void AddItem(class AMyItem* item);
	void DropItem();
	void DropItemOfSlot(int32 slotNum);

	UTexture2D* GetItemTexture(int32 slotNum);
	FName GetItemName(int32 slotNum);
	int32 GetItemPrice(int32 slotNum);

	UPROPERTY()
	TArray<class AMyItem*> _items;

	UPROPERTY()
	int32 _inventoryMax = 9;

	UPROPERTY()
	TArray<int32> _emptySlots;

	UPROPERTY()
	UTexture2D* _defaultTexture;
};
