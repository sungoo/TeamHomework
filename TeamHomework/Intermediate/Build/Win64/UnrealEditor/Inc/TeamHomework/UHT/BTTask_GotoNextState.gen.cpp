// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTTask_GotoNextState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GotoNextState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_GotoNextState();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_GotoNextState_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_GotoNextState
void UBTTask_GotoNextState::StaticRegisterNativesUBTTask_GotoNextState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_GotoNextState);
UClass* Z_Construct_UClass_UBTTask_GotoNextState_NoRegister()
{
	return UBTTask_GotoNextState::StaticClass();
}
struct Z_Construct_UClass_UBTTask_GotoNextState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_GotoNextState.h" },
		{ "ModuleRelativePath", "BTTask_GotoNextState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GotoNextState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_GotoNextState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GotoNextState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GotoNextState_Statics::ClassParams = {
	&UBTTask_GotoNextState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GotoNextState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_GotoNextState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_GotoNextState()
{
	if (!Z_Registration_Info_UClass_UBTTask_GotoNextState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_GotoNextState.OuterSingleton, Z_Construct_UClass_UBTTask_GotoNextState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_GotoNextState.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_GotoNextState>()
{
	return UBTTask_GotoNextState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GotoNextState);
UBTTask_GotoNextState::~UBTTask_GotoNextState() {}
// End Class UBTTask_GotoNextState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_GotoNextState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_GotoNextState, UBTTask_GotoNextState::StaticClass, TEXT("UBTTask_GotoNextState"), &Z_Registration_Info_UClass_UBTTask_GotoNextState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_GotoNextState), 3578830774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_GotoNextState_h_2083583245(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_GotoNextState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_GotoNextState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
