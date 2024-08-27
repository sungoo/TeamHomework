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
	UMyInventoryUI(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
	void SetButtons();
	
	void SetDefaultTexture();

	void SetItemImage(int32 inventoryIndex, AMyItem* item = nullptr);

	void ShowItem();

	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid;

	UPROPERTY(meta = (BindWidget))
	TArray<class UButton*> Button_;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_itemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Texture, meta = (AllowPrivateAccess = "true"))
	class UTexture2D* _defaultTexture;
};
