// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonster() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyMonster();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyMonster_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AMyMonster
void AMyMonster::StaticRegisterNativesAMyMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMonster);
UClass* Z_Construct_UClass_AMyMonster_NoRegister()
{
	return AMyMonster::StaticClass();
}
struct Z_Construct_UClass_AMyMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMonster.h" },
		{ "ModuleRelativePath", "MyMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACreature,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMonster_Statics::ClassParams = {
	&AMyMonster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMonster()
{
	if (!Z_Registration_Info_UClass_AMyMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMonster.OuterSingleton, Z_Construct_UClass_AMyMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMonster.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyMonster>()
{
	return AMyMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMonster);
AMyMonster::~AMyMonster() {}
// End Class AMyMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMonster, AMyMonster::StaticClass, TEXT("AMyMonster"), &Z_Registration_Info_UClass_AMyMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMonster), 3717348822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyMonster_h_1176846562(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
