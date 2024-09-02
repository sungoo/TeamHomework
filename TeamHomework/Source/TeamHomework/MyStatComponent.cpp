// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStatComponent.h"

#include "MyGameInstance.h"

// Sets default values for this component's properties
UMyStatComponent::UMyStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyStatComponent::Reset()
{
	_curhp = _maxhp + _modHP;
	_atk = _atk_default + _modATK;
	_speed = 1 + _modSpeed;
	_curExp = 0;
}

void UMyStatComponent::SetHp(int32 hp)
{
	if (this == nullptr)
		return;
	_curhp = hp;
	if (_curhp <= 0)
	{
		_curhp = 0;
		_deathDelegate.Broadcast();
		_deathDelegate.Clear();
	}
	if (_curhp >= _maxhp + _modHP)
		_curhp = _maxhp + _modHP;

	float ratio = HpRatio();

	_hpChangedDelegate.Broadcast(ratio);
}

void UMyStatComponent::SetLevelAndInit(int level)
{
	auto gameinstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	
	if (gameinstance != nullptr)
	{
		FMyStatData data = gameinstance->GetStatDataByTypeAndLevel(_type, level);
		if (data.type != _type)
		{
			UE_LOG(LogTemp, Error, TEXT("Data Load Faild!"));
			return;
		}

		_level = data.level;
		_expToLevelUp = data.exp;
		_maxhp = data.maxHp;
		_atk_default = data.attack;
		_speed = data.speed;
		_gold = data.gold;
	}
}

int UMyStatComponent::AddCurHP(float amount)
{
	int beforeHP = _curhp;

	int afterHp = beforeHP + amount;

	SetHp(afterHp);

	return afterHp - beforeHP;
}

void UMyStatComponent::ModMaxHP(int32 amount)
{
	_modHP += amount;
	_curhp = _maxhp + _modHP;
}

void UMyStatComponent::ModATK(int32 amount)
{
	_modATK += amount;
	_atk = _atk_default + _modATK;
}

void UMyStatComponent::ModSpeed(float amount)
{
	_modSpeed += amount;
	_speed += _modSpeed;
}

void UMyStatComponent::AddGold(int32 amount)
{
	_modGold += amount;
	_gold += _modGold;
}

