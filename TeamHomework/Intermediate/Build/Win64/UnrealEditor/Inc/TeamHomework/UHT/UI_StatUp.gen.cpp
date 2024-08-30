// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/UI_StatUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_StatUp() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_StatUp();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UUI_StatUp_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UUI_StatUp
void UUI_StatUp::StaticRegisterNativesUUI_StatUp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_StatUp);
UClass* Z_Construct_UClass_UUI_StatUp_NoRegister()
{
	return UUI_StatUp::StaticClass();
}
struct Z_Construct_UClass_UUI_StatUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI_StatUp.h" },
		{ "ModuleRelativePath", "UI_StatUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_StatUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_StatUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_StatUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_StatUp_Statics::ClassParams = {
	&UUI_StatUp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_StatUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_StatUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_StatUp()
{
	if (!Z_Registration_Info_UClass_UUI_StatUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_StatUp.OuterSingleton, Z_Construct_UClass_UUI_StatUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_StatUp.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UUI_StatUp>()
{
	return UUI_StatUp::StaticClass();
}
UUI_StatUp::UUI_StatUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_StatUp);
UUI_StatUp::~UUI_StatUp() {}
// End Class UUI_StatUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_StatUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_StatUp, UUI_StatUp::StaticClass, TEXT("UUI_StatUp"), &Z_Registration_Info_UClass_UUI_StatUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_StatUp), 3200411236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_StatUp_h_3120774858(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_StatUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_UI_StatUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
