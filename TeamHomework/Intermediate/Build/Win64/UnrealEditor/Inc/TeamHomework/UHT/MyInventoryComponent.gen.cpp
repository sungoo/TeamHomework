// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UMyInventoryComponent
void UMyInventoryComponent::StaticRegisterNativesUMyInventoryComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryComponent);
UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister()
{
	return UMyInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyInventoryComponent.h" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__items_MetaData[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryMax_MetaData[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FIntPropertyParams NewProp__inventoryMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__items_MetaData), NewProp__items_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__inventoryMax = { "_inventoryMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _inventoryMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryMax_MetaData), NewProp__inventoryMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__inventoryMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams = {
	&UMyInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton, Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UMyInventoryComponent>()
{
	return UMyInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryComponent);
UMyInventoryComponent::~UMyInventoryComponent() {}
// End Class UMyInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryComponent, UMyInventoryComponent::StaticClass, TEXT("UMyInventoryComponent"), &Z_Registration_Info_UClass_UMyInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryComponent), 1900106047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_3809944829(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
