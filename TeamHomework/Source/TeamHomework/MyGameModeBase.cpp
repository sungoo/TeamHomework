// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayer.h"

AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AMyPlayer>
		myPlayer (TEXT("/Script/Engine.Blueprint'/Game/Blueprint/Player/MyPlayer_BP.MyPlayer_BP'"));

	if (myPlayer.Succeeded())
	{
		DefaultPawnClass = myPlayer.Class;
	}
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

