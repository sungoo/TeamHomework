// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"

#include "MyGameInstance.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "MyPlayer.h"

// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> sm
	(TEXT("/Script/Engine.StaticMesh'/Game/Weapon_Pack/Mesh/Weapons/Weapons_Kit/SM_Sickle.SM_Sickle'"));

	if (sm.Succeeded())
	{
		_meshComponent->SetStaticMesh(sm.Object);
	}

	_meshComponent->SetupAttachment(RootComponent);
	_trigger->SetupAttachment(_meshComponent);

	_meshComponent->SetCollisionProfileName(TEXT("MyItem"));
	_trigger->SetCollisionProfileName(TEXT("MyItem"));
	_trigger->SetSphereRadius(60.0f);

	UTexture2D* texture = LoadObject<UTexture2D>(nullptr, TEXT("/Script/Engine.Texture2D'/Game/Graphics/Icons/Tex_Default.Tex_Default'"));
	_textuer = texture;
}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnMyCharacterOverlap);
	_trigger->OnComponentEndOverlap.AddDynamic(this, &AMyItem::OnMyCharacterOverlapEnd);
}

void AMyItem::Init()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = false;
}

void AMyItem::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;
}

void AMyItem::OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	_player = Cast<AMyPlayer>(OtherActor);
	if (_player != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Collision!"));
		//ItemOverlapDelegate.Broadcast(this);
		/*if (_player->_tryGetItem) 
		{
		}*/
		_player->AddItem(this);
		Disable();
	}
}

void AMyItem::OnMyCharacterOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	_player = nullptr;
	UE_LOG(LogTemp, Warning, TEXT("Player Collision End!"));
	//OverlapEndDelegate.Broadcast(nullptr);
}


void AMyItem::InitItemByCode(int32 code)
{
	auto gameinstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	if (gameinstance != nullptr)
	{
		FItemData data = gameinstance->GetItemDataByCode(code);
		if (data.name == TEXT(""))
		{
			UE_LOG(LogTemp, Error, TEXT("Data Load Faild!"));
			return;
		}

		_name = data.name;
		_textuer = data.textuer;
		_mesh = data.mesh;
		_type = data.type;
		_statAddValue = data.statAddValue;
		_price = data.price;

		_meshComponent->SetStaticMesh(_mesh);
	}
}

void AMyItem::ReleaseItem(FVector location, FRotator rotation)
{
	SetActorLocationAndRotation(location, rotation);
	Init();
}

UTexture2D* AMyItem::GetItemTexture()
{
	return _textuer;
}

UStaticMesh* AMyItem::GetItemMesh()
{
	return _mesh;
}

FString AMyItem::GetItemName()
{
	return _name;
}

int32 AMyItem::GetItemPrice()
{
	return _price;
}
