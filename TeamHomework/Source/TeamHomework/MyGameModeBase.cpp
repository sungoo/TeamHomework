// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayer.h"

#include "MyGameInstance.h"
#include "MyPlayerManager.h"

#include "Kismet/GameplayStatics.h"

AMyGameModeBase::AMyGameModeBase()
{
    APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
    if (playerController)
    {
        FInputModeUIOnly InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        playerController->SetInputMode(InputMode);
        playerController->bShowMouseCursor = true;
    }
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AMyGameModeBase::SetSelectedPlayer()
{
    UClass* playerClass = PlayerManager->SetDefaultPawnClass();

    if (playerClass)
    {
        DefaultPawnClass = playerClass;
    }

    APlayerController* playerController = GetWorld()->GetFirstPlayerController();
    if (playerController)
    {
        // 스폰할 위치와 회전 설정
        FVector spawnLocation = FVector(0.0f, 0.0f, 500.0f);  // 기본 위치
        FRotator spawnRotation = FRotator::ZeroRotator;

        // Pawn을 수동으로 스폰
        APawn* spawnedPawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, spawnLocation, spawnRotation);

        if (spawnedPawn)
        {
            // PlayerController가 스폰된 Pawn을 소유하게 함
            playerController->Possess(spawnedPawn);
        }
    }
}

