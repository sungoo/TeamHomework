// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyUIManager.generated.h"

UENUM()
enum class UI_List
{
	//UI List Sorted by "Z-Index".
	//UI will Stack like this list (top to bottom)
	BaseDisplay,
	PlayerSelection,
	Inventory,
	Store,
};

UCLASS()
class TEAMHOMEWORK_API AMyUIManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyUIManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class UMyInventoryUI* GeInventoryUI() { return _inventoryUI; };

	UFUNCTION()
	void ToggleInventory();

	UFUNCTION()
	void ToggleStore();

	UFUNCTION()
	void AddItem(class UMyInventoryComponent* inventoryComponent);

	UFUNCTION()
	void DropItem(class UMyInventoryComponent* inventoryComponent);

private:
	UPROPERTY()
	TArray<UUserWidget*> _widgets;

	UPROPERTY()
	class UUI_BaseDisplay* _baseDisplayUI;

	UPROPERTY()
	class UMyInventoryUI* _inventoryUI;

	UPROPERTY()
	class UPlayerSelectionUI* _playerSelectionUI;

	UPROPERTY()
	class UMyStoreUI* _storeUI;
};
