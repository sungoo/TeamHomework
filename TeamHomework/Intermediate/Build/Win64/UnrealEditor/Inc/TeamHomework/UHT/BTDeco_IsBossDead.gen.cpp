// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTDeco_IsBossDead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDeco_IsBossDead() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_IsBossDead();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_IsBossDead_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTDeco_IsBossDead
void UBTDeco_IsBossDead::StaticRegisterNativesUBTDeco_IsBossDead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDeco_IsBossDead);
UClass* Z_Construct_UClass_UBTDeco_IsBossDead_NoRegister()
{
	return UBTDeco_IsBossDead::StaticClass();
}
struct Z_Construct_UClass_UBTDeco_IsBossDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTDeco_IsBossDead.h" },
		{ "ModuleRelativePath", "BTDeco_IsBossDead.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDeco_IsBossDead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDeco_IsBossDead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_IsBossDead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDeco_IsBossDead_Statics::ClassParams = {
	&UBTDeco_IsBossDead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_IsBossDead_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDeco_IsBossDead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDeco_IsBossDead()
{
	if (!Z_Registration_Info_UClass_UBTDeco_IsBossDead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDeco_IsBossDead.OuterSingleton, Z_Construct_UClass_UBTDeco_IsBossDead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDeco_IsBossDead.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTDeco_IsBossDead>()
{
	return UBTDeco_IsBossDead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDeco_IsBossDead);
UBTDeco_IsBossDead::~UBTDeco_IsBossDead() {}
// End Class UBTDeco_IsBossDead

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsBossDead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDeco_IsBossDead, UBTDeco_IsBossDead::StaticClass, TEXT("UBTDeco_IsBossDead"), &Z_Registration_Info_UClass_UBTDeco_IsBossDead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDeco_IsBossDead), 3434163411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsBossDead_h_2630916269(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsBossDead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsBossDead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
