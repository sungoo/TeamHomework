// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStatComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStatComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
TEAMHOMEWORK_API UEnum* Z_Construct_UEnum_TeamHomework_CreatureType();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMyStatData();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Enum CreatureType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CreatureType;
static UEnum* CreatureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CreatureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CreatureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TeamHomework_CreatureType, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("CreatureType"));
	}
	return Z_Registration_Info_UEnum_CreatureType.OuterSingleton;
}
template<> TEAMHOMEWORK_API UEnum* StaticEnum<CreatureType>()
{
	return CreatureType_StaticEnum();
}
struct Z_Construct_UEnum_TeamHomework_CreatureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Archer.Name", "CreatureType::Archer" },
		{ "BossMonster.Name", "CreatureType::BossMonster" },
		{ "Knight.Name", "CreatureType::Knight" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
		{ "Monster.Name", "CreatureType::Monster" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CreatureType::Archer", (int64)CreatureType::Archer },
		{ "CreatureType::Knight", (int64)CreatureType::Knight },
		{ "CreatureType::Monster", (int64)CreatureType::Monster },
		{ "CreatureType::BossMonster", (int64)CreatureType::BossMonster },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TeamHomework_CreatureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	"CreatureType",
	"CreatureType",
	Z_Construct_UEnum_TeamHomework_CreatureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_CreatureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_CreatureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TeamHomework_CreatureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TeamHomework_CreatureType()
{
	if (!Z_Registration_Info_UEnum_CreatureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CreatureType.InnerSingleton, Z_Construct_UEnum_TeamHomework_CreatureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CreatureType.InnerSingleton;
}
// End Enum CreatureType

// Begin ScriptStruct FMyStatData
static_assert(std::is_polymorphic<FMyStatData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyStatData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyStatData;
class UScriptStruct* FMyStatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyStatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyStatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyStatData, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("MyStatData"));
	}
	return Z_Registration_Info_UScriptStruct_MyStatData.OuterSingleton;
}
template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<FMyStatData>()
{
	return FMyStatData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyStatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_exp_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHp_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attack_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gold_MetaData[] = {
		{ "Category", "MyStatData" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_exp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxHp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_attack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_gold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyStatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, type), Z_Construct_UEnum_TeamHomework_CreatureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 183095656
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_level_MetaData), NewProp_level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_exp = { "exp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, exp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_exp_MetaData), NewProp_exp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_maxHp = { "maxHp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, maxHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHp_MetaData), NewProp_maxHp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_attack = { "attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, attack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attack_MetaData), NewProp_attack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_gold = { "gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStatData, gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gold_MetaData), NewProp_gold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyStatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_exp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_maxHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStatData_Statics::NewProp_gold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyStatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MyStatData",
	Z_Construct_UScriptStruct_FMyStatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStatData_Statics::PropPointers),
	sizeof(FMyStatData),
	alignof(FMyStatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyStatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyStatData()
{
	if (!Z_Registration_Info_UScriptStruct_MyStatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyStatData.InnerSingleton, Z_Construct_UScriptStruct_FMyStatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyStatData.InnerSingleton;
}
// End ScriptStruct FMyStatData

// Begin Class UMyStatComponent
void UMyStatComponent::StaticRegisterNativesUMyStatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyStatComponent);
UClass* Z_Construct_UClass_UMyStatComponent_NoRegister()
{
	return UMyStatComponent::StaticClass();
}
struct Z_Construct_UClass_UMyStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyStatComponent.h" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__expToLevelUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curExp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxhp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curhp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//hp that modifyed value\n" },
#endif
		{ "ModuleRelativePath", "MyStatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hp that modifyed value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__atk_default_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__atk_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modATK_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//atk that modifyed value\n" },
#endif
		{ "ModuleRelativePath", "MyStatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "atk that modifyed value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//speed that modifyed value\n" },
#endif
		{ "ModuleRelativePath", "MyStatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "speed that modifyed value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__gold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modGold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//gold that modifyed value\n" },
#endif
		{ "ModuleRelativePath", "MyStatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gold that modifyed value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FIntPropertyParams NewProp__level;
	static const UECodeGen_Private::FIntPropertyParams NewProp__expToLevelUp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curExp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__maxhp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curhp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__modHP;
	static const UECodeGen_Private::FIntPropertyParams NewProp__atk_default;
	static const UECodeGen_Private::FIntPropertyParams NewProp__atk;
	static const UECodeGen_Private::FIntPropertyParams NewProp__modATK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__modSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp__gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp__modGold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _type), Z_Construct_UEnum_TeamHomework_CreatureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__type_MetaData), NewProp__type_MetaData) }; // 183095656
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__level = { "_level", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__level_MetaData), NewProp__level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__expToLevelUp = { "_expToLevelUp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _expToLevelUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__expToLevelUp_MetaData), NewProp__expToLevelUp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curExp = { "_curExp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _curExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curExp_MetaData), NewProp__curExp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__maxhp = { "_maxhp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _maxhp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxhp_MetaData), NewProp__maxhp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curhp = { "_curhp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _curhp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curhp_MetaData), NewProp__curhp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modHP = { "_modHP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _modHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modHP_MetaData), NewProp__modHP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk_default = { "_atk_default", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _atk_default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__atk_default_MetaData), NewProp__atk_default_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk = { "_atk", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _atk), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__atk_MetaData), NewProp__atk_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modATK = { "_modATK", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _modATK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modATK_MetaData), NewProp__modATK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modSpeed = { "_modSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _modSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modSpeed_MetaData), NewProp__modSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__gold = { "_gold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__gold_MetaData), NewProp__gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modGold = { "_modGold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _modGold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modGold_MetaData), NewProp__modGold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__expToLevelUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__maxhp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curhp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk_default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modATK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__modGold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStatComponent_Statics::ClassParams = {
	&UMyStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyStatComponent()
{
	if (!Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton, Z_Construct_UClass_UMyStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyStatComponent>()
{
	return UMyStatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStatComponent);
UMyStatComponent::~UMyStatComponent() {}
// End Class UMyStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CreatureType_StaticEnum, TEXT("CreatureType"), &Z_Registration_Info_UEnum_CreatureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 183095656U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyStatData::StaticStruct, Z_Construct_UScriptStruct_FMyStatData_Statics::NewStructOps, TEXT("MyStatData"), &Z_Registration_Info_UScriptStruct_MyStatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyStatData), 1979384079U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyStatComponent, UMyStatComponent::StaticClass, TEXT("UMyStatComponent"), &Z_Registration_Info_UClass_UMyStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStatComponent), 2939565244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_239720211(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
