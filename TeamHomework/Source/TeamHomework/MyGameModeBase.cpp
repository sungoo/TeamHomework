// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayer.h"

#include "MyGameInstance.h"
#include "MyPlayerManager.h"
#include "MyItem.h"

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

    
    static ConstructorHelpers::FClassFinder<AMyItem> item(
        TEXT("/Script/CoreUObject.Class'/Script/TeamHomework.MyItem'")
    );
    if (item.Succeeded())
    {
        _itemClass = item.Class;
    }
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

    // 스폰할 위치와 회전 설정
    FVector spawnLocation = FVector(200.0f, 0.0f, 20.0f);  // 기본 위치
    FRotator spawnRotation = FRotator::ZeroRotator;

    for (int i = 0; i < 3; i++)
    {
        spawnLocation.X += 500.0f * i;

        AMyItem* item = GetWorld()->SpawnActor<AMyItem>(
            _itemClass,
            spawnLocation,
            spawnRotation
        );
        item->InitItemByCode(i+1);

        _items.Add(item);
    }
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

