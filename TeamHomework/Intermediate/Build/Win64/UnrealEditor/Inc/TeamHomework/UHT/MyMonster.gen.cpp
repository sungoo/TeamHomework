// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonster() {}

// Begin Cross Module References
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyMonster();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyMonster_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AMyMonster
void AMyMonster::StaticRegisterNativesAMyMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMonster);
UClass* Z_Construct_UClass_AMyMonster_NoRegister()
{
	return AMyMonster::StaticClass();
}
struct Z_Construct_UClass_AMyMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMonster.h" },
		{ "ModuleRelativePath", "MyMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statUpWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMonster.h" },
	};
#endif // WITH_METADATA
	static void NewProp__isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__statUpWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMyMonster_Statics::NewProp__isDead_SetBit(void* Obj)
{
	((AMyMonster*)Obj)->_isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyMonster_Statics::NewProp__isDead = { "_isDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyMonster), &Z_Construct_UClass_AMyMonster_Statics::NewProp__isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isDead_MetaData), NewProp__isDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMonster_Statics::NewProp__statUpWidget = { "_statUpWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMonster, _statUpWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statUpWidget_MetaData), NewProp__statUpWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMonster_Statics::NewProp__isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMonster_Statics::NewProp__statUpWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACreature,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMonster_Statics::ClassParams = {
	&AMyMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMonster()
{
	if (!Z_Registration_Info_UClass_AMyMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMonster.OuterSingleton, Z_Construct_UClass_AMyMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMonster.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyMonster>()
{
	return AMyMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMonster);
AMyMonster::~AMyMonster() {}
// End Class AMyMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMonster, AMyMonster::StaticClass, TEXT("AMyMonster"), &Z_Registration_Info_UClass_AMyMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMonster), 2948879875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyMonster_h_1313390117(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
