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
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_AggroInfo();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_AggroInfo_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hpInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_AggroInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NameBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__damageInfo_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__damageInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__damageInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpInfo_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__hpInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_AggroInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_NameBox = { "NameBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_AggroInfo, NameBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameBox_MetaData), NewProp_NameBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_DamageBox = { "DamageBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_AggroInfo, DamageBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageBox_MetaData), NewProp_DamageBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_HpBox = { "HpBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_AggroInfo, HpBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpBox_MetaData), NewProp_HpBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo_ValueProp = { "_damageInfo", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo_Key_KeyProp = { "_damageInfo_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo = { "_damageInfo", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_AggroInfo, _damageInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageInfo_MetaData), NewProp__damageInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo_ValueProp = { "_hpInfo", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo_Key_KeyProp = { "_hpInfo_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo = { "_hpInfo", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_AggroInfo, _hpInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hpInfo_MetaData), NewProp__hpInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_AggroInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_NameBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_DamageBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp_HpBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__damageInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_AggroInfo_Statics::NewProp__hpInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_AggroInfo_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UUI_AggroInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_AggroInfo_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_AggroInfo, UUI_AggroInfo::StaticClass, TEXT("UUI_AggroInfo"), &Z_Registration_Info_UClass_UUI_AggroInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_AggroInfo), 2416841092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_179377(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_AggroInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
