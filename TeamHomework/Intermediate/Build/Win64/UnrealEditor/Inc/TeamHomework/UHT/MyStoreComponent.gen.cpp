// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/ActorComponents/MyStoreComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStoreComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStoreComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyStoreComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyStoreComponent
void UMyStoreComponent::StaticRegisterNativesUMyStoreComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyStoreComponent);
UClass* Z_Construct_UClass_UMyStoreComponent_NoRegister()
{
	return UMyStoreComponent::StaticClass();
}
struct Z_Construct_UClass_UMyStoreComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/MyStoreComponent.h" },
		{ "ModuleRelativePath", "ActorComponents/MyStoreComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStoreComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyStoreComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStoreComponent_Statics::ClassParams = {
	&UMyStoreComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyStoreComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyStoreComponent()
{
	if (!Z_Registration_Info_UClass_UMyStoreComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStoreComponent.OuterSingleton, Z_Construct_UClass_UMyStoreComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyStoreComponent.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyStoreComponent>()
{
	return UMyStoreComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStoreComponent);
UMyStoreComponent::~UMyStoreComponent() {}
// End Class UMyStoreComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_ActorComponents_MyStoreComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyStoreComponent, UMyStoreComponent::StaticClass, TEXT("UMyStoreComponent"), &Z_Registration_Info_UClass_UMyStoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStoreComponent), 273858391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_ActorComponents_MyStoreComponent_h_2481525485(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_ActorComponents_MyStoreComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_ActorComponents_MyStoreComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
