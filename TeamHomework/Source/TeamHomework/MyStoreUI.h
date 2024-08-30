// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyStoreUI.generated.h"

/**
 * 
 */
UCLASS()
class TEAMHOMEWORK_API UMyStoreUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual bool Initialize();

	void SetButtonsPlayer();

	void SetDefaultTexture();

	void SetItemImage(int32 inventoryIndex, class AMyItem* item = nullptr);

	UFUNCTION()
	void SetTargetItem0();
	UFUNCTION()
	void SetTargetItem1();
	UFUNCTION()
	void SetTargetItem2();
	UFUNCTION()
	void SetTargetItem3();
	UFUNCTION()
	void SetTargetItem4();
	UFUNCTION()
	void SetTargetItem5();
	UFUNCTION()
	void SetTargetItem6();
	UFUNCTION()
	void SetTargetItem7();
	UFUNCTION()
	void SetTargetItem8();

	UFUNCTION()
	void ShowItem();

	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid_Player;

	UPROPERTY(meta = (BindWidget))
	TArray<class UUI_E_MyButton*> Button_;

	UPROPERTY(meta = (BindWidget))
	TArray<class UImage*> Image_;

	UPROPERTY(meta = (BindWidget))
	class UImage* Item_texture_P;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_itemName_P;

	UPROPERTY(meta = (BindWidget))
	class UButton* SellButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Texture, meta = (AllowPrivateAccess = "true"))
	class UTexture2D* _defaultTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Texture, meta = (AllowPrivateAccess = "true"))
	FString _defaultText;

	UPROPERTY()
	class AMyItem* _targetItem;
	UPROPERTY()
	int32 _targetIndex = -1;
};
