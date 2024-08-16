// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "MyStatComponent.h"
#include "MyInventoryComponent.h"
#include "MyItem.h"

#include "MyAnimInstance.h"

#include "MyGameInstance.h"
#include "MyPlayerManager.h"
#include "MyUIManager.h"


AMyPlayer::AMyPlayer()
{
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// 상속관계 설정
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	FString meshPath = PlayerManager->SetMesh();
	USkeletalMesh* skeletalMesh = LoadObject<USkeletalMesh>(nullptr, *meshPath);
	if (skeletalMesh)
	{
		GetMesh()->SetSkeletalMesh(skeletalMesh);
	}

	SetAnimation();
}

void AMyPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AMyPlayer::SetAnimation()
{
	Super::SetAnimation();

	FString montagePath = PlayerManager->SetAnimMontage();
	UAnimMontage* animMontage = LoadObject<UAnimMontage>(nullptr, *montagePath);
	if (animMontage)
	{
		if (_animInstance->IsValidLowLevel())
		{
			_animInstance->SetAnimMontage(animMontage);
		}
	}
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(_turnAction, ETriggerEvent::Triggered, this, &AMyPlayer::Turn);
		EnhancedInputComponent->BindAction(_lookUpAction, ETriggerEvent::Triggered, this, &AMyPlayer::LookUp);

		// Jumping
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyPlayer::JumpA);

		// Attack
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Triggered, this, &AMyPlayer::AttackA);

		// Get Item
		EnhancedInputComponent->BindAction(_getItemAction, ETriggerEvent::Started, this, &AMyPlayer::TryGetItem);
		EnhancedInputComponent->BindAction(_getItemAction, ETriggerEvent::Completed, this, &AMyPlayer::TryGetItemEnd);

		// Drop Item
		EnhancedInputComponent->BindAction(_dropItemAction, ETriggerEvent::Started, this, &AMyPlayer::DropItem);

		// View Inventory
		EnhancedInputComponent->BindAction(_viewInventoryAction, ETriggerEvent::Started, this, &AMyPlayer::ViewInventory);
	}
}

void AMyPlayer::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		// add movement 
		_vertical = MovementVector.Y;
		_horizontal = MovementVector.X;

		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AMyPlayer::Turn(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
	}
}

void AMyPlayer::LookUp(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerPitchInput(LookAxisVector.X);
	}
}

void AMyPlayer::JumpA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		ACharacter::Jump();
		FVector MoveMentVector = GetActorLocation();
		_height = MoveMentVector.Z;
	}
}

void AMyPlayer::AttackA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();
	
	if (isPressed && _isAttacking == false && _animInstance != nullptr)
	{
		_animInstance->PlayAttackMontage();
		_isAttacking = true;
	
		_curAttackIndex %= 3;
		_curAttackIndex++;
		_animInstance->JumpToSection(_curAttackIndex);
	}
}

void AMyPlayer::ViewInventory(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();
	
	if (isPressed)
	{
		UIManager->ToggleInventory();
	}
}

void AMyPlayer::TryGetItem(const FInputActionValue& value)
{
	_tryGetItem = true;
}

void AMyPlayer::TryGetItemEnd(const FInputActionValue& value)
{
	_tryGetItem = false;
}

void AMyPlayer::AddItem(AMyItem* item)
{
	_inventoryCom->AddItem(item);
	UIManager->AddItem(_inventoryCom);

	// TODO : 아이템 먹으면 stat 상승
}

void AMyPlayer::DropItem(const FInputActionValue& value)
{
	_inventoryCom->DropItem();
	
	// TODO : 아이템 먹으면 sata 감소
}
