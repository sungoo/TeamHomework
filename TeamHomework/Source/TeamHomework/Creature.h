// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Creature.generated.h"

class UCameraComponent;
class UInputAction;
class UInputMappingContext;
class AMyUIManager;
struct FInputActionValue;

DECLARE_MULTICAST_DELEGATE(Delegate_AttackEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_AttackHitEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_Death);

DECLARE_MULTICAST_DELEGATE(Delegate_ViewInventory);
DECLARE_MULTICAST_DELEGATE(Delegate_AddItemToInventory);


UCLASS()
class TEAMHOMEWORK_API ACreature : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACreature();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	virtual void Init();
	UFUNCTION()
	virtual void Disable();

	UFUNCTION()
	void Unpossess();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Attack function
	UFUNCTION()
	void OnAttackEnded(class UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void AttackHit();

	virtual float TakeDamage(
		float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser
	) override;
	int32 GetcurHP();

	Delegate_AttackEnded _attackEndedDelegate;

	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = Event, meta = (AllowPrivateAccess = "true"))
	FDelegate_AttackHitEvent _attackHitEventDelegate;

	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = Event, meta = (AllowPrivateAccess = "true"))
	FDelegate_Death _deathEventDelegate;

	Delegate_ViewInventory _viewInventoryDelegate;
	Delegate_AddItemToInventory _addItemToInventoryDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	bool _isActive = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool _isAttacking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _vertical = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _horizontal = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	int _curAttackIndex = 0;

	//AttackHitPoint
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AttackHit, meta = (AllowPrivateAccess = "true"))
	FVector _hitPoint;

	//Animation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	class UMyAnimInstance* _animInstance;

	//Componenets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	class UMyStatComponent* _statCom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item, meta = (AllowPrivateAccess = "true"))
	class UMyInventoryComponent* _inventoryCom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = UI, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpBarWidget;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	//class AAIController* _aiController;
};
