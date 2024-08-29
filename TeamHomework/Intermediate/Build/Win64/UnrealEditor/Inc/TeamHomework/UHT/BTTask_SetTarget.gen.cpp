// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTTask_SetTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetTarget();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_SetTarget
void UBTTask_SetTarget::StaticRegisterNativesUBTTask_SetTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetTarget);
UClass* Z_Construct_UClass_UBTTask_SetTarget_NoRegister()
{
	return UBTTask_SetTarget::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetTarget.h" },
		{ "ModuleRelativePath", "BTTask_SetTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_SetTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetTarget_Statics::ClassParams = {
	&UBTTask_SetTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetTarget()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetTarget.OuterSingleton, Z_Construct_UClass_UBTTask_SetTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetTarget.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_SetTarget>()
{
	return UBTTask_SetTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetTarget);
UBTTask_SetTarget::~UBTTask_SetTarget() {}
// End Class UBTTask_SetTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_SetTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetTarget, UBTTask_SetTarget::StaticClass, TEXT("UBTTask_SetTarget"), &Z_Registration_Info_UClass_UBTTask_SetTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetTarget), 4134909857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_SetTarget_h_909584731(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_SetTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_SetTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
