// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/PlayerSelectionUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSelectionUI() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UPlayerSelectionUI();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UPlayerSelectionUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UPlayerSelectionUI Function OnArcherButtonClicked
struct Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerSelectionUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSelectionUI, nullptr, "OnArcherButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSelectionUI::execOnArcherButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnArcherButtonClicked();
	P_NATIVE_END;
}
// End Class UPlayerSelectionUI Function OnArcherButtonClicked

// Begin Class UPlayerSelectionUI Function OnKnightButtonClicked
struct Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerSelectionUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerSelectionUI, nullptr, "OnKnightButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerSelectionUI::execOnKnightButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKnightButtonClicked();
	P_NATIVE_END;
}
// End Class UPlayerSelectionUI Function OnKnightButtonClicked

// Begin Class UPlayerSelectionUI
void UPlayerSelectionUI::StaticRegisterNativesUPlayerSelectionUI()
{
	UClass* Class = UPlayerSelectionUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnArcherButtonClicked", &UPlayerSelectionUI::execOnArcherButtonClicked },
		{ "OnKnightButtonClicked", &UPlayerSelectionUI::execOnKnightButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerSelectionUI);
UClass* Z_Construct_UClass_UPlayerSelectionUI_NoRegister()
{
	return UPlayerSelectionUI::StaticClass();
}
struct Z_Construct_UClass_UPlayerSelectionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerSelectionUI.h" },
		{ "ModuleRelativePath", "PlayerSelectionUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerSelectionUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerSelectionUI_OnArcherButtonClicked, "OnArcherButtonClicked" }, // 1801481641
		{ &Z_Construct_UFunction_UPlayerSelectionUI_OnKnightButtonClicked, "OnKnightButtonClicked" }, // 3738138775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSelectionUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerSelectionUI_Statics::NewProp_SlotGrid = { "SlotGrid", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerSelectionUI, SlotGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotGrid_MetaData), NewProp_SlotGrid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerSelectionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSelectionUI_Statics::NewProp_SlotGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSelectionUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerSelectionUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSelectionUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerSelectionUI_Statics::ClassParams = {
	&UPlayerSelectionUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerSelectionUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSelectionUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSelectionUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerSelectionUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerSelectionUI()
{
	if (!Z_Registration_Info_UClass_UPlayerSelectionUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerSelectionUI.OuterSingleton, Z_Construct_UClass_UPlayerSelectionUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerSelectionUI.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UPlayerSelectionUI>()
{
	return UPlayerSelectionUI::StaticClass();
}
UPlayerSelectionUI::UPlayerSelectionUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSelectionUI);
UPlayerSelectionUI::~UPlayerSelectionUI() {}
// End Class UPlayerSelectionUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSelectionUI, UPlayerSelectionUI::StaticClass, TEXT("UPlayerSelectionUI"), &Z_Registration_Info_UClass_UPlayerSelectionUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSelectionUI), 3670955558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_2737322445(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
