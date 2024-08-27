// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/VFX_Manager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFX_Manager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
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
		{ "IncludePath", "VFX_Manager.h" },
		{ "ModuleRelativePath", "VFX_Manager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVFX_Manager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_VFX_Manager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVFX_Manager, AVFX_Manager::StaticClass, TEXT("AVFX_Manager"), &Z_Registration_Info_UClass_AVFX_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVFX_Manager), 2544756337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_VFX_Manager_h_3010832749(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_VFX_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_VFX_Manager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
