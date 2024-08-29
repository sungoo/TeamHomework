// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMonster.h"
#include "MyAIController.h"
#include "Creature.h"
#include "MystatComponent.h"
#include "Engine/DamageEvents.h"
#include "MyItem.h"
#include "Components/WidgetComponent.h"



AMyMonster::AMyMonster()
{
	static ConstructorHelpers::FClassFinder<AMyItem> item(
		TEXT("/Script/CoreUObject.Class'/Script/TeamHomework.MyItem'")
	);
	if (item.Succeeded())
	{
		_itemClass = item.Class;
	}

	_statUpWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("StstUpWIdget"));
	_statUpWidget->SetupAttachment(GetMesh());
	_statUpWidget->SetWidgetSpace(EWidgetSpace::Screen);
	_statUpWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 200.0f));

	static ConstructorHelpers::FClassFinder<UUserWidget> statUp(
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprint/UI/StatUp_BP.StatUp_BP_C'")
	);
	if (statUp.Succeeded())
	{
		_statUpWidget->SetWidgetClass(statUp.Class);
	}
}

void AMyMonster::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_statUpWidget->InitWidget();
	_statUpWidget->SetVisibility(false);
}

void AMyMonster::BeginPlay()
{
	Super::BeginPlay();

	Init();
	SetAnimation();
}

void AMyMonster::Init()
{
	Super::Init();

	//_statCom->SetHp(10.0f);

	auto aiController = Cast<AMyAIController>(GetController());
	aiController->Possess(this);
}

void AMyMonster::Disable()
{
	GetMesh()->SetVisibility(false, true);
	_statUpWidget->SetVisibility(true);

	GetWorld()->GetTimerManager().SetTimer(timerHandle, [this]()
		{
			if (_statUpWidget)
			{
				_statUpWidget->SetVisibility(false);
				SetActorHiddenInGame(true); // 액터를 게임에서 숨깁니다.
				SetActorEnableCollision(false); // 충돌 비활성화
				// SetActorTickEnabled(false); // Tick 비활성화
				PrimaryActorTick.bCanEverTick = false;
				_isDead = true;
			}
		}, 1.0f, false);

	FVector itemPos = GetActorLocation();
	itemPos.Z = 20.0f;
	if (_isDead == false)
	{
		AMyItem* item = GetWorld()->SpawnActor<AMyItem>(
			_itemClass,
			itemPos,
			FRotator::ZeroRotator
		);

		item->InitItemByCode(1);
	}
}

void AMyMonster::AttackHit()
{
	Super::AttackHit();

	FHitResult hitResult;

	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 150.0f;
	float attackRadius = 50.0f;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		GetActorLocation() + GetActorForwardVector() * attackRange,
		GetActorLocation() + GetActorForwardVector() * attackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(attackRadius),
		params
	);

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		// && !hitResult.GetActor()->IsA(this->GetClass())

		UE_LOG(LogTemp, Warning, TEXT("Hit Success"));
		FDamageEvent damageEvent;

		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);

		drawColor = FColor::Red;
	}

	FVector center = GetActorLocation() + GetActorForwardVector() * attackRange;
	DrawDebugSphere(GetWorld(), center, attackRadius, 30, drawColor, false, 2.0f);
}
