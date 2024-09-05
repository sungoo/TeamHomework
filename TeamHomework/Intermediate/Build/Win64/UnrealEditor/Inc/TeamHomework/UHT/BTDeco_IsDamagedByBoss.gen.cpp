// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTDeco_IsDamagedByBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDeco_IsDamagedByBoss() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_IsDamagedByBoss();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_IsDamagedByBoss_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTDeco_IsDamagedByBoss
void UBTDeco_IsDamagedByBoss::StaticRegisterNativesUBTDeco_IsDamagedByBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDeco_IsDamagedByBoss);
UClass* Z_Construct_UClass_UBTDeco_IsDamagedByBoss_NoRegister()
{
	return UBTDeco_IsDamagedByBoss::StaticClass();
}
struct Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTDeco_IsDamagedByBoss.h" },
		{ "ModuleRelativePath", "BTDeco_IsDamagedByBoss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDeco_IsDamagedByBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::ClassParams = {
	&UBTDeco_IsDamagedByBoss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDeco_IsDamagedByBoss()
{
	if (!Z_Registration_Info_UClass_UBTDeco_IsDamagedByBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDeco_IsDamagedByBoss.OuterSingleton, Z_Construct_UClass_UBTDeco_IsDamagedByBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDeco_IsDamagedByBoss.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTDeco_IsDamagedByBoss>()
{
	return UBTDeco_IsDamagedByBoss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDeco_IsDamagedByBoss);
UBTDeco_IsDamagedByBoss::~UBTDeco_IsDamagedByBoss() {}
// End Class UBTDeco_IsDamagedByBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsDamagedByBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDeco_IsDamagedByBoss, UBTDeco_IsDamagedByBoss::StaticClass, TEXT("UBTDeco_IsDamagedByBoss"), &Z_Registration_Info_UClass_UBTDeco_IsDamagedByBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDeco_IsDamagedByBoss), 1018842649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsDamagedByBoss_h_1917226968(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsDamagedByBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTDeco_IsDamagedByBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
