// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetail();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FItemType();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin ScriptStruct FItemType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemType;
class UScriptStruct* FItemType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemType, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("ItemType"));
	}
	return Z_Registration_Info_UScriptStruct_ItemType.OuterSingleton;
}
template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<FItemType>()
{
	return FItemType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__texture_MetaData[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp__texture = { "_texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, _texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__texture_MetaData), NewProp__texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp__texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	&NewStructOps,
	"ItemType",
	Z_Construct_UScriptStruct_FItemType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::PropPointers),
	sizeof(FItemType),
	alignof(FItemType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemType()
{
	if (!Z_Registration_Info_UScriptStruct_ItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemType.InnerSingleton, Z_Construct_UScriptStruct_FItemType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemType.InnerSingleton;
}
// End ScriptStruct FItemType

// Begin ScriptStruct FItemDetail
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDetail;
class UScriptStruct* FItemDetail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDetail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDetail, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("ItemDetail"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDetail.OuterSingleton;
}
template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<FItemDetail>()
{
	return FItemDetail::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDetail>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDetail_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	&NewStructOps,
	"ItemDetail",
	nullptr,
	0,
	sizeof(FItemDetail),
	alignof(FItemDetail),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetail_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDetail_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemDetail()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDetail.InnerSingleton, Z_Construct_UScriptStruct_FItemDetail_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemDetail.InnerSingleton;
}
// End ScriptStruct FItemDetail

// Begin Class AMyItem Function CharacterOverlapped
struct Z_Construct_UFunction_AMyItem_CharacterOverlapped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyItem_CharacterOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyItem, nullptr, "CharacterOverlapped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_CharacterOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyItem_CharacterOverlapped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyItem_CharacterOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyItem_CharacterOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyItem::execCharacterOverlapped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterOverlapped();
	P_NATIVE_END;
}
// End Class AMyItem Function CharacterOverlapped

// Begin Class AMyItem Function OnMyCharacterOverlap
struct Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics
{
	struct MyItem_eventOnMyCharacterOverlap_Parms
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
		{ "ModuleRelativePath", "MyItem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MyItem_eventOnMyCharacterOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyItem_eventOnMyCharacterOverlap_Parms), &Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyItem, nullptr, "OnMyCharacterOverlap", nullptr, nullptr, Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::MyItem_eventOnMyCharacterOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::MyItem_eventOnMyCharacterOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyItem::execOnMyCharacterOverlap)
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
// End Class AMyItem Function OnMyCharacterOverlap

// Begin Class AMyItem Function OnMyCharacterOverlapEnd
struct Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics
{
	struct MyItem_eventOnMyCharacterOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyItem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyCharacterOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyItem, nullptr, "OnMyCharacterOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::MyItem_eventOnMyCharacterOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::MyItem_eventOnMyCharacterOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyItem::execOnMyCharacterOverlapEnd)
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
// End Class AMyItem Function OnMyCharacterOverlapEnd

// Begin Class AMyItem
void AMyItem::StaticRegisterNativesAMyItem()
{
	UClass* Class = AMyItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterOverlapped", &AMyItem::execCharacterOverlapped },
		{ "OnMyCharacterOverlap", &AMyItem::execOnMyCharacterOverlap },
		{ "OnMyCharacterOverlapEnd", &AMyItem::execOnMyCharacterOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyItem);
UClass* Z_Construct_UClass_AMyItem_NoRegister()
{
	return AMyItem::StaticClass();
}
struct Z_Construct_UClass_AMyItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyItem.h" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__trigger_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isOverlapped_MetaData[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__player_MetaData[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__trigger;
	static void NewProp__isOverlapped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isOverlapped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyItem_CharacterOverlapped, "CharacterOverlapped" }, // 3583864219
		{ &Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap, "OnMyCharacterOverlap" }, // 4254897476
		{ &Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd, "OnMyCharacterOverlapEnd" }, // 3728962841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__meshComponent_MetaData), NewProp__meshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__trigger = { "_trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__trigger_MetaData), NewProp__trigger_MetaData) };
void Z_Construct_UClass_AMyItem_Statics::NewProp__isOverlapped_SetBit(void* Obj)
{
	((AMyItem*)Obj)->_isOverlapped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__isOverlapped = { "_isOverlapped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyItem), &Z_Construct_UClass_AMyItem_Statics::NewProp__isOverlapped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isOverlapped_MetaData), NewProp__isOverlapped_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__player = { "_player", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _player), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__player_MetaData), NewProp__player_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__isOverlapped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyItem_Statics::ClassParams = {
	&AMyItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyItem()
{
	if (!Z_Registration_Info_UClass_AMyItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyItem.OuterSingleton, Z_Construct_UClass_AMyItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyItem.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyItem>()
{
	return AMyItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyItem);
AMyItem::~AMyItem() {}
// End Class AMyItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemType::StaticStruct, Z_Construct_UScriptStruct_FItemType_Statics::NewStructOps, TEXT("ItemType"), &Z_Registration_Info_UScriptStruct_ItemType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemType), 4276674331U) },
		{ FItemDetail::StaticStruct, Z_Construct_UScriptStruct_FItemDetail_Statics::NewStructOps, TEXT("ItemDetail"), &Z_Registration_Info_UScriptStruct_ItemDetail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDetail), 556007008U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyItem, AMyItem::StaticClass, TEXT("AMyItem"), &Z_Registration_Info_UClass_AMyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyItem), 3766222697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_2328519734(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
