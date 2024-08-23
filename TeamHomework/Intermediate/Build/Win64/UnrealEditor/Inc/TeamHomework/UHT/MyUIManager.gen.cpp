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
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStoreUI_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UPlayerSelectionUI_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_BaseDisplay_NoRegister();
TEAMHOMEWORK_API UEnum* Z_Construct_UEnum_TeamHomework_UI_List();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Enum UI_List
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UI_List;
static UEnum* UI_List_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UI_List.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UI_List.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TeamHomework_UI_List, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("UI_List"));
	}
	return Z_Registration_Info_UEnum_UI_List.OuterSingleton;
}
template<> TEAMHOMEWORK_API UEnum* StaticEnum<UI_List>()
{
	return UI_List_StaticEnum();
}
struct Z_Construct_UEnum_TeamHomework_UI_List_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseDisplay.Comment", "//UI List Sorted by \"Z-Index\".\n//UI will Stack like this list (top to bottom)\n" },
		{ "BaseDisplay.Name", "UI_List::BaseDisplay" },
		{ "BaseDisplay.ToolTip", "UI List Sorted by \"Z-Index\".\nUI will Stack like this list (top to bottom)" },
		{ "Inventory.Name", "UI_List::Inventory" },
		{ "ModuleRelativePath", "MyUIManager.h" },
		{ "PlayerSelection.Name", "UI_List::PlayerSelection" },
		{ "Store.Name", "UI_List::Store" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UI_List::BaseDisplay", (int64)UI_List::BaseDisplay },
		{ "UI_List::PlayerSelection", (int64)UI_List::PlayerSelection },
		{ "UI_List::Inventory", (int64)UI_List::Inventory },
		{ "UI_List::Store", (int64)UI_List::Store },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TeamHomework_UI_List_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	"UI_List",
	"UI_List",
	Z_Construct_UEnum_TeamHomework_UI_List_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_UI_List_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_UI_List_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TeamHomework_UI_List_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TeamHomework_UI_List()
{
	if (!Z_Registration_Info_UEnum_UI_List.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UI_List.InnerSingleton, Z_Construct_UEnum_TeamHomework_UI_List_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UI_List.InnerSingleton;
}
// End Enum UI_List

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

// Begin Class AMyUIManager
void AMyUIManager::StaticRegisterNativesAMyUIManager()
{
	UClass* Class = AMyUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &AMyUIManager::execAddItem },
		{ "DropItem", &AMyUIManager::execDropItem },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__widgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__baseDisplayUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__playerSelectionUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__storeUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__widgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__widgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__baseDisplayUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__inventoryUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__playerSelectionUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__storeUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyUIManager_AddItem, "AddItem" }, // 1852455544
		{ &Z_Construct_UFunction_AMyUIManager_DropItem, "DropItem" }, // 2183764390
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__widgets_Inner = { "_widgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__widgets = { "_widgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _widgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__widgets_MetaData), NewProp__widgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__baseDisplayUI = { "_baseDisplayUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _baseDisplayUI), Z_Construct_UClass_UUI_BaseDisplay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__baseDisplayUI_MetaData), NewProp__baseDisplayUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryUI = { "_inventoryUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _inventoryUI), Z_Construct_UClass_UMyInventoryUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryUI_MetaData), NewProp__inventoryUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__playerSelectionUI = { "_playerSelectionUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _playerSelectionUI), Z_Construct_UClass_UPlayerSelectionUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__playerSelectionUI_MetaData), NewProp__playerSelectionUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__storeUI = { "_storeUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _storeUI), Z_Construct_UClass_UMyStoreUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__storeUI_MetaData), NewProp__storeUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__widgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__widgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__baseDisplayUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__playerSelectionUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__storeUI,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ UI_List_StaticEnum, TEXT("UI_List"), &Z_Registration_Info_UEnum_UI_List, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1648168724U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyUIManager, AMyUIManager::StaticClass, TEXT("AMyUIManager"), &Z_Registration_Info_UClass_AMyUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyUIManager), 1069313340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_3093505820(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyUIManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
