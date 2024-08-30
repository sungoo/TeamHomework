// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StoreComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAMHOMEWORK_API UStoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStoreComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetSaleItem(int32 slot, class AMyItem* item);
	void StoreOpen(class AMyPlayer* targetPlayer);
private:
	UPROPERTY()
	class UMyInventoryComponent* _storeInventory;
	UPROPERTY()
	class UMyInventoryComponent* _playerInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Selling, meta = (AllowPrivateAccess = "true"))
	int32 _itemSlotNum = 9;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Selling, meta = (AllowPrivateAccess = "true"))
	TMap<int32, class AMyItem*> _itemOnSale;
};
