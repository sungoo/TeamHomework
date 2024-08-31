// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyGameInstance.h"
#include "TeamHomework/MyItem.h"
#include "TeamHomework/MyStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayerManager_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyUIManager_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AVFX_Manager_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyGameInstance();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
TEAMHOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMyStatData();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__uiManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__playerManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vfxManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__archerData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Data Table\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__knightData_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__monsterData_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemData_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__uiManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__playerManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__vfxManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp__archerData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__archerData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__archerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__knightData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__knightData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__knightData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__monsterData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__monsterData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__monsterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__itemData_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__itemData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__itemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__uiManager = { "_uiManager", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _uiManager), Z_Construct_UClass_AMyUIManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__uiManager_MetaData), NewProp__uiManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__playerManager = { "_playerManager", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _playerManager), Z_Construct_UClass_AMyPlayerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__playerManager_MetaData), NewProp__playerManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__vfxManager = { "_vfxManager", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _vfxManager), Z_Construct_UClass_AVFX_Manager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vfxManager_MetaData), NewProp__vfxManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData_ValueProp = { "_archerData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMyStatData, METADATA_PARAMS(0, nullptr) }; // 1979384079
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData_Key_KeyProp = { "_archerData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData = { "_archerData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _archerData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__archerData_MetaData), NewProp__archerData_MetaData) }; // 1979384079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData_ValueProp = { "_knightData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMyStatData, METADATA_PARAMS(0, nullptr) }; // 1979384079
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData_Key_KeyProp = { "_knightData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData = { "_knightData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _knightData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__knightData_MetaData), NewProp__knightData_MetaData) }; // 1979384079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData_ValueProp = { "_monsterData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMyStatData, METADATA_PARAMS(0, nullptr) }; // 1979384079
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData_Key_KeyProp = { "_monsterData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData = { "_monsterData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _monsterData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__monsterData_MetaData), NewProp__monsterData_MetaData) }; // 1979384079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData_ValueProp = { "_itemData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 1428854118
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData_Key_KeyProp = { "_itemData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData = { "_itemData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, _itemData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemData_MetaData), NewProp__itemData_MetaData) }; // 1428854118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__uiManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__playerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__vfxManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__archerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__knightData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__monsterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp__itemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2803217945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyGameInstance_h_2974264162(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
