// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Managers/SoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ASoundManager();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ASoundManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class ASoundManager
void ASoundManager::StaticRegisterNativesASoundManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoundManager);
UClass* Z_Construct_UClass_ASoundManager_NoRegister()
{
	return ASoundManager::StaticClass();
}
struct Z_Construct_UClass_ASoundManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/SoundManager.h" },
		{ "ModuleRelativePath", "Managers/SoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__classTable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xeb\xb3\x84 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94\n" },
#endif
		{ "ModuleRelativePath", "Managers/SoundManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xeb\xb3\x84 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Managers/SoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__audioCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SoundManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Managers/SoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__classTable_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp__classTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__classTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__audioCom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoundManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable_ValueProp = { "_classTable", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable_Key_KeyProp = { "_classTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable = { "_classTable", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoundManager, _classTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__classTable_MetaData), NewProp__classTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoundManager, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__rootComponent_MetaData), NewProp__rootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp__audioCom = { "_audioCom", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoundManager, _audioCom), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__audioCom_MetaData), NewProp__audioCom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoundManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp__classTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp__rootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp__audioCom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoundManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoundManager_Statics::ClassParams = {
	&ASoundManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoundManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoundManager()
{
	if (!Z_Registration_Info_UClass_ASoundManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoundManager.OuterSingleton, Z_Construct_UClass_ASoundManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoundManager.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<ASoundManager>()
{
	return ASoundManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoundManager);
ASoundManager::~ASoundManager() {}
// End Class ASoundManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_SoundManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoundManager, ASoundManager::StaticClass, TEXT("ASoundManager"), &Z_Registration_Info_UClass_ASoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoundManager), 2212765731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_SoundManager_h_1776123334(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_SoundManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_SoundManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
