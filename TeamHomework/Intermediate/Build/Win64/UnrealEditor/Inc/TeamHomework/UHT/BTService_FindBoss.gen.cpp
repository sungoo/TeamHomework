// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTService_FindBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindBoss() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTService_FindBoss();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTService_FindBoss_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTService_FindBoss
void UBTService_FindBoss::StaticRegisterNativesUBTService_FindBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_FindBoss);
UClass* Z_Construct_UClass_UBTService_FindBoss_NoRegister()
{
	return UBTService_FindBoss::StaticClass();
}
struct Z_Construct_UClass_UBTService_FindBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_FindBoss.h" },
		{ "ModuleRelativePath", "BTService_FindBoss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_FindBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindBoss_Statics::ClassParams = {
	&UBTService_FindBoss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_FindBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_FindBoss()
{
	if (!Z_Registration_Info_UClass_UBTService_FindBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_FindBoss.OuterSingleton, Z_Construct_UClass_UBTService_FindBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_FindBoss.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTService_FindBoss>()
{
	return UBTService_FindBoss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindBoss);
UBTService_FindBoss::~UBTService_FindBoss() {}
// End Class UBTService_FindBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTService_FindBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_FindBoss, UBTService_FindBoss::StaticClass, TEXT("UBTService_FindBoss"), &Z_Registration_Info_UClass_UBTService_FindBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_FindBoss), 979054727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTService_FindBoss_h_1177441747(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTService_FindBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTService_FindBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
