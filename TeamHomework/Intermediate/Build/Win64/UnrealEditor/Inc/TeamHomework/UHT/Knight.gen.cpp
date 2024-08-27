// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Knight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnight() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AKnight();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AKnight_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AKnight
void AKnight::StaticRegisterNativesAKnight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKnight);
UClass* Z_Construct_UClass_AKnight_NoRegister()
{
	return AKnight::StaticClass();
}
struct Z_Construct_UClass_AKnight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Knight.h" },
		{ "ModuleRelativePath", "Knight.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKnight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKnight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKnight_Statics::ClassParams = {
	&AKnight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKnight_Statics::Class_MetaDataParams), Z_Construct_UClass_AKnight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKnight()
{
	if (!Z_Registration_Info_UClass_AKnight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKnight.OuterSingleton, Z_Construct_UClass_AKnight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKnight.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AKnight>()
{
	return AKnight::StaticClass();
}
AKnight::AKnight() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKnight);
AKnight::~AKnight() {}
// End Class AKnight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Knight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKnight, AKnight::StaticClass, TEXT("AKnight"), &Z_Registration_Info_UClass_AKnight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKnight), 2304043063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Knight_h_2210878518(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Knight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Knight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
