// Fill out your copyright notice in the Description page of Project Settings.


#include "Effect.h"

#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"

// Sets default values
AEffect::AEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEffect::Play(FVector location, FRotator rotation)
{
	if (_particleCom->IsActive() || _niagaraCom->IsActive())
		return;

	SetActorLocationAndRotation(location, rotation);

	if(_particleCom)
		_particleCom->ActivateSystem();
	if(_niagaraCom)
		_niagaraCom->ActivateSystem();
}

void AEffect::StopParticle()
{
	if (_particleCom == nullptr)
		return;
	_particleCom->DeactivateSystem();
}

void AEffect::StopNiagara()
{
	if (_niagaraCom == nullptr)
		return;
	_niagaraCom->Deactivate();
}

void AEffect::Stop()
{
	StopParticle();
	StopNiagara();
}

bool AEffect::IsPlaying()
{
	return _particleCom->IsActive() || _niagaraCom->IsActive();
}

