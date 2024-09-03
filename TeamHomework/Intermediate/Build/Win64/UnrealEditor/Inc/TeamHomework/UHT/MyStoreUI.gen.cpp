// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyStoreUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStoreUI() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStoreUI();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStoreUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyStoreUI
void UMyStoreUI::StaticRegisterNativesUMyStoreUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyStoreUI);
UClass* Z_Construct_UClass_UMyStoreUI_NoRegister()
{
	return UMyStoreUI::StaticClass();
}
struct Z_Construct_UClass_UMyStoreUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyStoreUI.h" },
		{ "ModuleRelativePath", "MyStoreUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isVisible_MetaData[] = {
		{ "ModuleRelativePath", "MyStoreUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp__isVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStoreUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMyStoreUI_Statics::NewProp__isVisible_SetBit(void* Obj)
{
	((UMyStoreUI*)Obj)->_isVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyStoreUI_Statics::NewProp__isVisible = { "_isVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyStoreUI), &Z_Construct_UClass_UMyStoreUI_Statics::NewProp__isVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isVisible_MetaData), NewProp__isVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStoreUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStoreUI_Statics::NewProp__isVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyStoreUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStoreUI_Statics::ClassParams = {
	&UMyStoreUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyStoreUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyStoreUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyStoreUI()
{
	if (!Z_Registration_Info_UClass_UMyStoreUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStoreUI.OuterSingleton, Z_Construct_UClass_UMyStoreUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyStoreUI.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyStoreUI>()
{
	return UMyStoreUI::StaticClass();
}
UMyStoreUI::UMyStoreUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStoreUI);
UMyStoreUI::~UMyStoreUI() {}
// End Class UMyStoreUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStoreUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyStoreUI, UMyStoreUI::StaticClass, TEXT("UMyStoreUI"), &Z_Registration_Info_UClass_UMyStoreUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStoreUI), 1136835563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStoreUI_h_4117534206(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStoreUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStoreUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
