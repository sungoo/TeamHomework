// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

UENUM()
enum class TYPE
{
	HP,
	ATK,
	SPEED,
	GOLD,
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* textuer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 itemCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TYPE type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 statAddValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 price;
};

UCLASS()
class TEAMHOMEWORK_API AMyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	void Init();
	void Disable();

	UFUNCTION()
	void OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	void InitItemByCode(int32 code);

	void ReleaseItem(FVector location, FRotator rotation = FRotator::ZeroRotator);

	//Getter
	class UTexture2D* GetItemTexture();
	class UStaticMesh* GetItemMesh();

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _meshComponent;

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* _trigger;

	UPROPERTY()
	class AMyPlayer* _player;

	//Item Description
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	FName _name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	class UTexture2D* _textuer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	class UStaticMesh* _mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	TYPE _type;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	int32 _statAddValue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	int32 _price;
};
