// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Behaviors/BTDeco_CanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDeco_CanAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_CanAttack();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTDeco_CanAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTDeco_CanAttack
void UBTDeco_CanAttack::StaticRegisterNativesUBTDeco_CanAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDeco_CanAttack);
UClass* Z_Construct_UClass_UBTDeco_CanAttack_NoRegister()
{
	return UBTDeco_CanAttack::StaticClass();
}
struct Z_Construct_UClass_UBTDeco_CanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/BTDeco_CanAttack.h" },
		{ "ModuleRelativePath", "Behaviors/BTDeco_CanAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDeco_CanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDeco_CanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_CanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDeco_CanAttack_Statics::ClassParams = {
	&UBTDeco_CanAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_CanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDeco_CanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDeco_CanAttack()
{
	if (!Z_Registration_Info_UClass_UBTDeco_CanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDeco_CanAttack.OuterSingleton, Z_Construct_UClass_UBTDeco_CanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDeco_CanAttack.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTDeco_CanAttack>()
{
	return UBTDeco_CanAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDeco_CanAttack);
UBTDeco_CanAttack::~UBTDeco_CanAttack() {}
// End Class UBTDeco_CanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTDeco_CanAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDeco_CanAttack, UBTDeco_CanAttack::StaticClass, TEXT("UBTDeco_CanAttack"), &Z_Registration_Info_UClass_UBTDeco_CanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDeco_CanAttack), 1202058384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTDeco_CanAttack_h_3206725793(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTDeco_CanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTDeco_CanAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
