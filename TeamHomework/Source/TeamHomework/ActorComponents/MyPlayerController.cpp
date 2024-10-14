// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

#include "Kismet/GameplayStatics.h"

AMyPlayerController::AMyPlayerController()
{
	_myPawn = GetPawn();
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
