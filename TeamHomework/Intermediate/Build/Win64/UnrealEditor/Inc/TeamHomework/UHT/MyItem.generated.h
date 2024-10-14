// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MyItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAMHOMEWORK_MyItem_generated_h
#error "MyItem.generated.h already included, missing '#pragma once' in MyItem.h"
#endif
#define TEAMHOMEWORK_MyItem_generated_h

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	TEAMHOMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMyCharacterOverlapEnd); \
	DECLARE_FUNCTION(execOnMyCharacterOverlap);


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyItem(); \
	friend struct Z_Construct_UClass_AMyItem_Statics; \
public: \
	DECLARE_CLASS(AMyItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(AMyItem)


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyItem(AMyItem&&); \
	AMyItem(const AMyItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyItem) \
	NO_API virtual ~AMyItem();


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_48_PROLOG
#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class AMyItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Item_MyItem_h


#define FOREACH_ENUM_TYPE(op) \
	op(TYPE::HP) \
	op(TYPE::ATK) \
	op(TYPE::SPEED) \
	op(TYPE::GOLD) 

enum class TYPE;
template<> struct TIsUEnumClass<TYPE> { enum { Value = true }; };
template<> TEAMHOMEWORK_API UEnum* StaticEnum<TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
