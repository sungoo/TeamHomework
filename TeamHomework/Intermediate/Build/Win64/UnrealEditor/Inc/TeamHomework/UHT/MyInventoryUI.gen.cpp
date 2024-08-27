// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyInventoryUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryUI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryUI();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyInventoryUI
void UMyInventoryUI::StaticRegisterNativesUMyInventoryUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryUI);
UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister()
{
	return UMyInventoryUI::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyInventoryUI.h" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button__MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_itemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__defaultTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Button_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_itemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__defaultTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_SlotGrid = { "SlotGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, SlotGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotGrid_MetaData), NewProp_SlotGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Button__Inner = { "Button_", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Button_ = { "Button_", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, Button_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button__MetaData), NewProp_Button__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Text_itemName = { "Text_itemName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, Text_itemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_itemName_MetaData), NewProp_Text_itemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__defaultTexture = { "_defaultTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, _defaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__defaultTexture_MetaData), NewProp__defaultTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_SlotGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Button__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Button_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_Text_itemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__defaultTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryUI_Statics::ClassParams = {
	&UMyInventoryUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryUI()
{
	if (!Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton, Z_Construct_UClass_UMyInventoryUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyInventoryUI>()
{
	return UMyInventoryUI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryUI);
UMyInventoryUI::~UMyInventoryUI() {}
// End Class UMyInventoryUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyInventoryUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryUI, UMyInventoryUI::StaticClass, TEXT("UMyInventoryUI"), &Z_Registration_Info_UClass_UMyInventoryUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryUI), 1545510008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyInventoryUI_h_3016431932(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyInventoryUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyInventoryUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
