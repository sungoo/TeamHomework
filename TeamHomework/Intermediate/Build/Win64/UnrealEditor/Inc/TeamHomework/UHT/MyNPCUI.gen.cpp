// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/UI/MyNPCUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNPCUI() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyNPCUI();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyNPCUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyNPCUI
void UMyNPCUI::StaticRegisterNativesUMyNPCUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyNPCUI);
UClass* Z_Construct_UClass_UMyNPCUI_NoRegister()
{
	return UMyNPCUI::StaticClass();
}
struct Z_Construct_UClass_UMyNPCUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/MyNPCUI.h" },
		{ "ModuleRelativePath", "UI/MyNPCUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyNPCUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyNPCUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNPCUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyNPCUI_Statics::ClassParams = {
	&UMyNPCUI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNPCUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyNPCUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyNPCUI()
{
	if (!Z_Registration_Info_UClass_UMyNPCUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyNPCUI.OuterSingleton, Z_Construct_UClass_UMyNPCUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyNPCUI.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyNPCUI>()
{
	return UMyNPCUI::StaticClass();
}
UMyNPCUI::UMyNPCUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyNPCUI);
UMyNPCUI::~UMyNPCUI() {}
// End Class UMyNPCUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_MyNPCUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyNPCUI, UMyNPCUI::StaticClass, TEXT("UMyNPCUI"), &Z_Registration_Info_UClass_UMyNPCUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyNPCUI), 3424060523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_MyNPCUI_h_1742846609(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_MyNPCUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_MyNPCUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
