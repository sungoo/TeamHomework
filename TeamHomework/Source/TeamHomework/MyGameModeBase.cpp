// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayer.h"
#include "BossMonster.h"
#include "MyStatComponent.h"

#include "Knight.h"
#include "Archer.h"

#include "MyGameInstance.h"
#include "MyUIManager.h"
#include "MyPlayerManager.h"
#include "MyItem.h"
#include "MyHpBar.h"
#include "Components/WidgetComponent.h"
#include "UI_AggroInfo.h"

#include "MyAIController.h"

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
    UClass* knightClass = StaticLoadClass(AKnight::StaticClass(), nullptr, TEXT("/Script/Engine.Blueprint'/Game/Blueprint/Player/Knight_BP.Knight_BP_C'"));
    UClass* archerClass = StaticLoadClass(AArcher::StaticClass(), nullptr, TEXT("/Script/Engine.Blueprint'/Game/Blueprint/Player/Archer_BP.Archer_BP_C'"));

    TArray<TTuple<AMyPlayer*, int32>> players;
    auto originPlayer = Cast<AMyPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());
    players.Add(MakeTuple(originPlayer, 0));

    AMyAIController* aiController = GetWorld()->SpawnActor<AMyAIController>();

    const int32 aggroNum = boss->_aggroNum;
    const float rad = 500.0f;
	FVector bossPos = boss->GetActorLocation();

    for (int32 i = 0; i < aggroNum; ++i)
    {
        // 기본 각도 계산
        const float angle = FMath::DegreesToRadians(360.0f / aggroNum * i);

        // 스폰 위치에 랜덤 오프셋 추가
        const float randomOffsetX = FMath::RandRange(-300.0f, 300.0f); // X축 랜덤 오프셋
        const float randomOffsetY = FMath::RandRange(-300.0f, 300.0f); // Y축 랜덤 오프셋

        const FVector spawnLocation = bossPos + FVector(FMath::Cos(angle) * rad + randomOffsetX, FMath::Sin(angle) * rad + randomOffsetY, bossPos.Z);

        FActorSpawnParameters spawnParams;

        // 회전을 랜덤하게 설정
        FRotator lookAtPlayer = UKismetMathLibrary::FindLookAtRotation(spawnLocation, bossPos);
        lookAtPlayer.Yaw += FMath::RandRange(-30.0f, 30.0f); // Yaw에 랜덤한 오프셋 추가

        UClass* playerClass;
        if (i % 2 == 0)
            playerClass = knightClass;
        else
            playerClass = archerClass;

        AMyPlayer* player = GetWorld()->SpawnActor<AMyPlayer>(playerClass, spawnLocation, lookAtPlayer, spawnParams);
        player->_hpBarWidget->SetVisibility(false);
        player->_hpBarWidget->Deactivate();

        players.Add(MakeTuple(player, i + 1));
	}

    boss->_players = players;

    UIManager->GetAggroInfoUI()->SetPlayerInfo(players);
    UIManager->OpenUI(UI_List::AggroInfo);

    boss->_aggroDamageDelegate.AddUObject(UIManager->GetAggroInfoUI(), &UUI_AggroInfo::SetDamageValue);
    boss->_aggroHpChangedDelegate.AddUObject(UIManager->GetAggroInfoUI(), &UUI_AggroInfo::SetHpValue);

}

