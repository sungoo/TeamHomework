// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyUIManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUIManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyUIManager();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyUIManager_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AMyUIManager Function AddItem
struct Z_Construct_UFunction_AMyUIManager_AddItem_Statics
{
	struct MyUIManager_eventAddItem_Parms
	{
		UMyInventoryComponent* inventoryComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyUIManager_AddItem_Statics::NewProp_inventoryComponent = { "inventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUIManager_eventAddItem_Parms, inventoryComponent), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inventoryComponent_MetaData), NewProp_inventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyUIManager_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyUIManager_AddItem_Statics::NewProp_inventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyUIManager_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyUIManager, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_AMyUIManager_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyUIManager_AddItem_Statics::MyUIManager_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyUIManager_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyUIManager_AddItem_Statics::MyUIManager_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyUIManager_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyUIManager_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyUIManager::execAddItem)
{
	P_GET_OBJECT(UMyInventoryComponent,Z_Param_inventoryComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_inventoryComponent);
	P_NATIVE_END;
}
// End Class AMyUIManager Function AddItem

// Begin Class AMyUIManager Function DropItem
struct Z_Construct_UFunction_AMyUIManager_DropItem_Statics
{
	struct MyUIManager_eventDropItem_Parms
	{
		UMyInventoryComponent* inventoryComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyUIManager_DropItem_Statics::NewProp_inventoryComponent = { "inventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUIManager_eventDropItem_Parms, inventoryComponent), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inventoryComponent_MetaData), NewProp_inventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyUIManager_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyUIManager_DropItem_Statics::NewProp_inventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyUIManager_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyUIManager, nullptr, "DropItem", nullptr, nullptr, Z_Construct_UFunction_AMyUIManager_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_DropItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyUIManager_DropItem_Statics::MyUIManager_eventDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyUIManager_DropItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyUIManager_DropItem_Statics::MyUIManager_eventDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyUIManager_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyUIManager_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyUIManager::execDropItem)
{
	P_GET_OBJECT(UMyInventoryComponent,Z_Param_inventoryComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItem(Z_Param_inventoryComponent);
	P_NATIVE_END;
}
// End Class AMyUIManager Function DropItem

// Begin Class AMyUIManager Function ToggleInventory
struct Z_Construct_UFunction_AMyUIManager_ToggleInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyUIManager_ToggleInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyUIManager, nullptr, "ToggleInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyUIManager_ToggleInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyUIManager_ToggleInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyUIManager_ToggleInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyUIManager_ToggleInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyUIManager::execToggleInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleInventory();
	P_NATIVE_END;
}
// End Class AMyUIManager Function ToggleInventory

// Begin Class AMyUIManager
void AMyUIManager::StaticRegisterNativesAMyUIManager()
{
	UClass* Class = AMyUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &AMyUIManager::execAddItem },
		{ "DropItem", &AMyUIManager::execDropItem },
		{ "ToggleInventory", &AMyUIManager::execToggleInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyUIManager);
UClass* Z_Construct_UClass_AMyUIManager_NoRegister()
{
	return AMyUIManager::StaticClass();
}
struct Z_Construct_UClass_AMyUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyUIManager.h" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__inventoryUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyUIManager_AddItem, "AddItem" }, // 1852455544
		{ &Z_Construct_UFunction_AMyUIManager_DropItem, "DropItem" }, // 2183764390
		{ &Z_Construct_UFunction_AMyUIManager_ToggleInventory, "ToggleInventory" }, // 566204096
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryUI = { "_inventoryUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _inventoryUI), Z_Construct_UClass_UMyInventoryUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryUI_MetaData), NewProp__inventoryUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyUIManager_Statics::ClassParams = {
	&AMyUIManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyUIManager()
{
	if (!Z_Registration_Info_UClass_AMyUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyUIManager.OuterSingleton, Z_Construct_UClass_AMyUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyUIManager.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyUIManager>()
{
	return AMyUIManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyUIManager);
AMyUIManager::~AMyUIManager() {}
// End Class AMyUIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyUIManager, AMyUIManager::StaticClass, TEXT("AMyUIManager"), &Z_Registration_Info_UClass_AMyUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyUIManager), 642824205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_662871435(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
