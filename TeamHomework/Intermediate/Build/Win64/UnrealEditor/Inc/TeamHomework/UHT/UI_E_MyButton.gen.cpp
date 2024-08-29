// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/UI_E_MyButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_E_MyButton() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_E_MyButton();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_E_MyButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UUI_E_MyButton
void UUI_E_MyButton::StaticRegisterNativesUUI_E_MyButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_E_MyButton);
UClass* Z_Construct_UClass_UUI_E_MyButton_NoRegister()
{
	return UUI_E_MyButton::StaticClass();
}
struct Z_Construct_UClass_UUI_E_MyButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI_E_MyButton.h" },
		{ "ModuleRelativePath", "UI_E_MyButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[] = {
		{ "ModuleRelativePath", "UI_E_MyButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemSetting_MetaData[] = {
		{ "ModuleRelativePath", "UI_E_MyButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__itemSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_E_MyButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUI_E_MyButton_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_E_MyButton, index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_index_MetaData), NewProp_index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_E_MyButton_Statics::NewProp__itemSetting = { "_itemSetting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_E_MyButton, _itemSetting), Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemSetting_MetaData), NewProp__itemSetting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_E_MyButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_E_MyButton_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_E_MyButton_Statics::NewProp__itemSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_E_MyButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUI_E_MyButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_E_MyButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_E_MyButton_Statics::ClassParams = {
	&UUI_E_MyButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUI_E_MyButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_E_MyButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_E_MyButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_E_MyButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_E_MyButton()
{
	if (!Z_Registration_Info_UClass_UUI_E_MyButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_E_MyButton.OuterSingleton, Z_Construct_UClass_UUI_E_MyButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_E_MyButton.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UUI_E_MyButton>()
{
	return UUI_E_MyButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_E_MyButton);
UUI_E_MyButton::~UUI_E_MyButton() {}
// End Class UUI_E_MyButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_E_MyButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_E_MyButton, UUI_E_MyButton::StaticClass, TEXT("UUI_E_MyButton"), &Z_Registration_Info_UClass_UUI_E_MyButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_E_MyButton), 4149607368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_E_MyButton_h_740307988(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_E_MyButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_UI_E_MyButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
