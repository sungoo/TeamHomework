// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyStatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMHOMEWORK_MyStatComponent_generated_h
#error "MyStatComponent.generated.h already included, missing '#pragma once' in MyStatComponent.h"
#endif
#define TEAMHOMEWORK_MyStatComponent_generated_h

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyStatData_Statics; \
	TEAMHOMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TEAMHOMEWORK_API UScriptStruct* StaticStruct<struct FMyStatData>();

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyStatComponent(UMyStatComponent&&); \
	UMyStatComponent(const UMyStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStatComponent) \
	NO_API virtual ~UMyStatComponent();


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_43_PROLOG
#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class UMyStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_MyStatComponent_h


#define FOREACH_ENUM_CREATURETYPE(op) \
	op(CreatureType::Archer) \
	op(CreatureType::Knight) \
	op(CreatureType::Monster) \
	op(CreatureType::BossMonster) 

enum class CreatureType;
template<> struct TIsUEnumClass<CreatureType> { enum { Value = true }; };
template<> TEAMHOMEWORK_API UEnum* StaticEnum<CreatureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
