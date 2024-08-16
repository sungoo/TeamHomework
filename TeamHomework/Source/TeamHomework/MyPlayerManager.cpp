// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerManager.h"

// Sets default values
AMyPlayerManager::AMyPlayerManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_playerType = EPlayerType::Knight;
}

// Called when the game starts or when spawned
void AMyPlayerManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPlayerManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayerManager::SetPlayerType(EPlayerType type)
{
	_playerType = type;
}

EPlayerType AMyPlayerManager::GetPlayerType() const
{
	return EPlayerType();
}

FString AMyPlayerManager::SetMesh()
{
	FString meshPath;

	switch (_playerType)
	{
	case EPlayerType::Knight:
		meshPath = TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonSunWukong/Characters/Heroes/Wukong/Meshes/Wukong.Wukong'");
		break;
	case EPlayerType::Archer:
		// TODO
		meshPath = TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonSparrow/Characters/Heroes/Sparrow/Meshes/Sparrow.Sparrow'");
		break;
	default:
		meshPath = TEXT("");
	}

	return meshPath;
}

FString AMyPlayerManager::SetAnimMontage()
{
	FString meshPath;

	switch (_playerType)
	{
	case EPlayerType::Knight:
		meshPath = TEXT("/Script/Engine.AnimMontage'/Game/Blueprint/Animation/Knight/KnightAnimMontage.KnightAnimMontage'");
		break;
	case EPlayerType::Archer:
		// TODO
		meshPath = TEXT("");
		break;
	default:
		meshPath = TEXT("");
	}

	return meshPath;
}

