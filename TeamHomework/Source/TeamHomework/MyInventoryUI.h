// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyItem.h"
#include "MyInventoryUI.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UMyInventoryUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	void SetButtons();

	void SetItemImage(int32 inventoryIndex, AMyItem* item);

	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid;

	UPROPERTY()
	TArray<class UButton*> _itemButtons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Texture, meta = (AllowPrivateAccess = "true"))
	class UTexture2D* _defaultTexture;
};
