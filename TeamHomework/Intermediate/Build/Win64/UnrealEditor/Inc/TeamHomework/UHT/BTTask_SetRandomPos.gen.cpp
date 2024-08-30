// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTTask_SetRandomPos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetRandomPos() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetRandomPos();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_SetRandomPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_SetRandomPos
void UBTTask_SetRandomPos::StaticRegisterNativesUBTTask_SetRandomPos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetRandomPos);
UClass* Z_Construct_UClass_UBTTask_SetRandomPos_NoRegister()
{
	return UBTTask_SetRandomPos::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetRandomPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_SetRandomPos.h" },
		{ "ModuleRelativePath", "BTTask_SetRandomPos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetRandomPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_SetRandomPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetRandomPos_Statics::ClassParams = {
	&UBTTask_SetRandomPos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetRandomPos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetRandomPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetRandomPos()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetRandomPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetRandomPos.OuterSingleton, Z_Construct_UClass_UBTTask_SetRandomPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetRandomPos.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_SetRandomPos>()
{
	return UBTTask_SetRandomPos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetRandomPos);
UBTTask_SetRandomPos::~UBTTask_SetRandomPos() {}
// End Class UBTTask_SetRandomPos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_SetRandomPos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetRandomPos, UBTTask_SetRandomPos::StaticClass, TEXT("UBTTask_SetRandomPos"), &Z_Registration_Info_UClass_UBTTask_SetRandomPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetRandomPos), 133822469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_SetRandomPos_h_241019742(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_SetRandomPos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_BTTask_SetRandomPos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
