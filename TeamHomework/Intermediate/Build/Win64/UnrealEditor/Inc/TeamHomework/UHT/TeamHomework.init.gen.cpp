// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamHomework_init() {}
	TEAMHOMEWORK_API UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature();
	TEAMHOMEWORK_API UFunction* Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TeamHomework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TeamHomework()
	{
		if (!Z_Registration_Info_UPackage__Script_TeamHomework.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TeamHomework_Delegate_AttackHitEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TeamHomework_Delegate_Death__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TeamHomework",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5B344030,
				0x4AD278C0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TeamHomework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TeamHomework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TeamHomework(Z_Construct_UPackage__Script_TeamHomework, TEXT("/Script/TeamHomework"), Z_Registration_Info_UPackage__Script_TeamHomework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5B344030, 0x4AD278C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
