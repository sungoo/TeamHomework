// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/StoreComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UStoreComponent();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_UStoreComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class UStoreComponent
void UStoreComponent::StaticRegisterNativesUStoreComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoreComponent);
UClass* Z_Construct_UClass_UStoreComponent_NoRegister()
{
	return UStoreComponent::StaticClass();
}
struct Z_Construct_UClass_UStoreComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StoreComponent.h" },
		{ "ModuleRelativePath", "StoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__storeInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__playerInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemSlotNum_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selling" },
		{ "ModuleRelativePath", "StoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemOnSale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selling" },
		{ "ModuleRelativePath", "StoreComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__storeInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__playerInventory;
	static const UECodeGen_Private::FIntPropertyParams NewProp__itemSlotNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__itemOnSale_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__itemOnSale_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__itemOnSale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__storeInventory = { "_storeInventory", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoreComponent, _storeInventory), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__storeInventory_MetaData), NewProp__storeInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__playerInventory = { "_playerInventory", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoreComponent, _playerInventory), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__playerInventory_MetaData), NewProp__playerInventory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemSlotNum = { "_itemSlotNum", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoreComponent, _itemSlotNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemSlotNum_MetaData), NewProp__itemSlotNum_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale_ValueProp = { "_itemOnSale", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale_Key_KeyProp = { "_itemOnSale_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale = { "_itemOnSale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoreComponent, _itemOnSale), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemOnSale_MetaData), NewProp__itemOnSale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__storeInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__playerInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemSlotNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreComponent_Statics::NewProp__itemOnSale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoreComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStoreComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoreComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoreComponent_Statics::ClassParams = {
	&UStoreComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStoreComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStoreComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStoreComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStoreComponent()
{
	if (!Z_Registration_Info_UClass_UStoreComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoreComponent.OuterSingleton, Z_Construct_UClass_UStoreComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStoreComponent.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<UStoreComponent>()
{
	return UStoreComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreComponent);
UStoreComponent::~UStoreComponent() {}
// End Class UStoreComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_StoreComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStoreComponent, UStoreComponent::StaticClass, TEXT("UStoreComponent"), &Z_Registration_Info_UClass_UStoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoreComponent), 430541392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_StoreComponent_h_735853130(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_StoreComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_StoreComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
