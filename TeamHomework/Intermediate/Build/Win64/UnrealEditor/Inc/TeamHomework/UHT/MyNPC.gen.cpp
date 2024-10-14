// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Characters/MyNPC.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyNPC();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyNPC_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AMyNPC Function CharacterOverlapped
struct Z_Construct_UFunction_AMyNPC_CharacterOverlapped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyNPC_CharacterOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNPC, nullptr, "CharacterOverlapped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_CharacterOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyNPC_CharacterOverlapped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyNPC_CharacterOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyNPC_CharacterOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyNPC::execCharacterOverlapped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterOverlapped();
	P_NATIVE_END;
}
// End Class AMyNPC Function CharacterOverlapped

// Begin Class AMyNPC Function OnMyCharacterOverlap
struct Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics
{
	struct MyNPC_eventOnMyCharacterOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MyNPC_eventOnMyCharacterOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyNPC_eventOnMyCharacterOverlap_Parms), &Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNPC, nullptr, "OnMyCharacterOverlap", nullptr, nullptr, Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::MyNPC_eventOnMyCharacterOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::MyNPC_eventOnMyCharacterOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyNPC::execOnMyCharacterOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMyCharacterOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AMyNPC Function OnMyCharacterOverlap

// Begin Class AMyNPC Function OnMyCharacterOverlapEnd
struct Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics
{
	struct MyNPC_eventOnMyCharacterOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyNPC_eventOnMyCharacterOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNPC, nullptr, "OnMyCharacterOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::MyNPC_eventOnMyCharacterOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::MyNPC_eventOnMyCharacterOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyNPC::execOnMyCharacterOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMyCharacterOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AMyNPC Function OnMyCharacterOverlapEnd

// Begin Class AMyNPC
void AMyNPC::StaticRegisterNativesAMyNPC()
{
	UClass* Class = AMyNPC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterOverlapped", &AMyNPC::execCharacterOverlapped },
		{ "OnMyCharacterOverlap", &AMyNPC::execOnMyCharacterOverlap },
		{ "OnMyCharacterOverlapEnd", &AMyNPC::execOnMyCharacterOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyNPC);
UClass* Z_Construct_UClass_AMyNPC_NoRegister()
{
	return AMyNPC::StaticClass();
}
struct Z_Construct_UClass_AMyNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MyNPC.h" },
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__trigger_MetaData[] = {
		{ "Category", "MyNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isOverlapped_MetaData[] = {
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__player_MetaData[] = {
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__npcUI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/MyNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__trigger;
	static void NewProp__isOverlapped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isOverlapped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__npcUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyNPC_CharacterOverlapped, "CharacterOverlapped" }, // 3484533010
		{ &Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlap, "OnMyCharacterOverlap" }, // 962287969
		{ &Z_Construct_UFunction_AMyNPC_OnMyCharacterOverlapEnd, "OnMyCharacterOverlapEnd" }, // 1970656173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyNPC_Statics::NewProp__trigger = { "_trigger", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyNPC, _trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__trigger_MetaData), NewProp__trigger_MetaData) };
void Z_Construct_UClass_AMyNPC_Statics::NewProp__isOverlapped_SetBit(void* Obj)
{
	((AMyNPC*)Obj)->_isOverlapped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyNPC_Statics::NewProp__isOverlapped = { "_isOverlapped", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyNPC), &Z_Construct_UClass_AMyNPC_Statics::NewProp__isOverlapped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isOverlapped_MetaData), NewProp__isOverlapped_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyNPC_Statics::NewProp__player = { "_player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyNPC, _player), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__player_MetaData), NewProp__player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyNPC_Statics::NewProp__npcUI = { "_npcUI", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyNPC, _npcUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__npcUI_MetaData), NewProp__npcUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNPC_Statics::NewProp__trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNPC_Statics::NewProp__isOverlapped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNPC_Statics::NewProp__player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyNPC_Statics::NewProp__npcUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACreature,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyNPC_Statics::ClassParams = {
	&AMyNPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyNPC()
{
	if (!Z_Registration_Info_UClass_AMyNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyNPC.OuterSingleton, Z_Construct_UClass_AMyNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyNPC.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyNPC>()
{
	return AMyNPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNPC);
AMyNPC::~AMyNPC() {}
// End Class AMyNPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyNPC, AMyNPC::StaticClass, TEXT("AMyNPC"), &Z_Registration_Info_UClass_AMyNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyNPC), 1064162472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_2162235598(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
