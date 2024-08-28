// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/MyPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_ACreature();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AMyPlayer Function SetTargitItem
struct Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics
{
	struct MyPlayer_eventSetTargitItem_Parms
	{
		AMyItem* item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventSetTargitItem_Parms, item), Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::NewProp_item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "SetTargitItem", nullptr, nullptr, Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::MyPlayer_eventSetTargitItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::MyPlayer_eventSetTargitItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_SetTargitItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_SetTargitItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execSetTargitItem)
{
	P_GET_OBJECT(AMyItem,Z_Param_item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargitItem(Z_Param_item);
	P_NATIVE_END;
}
// End Class AMyPlayer Function SetTargitItem

// Begin Class AMyPlayer
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
	UClass* Class = AMyPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTargitItem", &AMyPlayer::execSetTargitItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::StaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__tryGetItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__meetNPC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__viewStore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryOpen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__UIopen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__controller_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controller\n" },
#endif
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__item_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action\n" },
#endif
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__turnAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__lookUpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__getItemAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__dropItemAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__viewInventoryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__viewStoreAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpringArm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bossAttack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damagedByBoss_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp__tryGetItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__tryGetItem;
	static void NewProp__meetNPC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__meetNPC;
	static void NewProp__viewStore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__viewStore;
	static void NewProp__inventoryOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__inventoryOpen;
	static void NewProp__UIopen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__UIopen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__turnAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__lookUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__jumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__getItemAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__dropItemAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__viewInventoryAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__viewStoreAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__springArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp__bossAttack;
	static void NewProp__damagedByBoss_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__damagedByBoss;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_SetTargitItem, "SetTargitItem" }, // 4061102527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__tryGetItem_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_tryGetItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__tryGetItem = { "_tryGetItem", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__tryGetItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__tryGetItem_MetaData), NewProp__tryGetItem_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__meetNPC_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_meetNPC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__meetNPC = { "_meetNPC", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__meetNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__meetNPC_MetaData), NewProp__meetNPC_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStore_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_viewStore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStore = { "_viewStore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__viewStore_MetaData), NewProp__viewStore_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__inventoryOpen_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_inventoryOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__inventoryOpen = { "_inventoryOpen", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__inventoryOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryOpen_MetaData), NewProp__inventoryOpen_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__UIopen_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_UIopen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__UIopen = { "_UIopen", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__UIopen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__UIopen_MetaData), NewProp__UIopen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _controller), Z_Construct_UClass_AMyPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__controller_MetaData), NewProp__controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _item), Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__item_MetaData), NewProp__item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__moveAction = { "_moveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__moveAction_MetaData), NewProp__moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__turnAction = { "_turnAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _turnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__turnAction_MetaData), NewProp__turnAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__lookUpAction = { "_lookUpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _lookUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__lookUpAction_MetaData), NewProp__lookUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__jumpAction = { "_jumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__jumpAction_MetaData), NewProp__jumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__attackAction = { "_attackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _attackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAction_MetaData), NewProp__attackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__getItemAction = { "_getItemAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _getItemAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__getItemAction_MetaData), NewProp__getItemAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__dropItemAction = { "_dropItemAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _dropItemAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__dropItemAction_MetaData), NewProp__dropItemAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewInventoryAction = { "_viewInventoryAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _viewInventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__viewInventoryAction_MetaData), NewProp__viewInventoryAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStoreAction = { "_viewStoreAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _viewStoreAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__viewStoreAction_MetaData), NewProp__viewStoreAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__springArm = { "_springArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__springArm_MetaData), NewProp__springArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__camera_MetaData), NewProp__camera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__bossAttack = { "_bossAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _bossAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bossAttack_MetaData), NewProp__bossAttack_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp__damagedByBoss_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->_damagedByBoss = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__damagedByBoss = { "_damagedByBoss", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp__damagedByBoss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damagedByBoss_MetaData), NewProp__damagedByBoss_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__tryGetItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__meetNPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__inventoryOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__UIopen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__turnAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__lookUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__attackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__getItemAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__dropItemAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewInventoryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__viewStoreAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__springArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__bossAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__damagedByBoss,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACreature,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AMyPlayer>()
{
	return AMyPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// End Class AMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 2059142886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyPlayer_h_2977520557(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamHomework_Source_TeamHomework_MyPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
