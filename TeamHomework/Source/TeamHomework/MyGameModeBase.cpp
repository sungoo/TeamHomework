// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayer.h"
#include "BossMonster.h"
#include "MyStatComponent.h"

#include "MyGameInstance.h"
#include "MyPlayerManager.h"
#include "MyItem.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


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

void AMyGameModeBase::StartBossMode(ABossMonster* boss)
{
    // Clone Players
    UClass* playerClass = PlayerManager->SetDefaultPawnClass();

    TArray<AMyPlayer*> players;
    auto originPlayer = Cast<AMyPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());
    players.Add(originPlayer);

    const int32 aggroNum = boss->_aggroNum;
    const float rad = 500.0f;
	FVector bossPos = boss->GetActorLocation();

    for (int32 i = 0; i < aggroNum; ++i)
    {
        const float Angle = FMath::DegreesToRadians(360.0f / aggroNum * i);
        const FVector spawnLocation = bossPos + FVector(FMath::Cos(Angle) * rad, FMath::Sin(Angle) * rad, bossPos.Z);
        FActorSpawnParameters spawnParams;

        FRotator lookAtPlayer = UKismetMathLibrary::FindLookAtRotation(spawnLocation, bossPos);
  
        AMyPlayer* player = GetWorld()->SpawnActor<AMyPlayer>(playerClass, spawnLocation, lookAtPlayer, spawnParams);
        // AIController Possess, 실행 시작
        players.Add(player);
        boss->_players = players;
	}

    _bossModeStarted = true;
}

