// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/UI_BaseDisplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_BaseDisplay() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_BaseDisplay();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_BaseDisplay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UUI_BaseDisplay
void UUI_BaseDisplay::StaticRegisterNativesUUI_BaseDisplay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_BaseDisplay);
UClass* Z_Construct_UClass_UUI_BaseDisplay_NoRegister()
{
	return UUI_BaseDisplay::StaticClass();
}
struct Z_Construct_UClass_UUI_BaseDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI_BaseDisplay.h" },
		{ "ModuleRelativePath", "UI_BaseDisplay.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_BaseDisplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_BaseDisplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_BaseDisplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_BaseDisplay_Statics::ClassParams = {
	&UUI_BaseDisplay::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_BaseDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_BaseDisplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_BaseDisplay()
{
	if (!Z_Registration_Info_UClass_UUI_BaseDisplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_BaseDisplay.OuterSingleton, Z_Construct_UClass_UUI_BaseDisplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_BaseDisplay.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UUI_BaseDisplay>()
{
	return UUI_BaseDisplay::StaticClass();
}
UUI_BaseDisplay::UUI_BaseDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_BaseDisplay);
UUI_BaseDisplay::~UUI_BaseDisplay() {}
// End Class UUI_BaseDisplay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_BaseDisplay, UUI_BaseDisplay::StaticClass, TEXT("UUI_BaseDisplay"), &Z_Registration_Info_UClass_UUI_BaseDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_BaseDisplay), 3712263811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_1148243718(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
