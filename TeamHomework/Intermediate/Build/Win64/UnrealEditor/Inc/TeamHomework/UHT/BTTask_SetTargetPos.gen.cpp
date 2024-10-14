// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Behaviors/BTTask_SetTargetPos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetTargetPos() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetTargetPos();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetTargetPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_SetTargetPos
void UBTTask_SetTargetPos::StaticRegisterNativesUBTTask_SetTargetPos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetTargetPos);
UClass* Z_Construct_UClass_UBTTask_SetTargetPos_NoRegister()
{
	return UBTTask_SetTargetPos::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetTargetPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/BTTask_SetTargetPos.h" },
		{ "ModuleRelativePath", "Behaviors/BTTask_SetTargetPos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetTargetPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_SetTargetPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetTargetPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetTargetPos_Statics::ClassParams = {
	&UBTTask_SetTargetPos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetTargetPos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetTargetPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetTargetPos()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetTargetPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetTargetPos.OuterSingleton, Z_Construct_UClass_UBTTask_SetTargetPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetTargetPos.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_SetTargetPos>()
{
	return UBTTask_SetTargetPos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetTargetPos);
UBTTask_SetTargetPos::~UBTTask_SetTargetPos() {}
// End Class UBTTask_SetTargetPos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_SetTargetPos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetTargetPos, UBTTask_SetTargetPos::StaticClass, TEXT("UBTTask_SetTargetPos"), &Z_Registration_Info_UClass_UBTTask_SetTargetPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetTargetPos), 2791307881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_SetTargetPos_h_1075928147(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_SetTargetPos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Behaviors_BTTask_SetTargetPos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
