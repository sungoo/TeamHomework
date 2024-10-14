// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Item/MyItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
TEAMHOMEWORK_API UEnum* Z_Construct_UEnum_TeamHomework_TYPE();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Enum TYPE
static FEnumRegistrationInfo Z_Registration_Info_UEnum_TYPE;
static UEnum* TYPE_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_TYPE.OuterSingleton)
	{
		Z_Registration_Info_UEnum_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TeamHomework_TYPE, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("TYPE"));
	}
	return Z_Registration_Info_UEnum_TYPE.OuterSingleton;
}
template<> TEAMHOMEWORK_API UEnum* StaticEnum<TYPE>()
{
	return TYPE_StaticEnum();
}
struct Z_Construct_UEnum_TeamHomework_TYPE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ATK.Name", "TYPE::ATK" },
		{ "GOLD.Name", "TYPE::GOLD" },
		{ "HP.Name", "TYPE::HP" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
		{ "SPEED.Name", "TYPE::SPEED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TYPE::HP", (int64)TYPE::HP },
		{ "TYPE::ATK", (int64)TYPE::ATK },
		{ "TYPE::SPEED", (int64)TYPE::SPEED },
		{ "TYPE::GOLD", (int64)TYPE::GOLD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TeamHomework_TYPE_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	"TYPE",
	"TYPE",
	Z_Construct_UEnum_TeamHomework_TYPE_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_TYPE_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TeamHomework_TYPE_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TeamHomework_TYPE()
{
	if (!Z_Registration_Info_UEnum_TYPE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TYPE.InnerSingleton, Z_Construct_UEnum_TeamHomework_TYPE_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_TYPE.InnerSingleton;
}
// End Enum TYPE

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textuer_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemCode_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_statAddValue_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_textuer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_statAddValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_price;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_textuer = { "textuer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, textuer), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textuer_MetaData), NewProp_textuer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemCode = { "itemCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, itemCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemCode_MetaData), NewProp_itemCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, type), Z_Construct_UEnum_TeamHomework_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 1291112236
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_statAddValue = { "statAddValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, statAddValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_statAddValue_MetaData), NewProp_statAddValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, price), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_price_MetaData), NewProp_price_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_textuer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_itemCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_statAddValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_price,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

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
		{ "ModuleRelativePath", "Item/MyItem.h" },
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
		{ "ModuleRelativePath", "Item/MyItem.h" },
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
		{ "IncludePath", "Item/MyItem.h" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__trigger_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__player_MetaData[] = {
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__owner_MetaData[] = {
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Item Description\n" },
#endif
		{ "ModuleRelativePath", "Item/MyItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__textuer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statAddValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__price_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Item/MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__trigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__owner;
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__textuer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FIntPropertyParams NewProp__statAddValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp__price;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyItem_OnMyCharacterOverlap, "OnMyCharacterOverlap" }, // 1096382256
		{ &Z_Construct_UFunction_AMyItem_OnMyCharacterOverlapEnd, "OnMyCharacterOverlapEnd" }, // 1963140543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__meshComponent_MetaData), NewProp__meshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__trigger = { "_trigger", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__trigger_MetaData), NewProp__trigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__player = { "_player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _player), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__player_MetaData), NewProp__player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__owner = { "_owner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _owner), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__owner_MetaData), NewProp__owner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__textuer = { "_textuer", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _textuer), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__textuer_MetaData), NewProp__textuer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__mesh_MetaData), NewProp__mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _type), Z_Construct_UEnum_TeamHomework_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__type_MetaData), NewProp__type_MetaData) }; // 1291112236
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__statAddValue = { "_statAddValue", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _statAddValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statAddValue_MetaData), NewProp__statAddValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__price = { "_price", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _price), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__price_MetaData), NewProp__price_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__textuer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__statAddValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__price,
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
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ TYPE_StaticEnum, TEXT("TYPE"), &Z_Registration_Info_UEnum_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1291112236U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 670560861U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyItem, AMyItem::StaticClass, TEXT("AMyItem"), &Z_Registration_Info_UClass_AMyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyItem), 3312042174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_1916473391(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
