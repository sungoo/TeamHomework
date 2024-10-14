// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Behaviors/BTTask_Cast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Cast() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_Cast();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_Cast_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_Cast
void UBTTask_Cast::StaticRegisterNativesUBTTask_Cast()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Cast);
UClass* Z_Construct_UClass_UBTTask_Cast_NoRegister()
{
	return UBTTask_Cast::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Cast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/BTTask_Cast.h" },
		{ "ModuleRelativePath", "Behaviors/BTTask_Cast.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Cast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_Cast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Cast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Cast_Statics::ClassParams = {
	&UBTTask_Cast::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Cast_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Cast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Cast()
{
	if (!Z_Registration_Info_UClass_UBTTask_Cast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Cast.OuterSingleton, Z_Construct_UClass_UBTTask_Cast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Cast.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_Cast>()
{
	return UBTTask_Cast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Cast);
UBTTask_Cast::~UBTTask_Cast() {}
// End Class UBTTask_Cast

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_Cast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Cast, UBTTask_Cast::StaticClass, TEXT("UBTTask_Cast"), &Z_Registration_Info_UClass_UBTTask_Cast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Cast), 1850515912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_Cast_h_356269886(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_Cast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_Cast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
