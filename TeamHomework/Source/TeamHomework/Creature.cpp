// Fill out your copyright notice in the Description page of Project Settings.


#include "Creature.h"

#include "MyAnimInstance.h"
#include "MyInventoryComponent.h"
#include "MyStatComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/Button.h"

#include "GameFramework/Controller.h"

#include "Engine/DamageEvents.h"

// Sets default values
ACreature::ACreature()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> sm(
		TEXT("")
	);
	
	if (sm.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(sm.Object);
	}
	
	//Stat
	_statCom = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
	//Inventory
	_inventoryCom = CreateDefaultSubobject<UMyInventoryComponent>(TEXT("Inventory"));

}

//Called when the game starts or when spawned
void ACreature::BeginPlay()
{
	Super::BeginPlay();
	
	Init();
}

void ACreature::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (_animInstance->IsValidLowLevel())
	{
		_animInstance->OnMontageEnded.AddDynamic(this, &ACreature::OnAttackEnded);
		//_animInstance->_attackDelegate.AddUObject(this, &AMyCharacter::AttackHit);
		//_animInstance->_deathDelegate.AddUObject(this, &AMyCharacter::Disable);
	}

	_statCom->SetLevelAndInit(1);

	//_hpBarWidget->InitWidget();
	//auto hpBar = Cast<UMyHpBar>(_hpBarWidget->GetUserWidgetObject());
	//if (hpBar)
	//{
	//	_statCom->_hpChangedDelegate.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	//	//_statCom->_hpChangedDelegate.AddUObject(this, &AMyCharacter::PlayHitNiagara);
	//	//_statCom->_deathDelegate.AddUObject(this, &AMyCharacter::PlayDeathNiagara);
	//}
}

void ACreature::Init()
{
	//_statCom->Reset();

	_isActive = true;
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = true;

	/*_statCom->_deathDelegate.AddUObject(this, &AMyCharacter::Unpossess);

	if (_aiController && GetController() == nullptr)
	{
		auto ai_Controller = Cast<AMyAIController>(_aiController);
		if (ai_Controller)
			ai_Controller->Possess(this);
	}*/
}

void ACreature::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;

	//_deathEvent.Broadcast();
	//EffectManager->Play("Death", GetActorLocation());

	Unpossess();
}

void ACreature::Unpossess()
{
	if (GetController() == nullptr)
		return;

	GetController()->UnPossess();
}

// Called every frame
void ACreature::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACreature::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACreature::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Log, TEXT("Attack Ended!"));
	isAttacked = false;

	_attackEndedDelegate.Broadcast();
}

void ACreature::AttackHit()
{
	FHitResult hitResult;
	//본인은 무시..
	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 1000.0f;
	float attackRadius = 20.0f;
	float harfheight = attackRange * 0.5f;
	FVector foward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector::UpVector, foward);
	FVector center = GetActorLocation() + foward * harfheight;

	FVector start = GetActorLocation();
	FVector end = start + foward * harfheight;

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		hitResult,
		start,
		end,
		quat,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(attackRadius, harfheight),
		params
	);

	FQuat rot = (FQuat)(GetActorRotation());

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		UE_LOG(LogTemp, Log, TEXT("HitActor : %s"), *hitResult.GetActor()->GetName());

		//Todo : Takedamage
		FDamageEvent damageEvent;
		hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamage(), damageEvent, GetController(), this);
		_hitPoint = hitResult.ImpactPoint;

		//_attackHitEvent.Broadcast();
		//EffectManager->Play("Shoot", _hitPoint);
	}
}

bool ACreature::GetAttacked()
{
	return isAttacked;
}

float ACreature::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	float damaged = -_statCom->AddCurHP(-Damage);

	//if (_animInstance != nullptr && _statCom->GetCurHP() > 0)
	//{
	//	_animInstance->PlayDamagedMontage();
	//}

	//if (_animInstance != nullptr && _statCom->GetCurHP() <= 0)
	//{
	//	_statCom->AddCurHP(-999);// _hp = 0
	//	_isActive = false;
	//	_animInstance->PlayDeathMontage();
	//	DropAllItems();
	//}
	return damage;
}

int32 ACreature::GetcurHP()
{
	return _statCom->GetCurHP();
}

