// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyInventoryComponent Function DropItemOfSlot
struct Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics
{
	struct MyInventoryComponent_eventDropItemOfSlot_Parms
	{
		int32 slotNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_slotNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::NewProp_slotNum = { "slotNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventDropItemOfSlot_Parms, slotNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::NewProp_slotNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "DropItemOfSlot", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::MyInventoryComponent_eventDropItemOfSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::MyInventoryComponent_eventDropItemOfSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execDropItemOfSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_slotNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemOfSlot(Z_Param_slotNum);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function DropItemOfSlot

// Begin Class UMyInventoryComponent Function UseItemOfSlot
struct Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics
{
	struct MyInventoryComponent_eventUseItemOfSlot_Parms
	{
		int32 slotNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_slotNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::NewProp_slotNum = { "slotNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventUseItemOfSlot_Parms, slotNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::NewProp_slotNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "UseItemOfSlot", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::MyInventoryComponent_eventUseItemOfSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::MyInventoryComponent_eventUseItemOfSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execUseItemOfSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_slotNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItemOfSlot(Z_Param_slotNum);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function UseItemOfSlot

// Begin Class UMyInventoryComponent
void UMyInventoryComponent::StaticRegisterNativesUMyInventoryComponent()
{
	UClass* Class = UMyInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItemOfSlot", &UMyInventoryComponent::execDropItemOfSlot },
		{ "UseItemOfSlot", &UMyInventoryComponent::execUseItemOfSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryComponent);
UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister()
{
	return UMyInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyInventoryComponent.h" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__gold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__items_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryMax_MetaData[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__emptySlots_MetaData[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__defaultTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__gold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FIntPropertyParams NewProp__inventoryMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp__emptySlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__emptySlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__defaultTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInventoryComponent_DropItemOfSlot, "DropItemOfSlot" }, // 3460407115
		{ &Z_Construct_UFunction_UMyInventoryComponent_UseItemOfSlot, "UseItemOfSlot" }, // 2590831797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__gold = { "_gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__gold_MetaData), NewProp__gold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__items_MetaData), NewProp__items_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__inventoryMax = { "_inventoryMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _inventoryMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryMax_MetaData), NewProp__inventoryMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__emptySlots_Inner = { "_emptySlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__emptySlots = { "_emptySlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _emptySlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__emptySlots_MetaData), NewProp__emptySlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__defaultTexture = { "_defaultTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _defaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__defaultTexture_MetaData), NewProp__defaultTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__inventoryMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__emptySlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__emptySlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__defaultTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams = {
	&UMyInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton, Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyInventoryComponent>()
{
	return UMyInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryComponent);
UMyInventoryComponent::~UMyInventoryComponent() {}
// End Class UMyInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryComponent, UMyInventoryComponent::StaticClass, TEXT("UMyInventoryComponent"), &Z_Registration_Info_UClass_UMyInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryComponent), 3969170944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_2945630092(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
