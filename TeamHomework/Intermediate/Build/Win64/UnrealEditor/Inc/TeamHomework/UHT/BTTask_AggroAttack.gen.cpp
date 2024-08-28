// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/BTTask_AggroAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AggroAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_AggroAttack();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UBTTask_AggroAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UBTTask_AggroAttack
void UBTTask_AggroAttack::StaticRegisterNativesUBTTask_AggroAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AggroAttack);
UClass* Z_Construct_UClass_UBTTask_AggroAttack_NoRegister()
{
	return UBTTask_AggroAttack::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AggroAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_AggroAttack.h" },
		{ "ModuleRelativePath", "BTTask_AggroAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AggroAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_AggroAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AggroAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AggroAttack_Statics::ClassParams = {
	&UBTTask_AggroAttack::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AggroAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AggroAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AggroAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_AggroAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AggroAttack.OuterSingleton, Z_Construct_UClass_UBTTask_AggroAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AggroAttack.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UBTTask_AggroAttack>()
{
	return UBTTask_AggroAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AggroAttack);
UBTTask_AggroAttack::~UBTTask_AggroAttack() {}
// End Class UBTTask_AggroAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_AggroAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AggroAttack, UBTTask_AggroAttack::StaticClass, TEXT("UBTTask_AggroAttack"), &Z_Registration_Info_UClass_UBTTask_AggroAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AggroAttack), 828803940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_AggroAttack_h_845054123(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_AggroAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_BTTask_AggroAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
