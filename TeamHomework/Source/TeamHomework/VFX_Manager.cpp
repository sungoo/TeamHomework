// Fill out your copyright notice in the Description page of Project Settings.


#include "VFX_Manager.h"

#include "Effect.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"

// Sets default values
AVFX_Manager::AVFX_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVFX_Manager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVFX_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

