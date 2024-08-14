// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

AMyPlayerController::AMyPlayerController()
{
	_myPawn = GetPawn();
}

void AMyPlayerController::ShowUI()
{
	// TODO : 터질수도 있음
	// bShowMouseCursor = true;
	// Possess(_myPawn);
}

void AMyPlayerController::HideUI()
{
	// TODO : 터질수도 있음
	// bShowMouseCursor = false;
	// UnPossess();
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (subSystem)
	{
		subSystem->AddMappingContext(_inputMappingContext, 0);
	}
}
