// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Behaviors/BTTask_RunAway.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunAway() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_RunAway();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_RunAway_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_RunAway
void UBTTask_RunAway::StaticRegisterNativesUBTTask_RunAway()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunAway);
UClass* Z_Construct_UClass_UBTTask_RunAway_NoRegister()
{
	return UBTTask_RunAway::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RunAway_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/BTTask_RunAway.h" },
		{ "ModuleRelativePath", "Behaviors/BTTask_RunAway.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_runDistance_MetaData[] = {
		{ "Category", "RunAway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance to run away from the boss */" },
#endif
		{ "ModuleRelativePath", "Behaviors/BTTask_RunAway.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance to run away from the boss" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_runDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunAway>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RunAway_Statics::NewProp_runDistance = { "runDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunAway, runDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_runDistance_MetaData), NewProp_runDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunAway_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunAway_Statics::NewProp_runDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunAway_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RunAway_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunAway_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunAway_Statics::ClassParams = {
	&UBTTask_RunAway::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RunAway_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunAway_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunAway_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RunAway_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RunAway()
{
	if (!Z_Registration_Info_UClass_UBTTask_RunAway.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunAway.OuterSingleton, Z_Construct_UClass_UBTTask_RunAway_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RunAway.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_RunAway>()
{
	return UBTTask_RunAway::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunAway);
UBTTask_RunAway::~UBTTask_RunAway() {}
// End Class UBTTask_RunAway

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_RunAway_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunAway, UBTTask_RunAway::StaticClass, TEXT("UBTTask_RunAway"), &Z_Registration_Info_UClass_UBTTask_RunAway, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunAway), 540590983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_RunAway_h_3493870001(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_RunAway_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_RunAway_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
