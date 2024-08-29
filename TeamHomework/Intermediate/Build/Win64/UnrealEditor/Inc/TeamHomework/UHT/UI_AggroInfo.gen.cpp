// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/UI_AggroInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_AggroInfo() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_AggroInfo();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_AggroInfo_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UUI_AggroInfo
void UUI_AggroInfo::StaticRegisterNativesUUI_AggroInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_AggroInfo);
UClass* Z_Construct_UClass_UUI_AggroInfo_NoRegister()
{
	return UUI_AggroInfo::StaticClass();
}
struct Z_Construct_UClass_UUI_AggroInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI_AggroInfo.h" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_AggroInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_AggroInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_AggroInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_AggroInfo_Statics::ClassParams = {
	&UUI_AggroInfo::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_AggroInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_AggroInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_AggroInfo()
{
	if (!Z_Registration_Info_UClass_UUI_AggroInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_AggroInfo.OuterSingleton, Z_Construct_UClass_UUI_AggroInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_AggroInfo.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UUI_AggroInfo>()
{
	return UUI_AggroInfo::StaticClass();
}
UUI_AggroInfo::UUI_AggroInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_AggroInfo);
UUI_AggroInfo::~UUI_AggroInfo() {}
// End Class UUI_AggroInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_AggroInfo, UUI_AggroInfo::StaticClass, TEXT("UUI_AggroInfo"), &Z_Registration_Info_UClass_UUI_AggroInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_AggroInfo), 1327338933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_764375741(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
