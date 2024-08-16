// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Creature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreature() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
TEAMHOMEWORK_API UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature();
TEAMHOMEWORK_API UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Delegate FDelegate_AttackHitEvent
struct Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TeamHomework, nullptr, "Delegate_AttackHitEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegate_AttackHitEvent_DelegateWrapper(const FMulticastScriptDelegate& Delegate_AttackHitEvent)
{
	Delegate_AttackHitEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegate_AttackHitEvent

// Begin Delegate FDelegate_Death
struct Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TeamHomework, nullptr, "Delegate_Death__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegate_Death_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Death)
{
	Delegate_Death.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegate_Death

// Begin Class ACreature Function AttackHit
struct Z_Construct_UFunction_ACreature_AttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreature_AttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreature, nullptr, "AttackHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_AttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACreature_AttackHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACreature_AttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreature_AttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACreature::execAttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackHit();
	P_NATIVE_END;
}
// End Class ACreature Function AttackHit

// Begin Class ACreature Function Disable
struct Z_Construct_UFunction_ACreature_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreature_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreature, nullptr, "Disable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACreature_Disable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACreature_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreature_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACreature::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// End Class ACreature Function Disable

// Begin Class ACreature Function OnAttackEnded
struct Z_Construct_UFunction_ACreature_OnAttackEnded_Statics
{
	struct Creature_eventOnAttackEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attack function\n" },
#endif
		{ "ModuleRelativePath", "Creature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Creature_eventOnAttackEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((Creature_eventOnAttackEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Creature_eventOnAttackEnded_Parms), &Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreature, nullptr, "OnAttackEnded", nullptr, nullptr, Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::Creature_eventOnAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::Creature_eventOnAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACreature_OnAttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreature_OnAttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACreature::execOnAttackEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class ACreature Function OnAttackEnded

// Begin Class ACreature Function Unpossess
struct Z_Construct_UFunction_ACreature_Unpossess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreature_Unpossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreature, nullptr, "Unpossess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreature_Unpossess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACreature_Unpossess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACreature_Unpossess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreature_Unpossess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACreature::execUnpossess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unpossess();
	P_NATIVE_END;
}
// End Class ACreature Function Unpossess

// Begin Class ACreature
void ACreature::StaticRegisterNativesACreature()
{
	UClass* Class = ACreature::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackHit", &ACreature::execAttackHit },
		{ "Disable", &ACreature::execDisable },
		{ "OnAttackEnded", &ACreature::execOnAttackEnded },
		{ "Unpossess", &ACreature::execUnpossess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreature);
UClass* Z_Construct_UClass_ACreature_NoRegister()
{
	return ACreature::StaticClass();
}
struct Z_Construct_UClass_ACreature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature.h" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackHitEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__deathEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curAttackIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hitPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttackHit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AttackHitPoint\n" },
#endif
		{ "ModuleRelativePath", "Creature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackHitPoint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__animInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation\n" },
#endif
		{ "ModuleRelativePath", "Creature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Componenets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componenets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hpBarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__aiController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Creature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__attackHitEventDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__deathEventDelegate;
	static void NewProp__isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isActive;
	static void NewProp__isAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isAttacking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curAttackIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp__hitPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__animInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__statCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__inventoryCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__aiController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACreature_AttackHit, "AttackHit" }, // 1589188176
		{ &Z_Construct_UFunction_ACreature_Disable, "Disable" }, // 3573987638
		{ &Z_Construct_UFunction_ACreature_OnAttackEnded, "OnAttackEnded" }, // 2246755119
		{ &Z_Construct_UFunction_ACreature_Unpossess, "Unpossess" }, // 694565750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreature>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__attackHitEventDelegate = { "_attackHitEventDelegate", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _attackHitEventDelegate), Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackHitEventDelegate_MetaData), NewProp__attackHitEventDelegate_MetaData) }; // 1263113971
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__deathEventDelegate = { "_deathEventDelegate", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _deathEventDelegate), Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__deathEventDelegate_MetaData), NewProp__deathEventDelegate_MetaData) }; // 2614288937
void Z_Construct_UClass_ACreature_Statics::NewProp__isActive_SetBit(void* Obj)
{
	((ACreature*)Obj)->_isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__isActive = { "_isActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACreature), &Z_Construct_UClass_ACreature_Statics::NewProp__isActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isActive_MetaData), NewProp__isActive_MetaData) };
void Z_Construct_UClass_ACreature_Statics::NewProp__isAttacking_SetBit(void* Obj)
{
	((ACreature*)Obj)->_isAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__isAttacking = { "_isAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACreature), &Z_Construct_UClass_ACreature_Statics::NewProp__isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isAttacking_MetaData), NewProp__isAttacking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__curAttackIndex = { "_curAttackIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _curAttackIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curAttackIndex_MetaData), NewProp__curAttackIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__hitPoint = { "_hitPoint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _hitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hitPoint_MetaData), NewProp__hitPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__animInstance = { "_animInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _animInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__animInstance_MetaData), NewProp__animInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__statCom = { "_statCom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _statCom), Z_Construct_UClass_UMyStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statCom_MetaData), NewProp__statCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__inventoryCom = { "_inventoryCom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _inventoryCom), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryCom_MetaData), NewProp__inventoryCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__hpBarWidget = { "_hpBarWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _hpBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hpBarWidget_MetaData), NewProp__hpBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Statics::NewProp__aiController = { "_aiController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreature, _aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__aiController_MetaData), NewProp__aiController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__attackHitEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__deathEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__isActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__isAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__curAttackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__hitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__animInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__statCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__inventoryCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__hpBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Statics::NewProp__aiController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACreature_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreature_Statics::ClassParams = {
	&ACreature::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACreature_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Statics::Class_MetaDataParams), Z_Construct_UClass_ACreature_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACreature()
{
	if (!Z_Registration_Info_UClass_ACreature.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreature.OuterSingleton, Z_Construct_UClass_ACreature_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACreature.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<ACreature>()
{
	return ACreature::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACreature);
ACreature::~ACreature() {}
// End Class ACreature

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_Creature_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACreature, ACreature::StaticClass, TEXT("ACreature"), &Z_Registration_Info_UClass_ACreature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreature), 1937449314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_Creature_h_1541015135(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_Creature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_Creature_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
