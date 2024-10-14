// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Managers/MyPlayerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayerManager();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayerManager_NoRegister();
TEAMHOMEWORK_API UEnum* Z_Construct_UEnum_TeamHomework_EPlayerType();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Enum EPlayerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerType;
static UEnum* EPlayerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TeamHomework_EPlayerType, (UObject*)Z_Construct_UPackage__Script_TeamHomework(), TEXT("EPlayerType"));
	}
	return Z_Registration_Info_UEnum_EPlayerType.OuterSingleton;
}
template<> TEAMHOMEWORK_API UEnum* StaticEnum<EPlayerType>()
{
	return EPlayerType_StaticEnum();
}
struct Z_Construct_UEnum_TeamHomework_EPlayerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Archer.DisplayName", "Archer" },
		{ "Archer.Name", "EPlayerType::Archer" },
		{ "BlueprintType", "true" },
		{ "Knight.DisplayName", "Knight" },
		{ "Knight.Name", "EPlayerType::Knight" },
		{ "ModuleRelativePath", "Managers/MyPlayerManager.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerType::Knight", (int64)EPlayerType::Knight },
		{ "EPlayerType::Archer", (int64)EPlayerType::Archer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TeamHomework,
	nullptr,
	"EPlayerType",
	"EPlayerType",
	Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TeamHomework_EPlayerType()
{
	if (!Z_Registration_Info_UEnum_EPlayerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerType.InnerSingleton, Z_Construct_UEnum_TeamHomework_EPlayerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerType.InnerSingleton;
}
// End Enum EPlayerType

// Begin Class AMyPlayerManager
void AMyPlayerManager::StaticRegisterNativesAMyPlayerManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerManager);
UClass* Z_Construct_UClass_AMyPlayerManager_NoRegister()
{
	return AMyPlayerManager::StaticClass();
}
struct Z_Construct_UClass_AMyPlayerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/MyPlayerManager.h" },
		{ "ModuleRelativePath", "Managers/MyPlayerManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlayerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerManager_Statics::ClassParams = {
	&AMyPlayerManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayerManager()
{
	if (!Z_Registration_Info_UClass_AMyPlayerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerManager.OuterSingleton, Z_Construct_UClass_AMyPlayerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerManager.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyPlayerManager>()
{
	return AMyPlayerManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerManager);
AMyPlayerManager::~AMyPlayerManager() {}
// End Class AMyPlayerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerType_StaticEnum, TEXT("EPlayerType"), &Z_Registration_Info_UEnum_EPlayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 387096076U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerManager, AMyPlayerManager::StaticClass, TEXT("AMyPlayerManager"), &Z_Registration_Info_UClass_AMyPlayerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerManager), 2291262750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_2582800174(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Managers_MyPlayerManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
