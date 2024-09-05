// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTService_PrimeSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PrimeSetting() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTService_PrimeSetting();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTService_PrimeSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTService_PrimeSetting
void UBTService_PrimeSetting::StaticRegisterNativesUBTService_PrimeSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PrimeSetting);
UClass* Z_Construct_UClass_UBTService_PrimeSetting_NoRegister()
{
	return UBTService_PrimeSetting::StaticClass();
}
struct Z_Construct_UClass_UBTService_PrimeSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_PrimeSetting.h" },
		{ "ModuleRelativePath", "BTService_PrimeSetting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PrimeSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_PrimeSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PrimeSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PrimeSetting_Statics::ClassParams = {
	&UBTService_PrimeSetting::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PrimeSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_PrimeSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_PrimeSetting()
{
	if (!Z_Registration_Info_UClass_UBTService_PrimeSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PrimeSetting.OuterSingleton, Z_Construct_UClass_UBTService_PrimeSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_PrimeSetting.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTService_PrimeSetting>()
{
	return UBTService_PrimeSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PrimeSetting);
UBTService_PrimeSetting::~UBTService_PrimeSetting() {}
// End Class UBTService_PrimeSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTService_PrimeSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PrimeSetting, UBTService_PrimeSetting::StaticClass, TEXT("UBTService_PrimeSetting"), &Z_Registration_Info_UClass_UBTService_PrimeSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PrimeSetting), 3582720163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTService_PrimeSetting_h_3015155641(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTService_PrimeSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTService_PrimeSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
