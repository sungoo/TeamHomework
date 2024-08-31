// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyStatComponent.generated.h"

UENUM()
enum class CreatureType
{
	Archer,
	Knight,
	Monster,
	BossMonster,
};

USTRUCT()
struct FMyStatData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	CreatureType type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 exp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 gold;
};


DECLARE_MULTICAST_DELEGATE_OneParam(HpChanged, float);
DECLARE_MULTICAST_DELEGATE(DeathDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAMHOMEWORK_API UMyStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Reset();

	void SetCreatureType(CreatureType type) { _type = type; }

	void SetMaxHp(int32 hp) { _maxhp = hp; };
	void SetHp(int32 hp);
	int32 GetCurHP() { return _curhp; }
	int32 GetAttackDamage() { return _atk; }
	float HpRatio() const { return _curhp / (float)_maxhp; }

	void SetLevelAndInit(int level);

	int AddCurHP(float amount);

	//Call by item effect or buff or debuff
	void ModMaxHP(int32 amount);
	void ModATK(int32 amount);
	void ModSpeed(float amount);

	bool IsDead() { return _curhp <= 0; }

	void AddGold(int32 amount);
	int32 ShowGold() { return _gold; }

	HpChanged _hpChangedDelegate;
	DeathDelegate _deathDelegate;

	//Stats
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	CreatureType _type = CreatureType::Archer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _level = 1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _expToLevelUp = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _curExp = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _maxhp = 500;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _curhp = 1;
	//hp that modifyed value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _modHP = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _atk_default = 5;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _atk = 5;
	//atk that modifyed value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _modATK = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	float _speed = 1;
	//speed that modifyed value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	float _modSpeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _gold = 0;
	//gold that modifyed value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat, meta = (AllowPrivateAccess = "true"))
	int32 _modGold = 0;
};
