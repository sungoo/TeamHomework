// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Effect.generated.h"

class UParticleSystemComponent;
class UNiagaraComponent;

UCLASS()
class TEAMHOMEWORK_API AEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEffect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Play(FVector location, FRotator rotation = FRotator::ZeroRotator);

	void StopParticle();
	void StopNiagara();
	void Stop();

	bool IsPlaying();

private:
	UParticleSystemComponent* _particleCom;
	UNiagaraComponent* _niagaraCom;
};
