// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Archer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcher() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AArcher();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AArcher_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AArcher
void AArcher::StaticRegisterNativesAArcher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArcher);
UClass* Z_Construct_UClass_AArcher_NoRegister()
{
	return AArcher::StaticClass();
}
struct Z_Construct_UClass_AArcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Archer.h" },
		{ "ModuleRelativePath", "Archer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArcher_Statics::ClassParams = {
	&AArcher::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::Class_MetaDataParams), Z_Construct_UClass_AArcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArcher()
{
	if (!Z_Registration_Info_UClass_AArcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArcher.OuterSingleton, Z_Construct_UClass_AArcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArcher.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AArcher>()
{
	return AArcher::StaticClass();
}
AArcher::AArcher() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArcher);
AArcher::~AArcher() {}
// End Class AArcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_Archer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArcher, AArcher::StaticClass, TEXT("AArcher"), &Z_Registration_Info_UClass_AArcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArcher), 3731268087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_Archer_h_165146626(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_Archer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_Archer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
