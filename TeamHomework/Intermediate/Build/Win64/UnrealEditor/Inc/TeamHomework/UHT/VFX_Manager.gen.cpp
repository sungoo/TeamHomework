// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Managers/VFX_Manager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFX_Manager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AEffect_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AVFX_Manager();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AVFX_Manager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AVFX_Manager
void AVFX_Manager::StaticRegisterNativesAVFX_Manager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVFX_Manager);
UClass* Z_Construct_UClass_AVFX_Manager_NoRegister()
{
	return AVFX_Manager::StaticClass();
}
struct Z_Construct_UClass_AVFX_Manager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/VFX_Manager.h" },
		{ "ModuleRelativePath", "Managers/VFX_Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__classTable_MetaData[] = {
		{ "ModuleRelativePath", "Managers/VFX_Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Managers/VFX_Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__classTable_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp__classTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__classTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVFX_Manager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable_ValueProp = { "_classTable", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable_Key_KeyProp = { "_classTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable = { "_classTable", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVFX_Manager, _classTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__classTable_MetaData), NewProp__classTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVFX_Manager_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVFX_Manager, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__rootComponent_MetaData), NewProp__rootComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVFX_Manager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVFX_Manager_Statics::NewProp__classTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVFX_Manager_Statics::NewProp__rootComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_Manager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVFX_Manager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_Manager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVFX_Manager_Statics::ClassParams = {
	&AVFX_Manager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVFX_Manager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_Manager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_Manager_Statics::Class_MetaDataParams), Z_Construct_UClass_AVFX_Manager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVFX_Manager()
{
	if (!Z_Registration_Info_UClass_AVFX_Manager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVFX_Manager.OuterSingleton, Z_Construct_UClass_AVFX_Manager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVFX_Manager.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AVFX_Manager>()
{
	return AVFX_Manager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVFX_Manager);
AVFX_Manager::~AVFX_Manager() {}
// End Class AVFX_Manager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_VFX_Manager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVFX_Manager, AVFX_Manager::StaticClass, TEXT("AVFX_Manager"), &Z_Registration_Info_UClass_AVFX_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVFX_Manager), 3064461318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_VFX_Manager_h_2786508124(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_VFX_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_VFX_Manager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
