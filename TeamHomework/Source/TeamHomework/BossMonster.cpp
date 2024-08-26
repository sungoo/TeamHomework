// Fill out your copyright notice in the Description page of Project Settings.


#include "BossMonster.h"
#include "Components/SphereComponent.h"
#include "MyPlayer.h"

ABossMonster::ABossMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));

	_trigger->SetupAttachment(RootComponent);
	_trigger->SetCollisionProfileName(TEXT("MyNPC"));
	_trigger->SetSphereRadius(500.0f);
}

void ABossMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ABossMonster::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	_trigger->OnComponentBeginOverlap.AddDynamic(this, &ABossMonster::OnMyCharacterOverlap);
}

void ABossMonster::OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	_isOverlapped = true;
	_player = Cast<AMyPlayer>(OtherActor);
}

void ABossMonster::CharacterOverlapped()
{
	if (_isOverlapped && _player != nullptr)
	{

	}
}

void ABossMonster::Tick(float DeltaTime)
{
}
