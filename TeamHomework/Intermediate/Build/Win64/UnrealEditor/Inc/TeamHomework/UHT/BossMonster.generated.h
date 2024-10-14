// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/BossMonster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAMHOMEWORK_BossMonster_generated_h
#error "BossMonster.generated.h already included, missing '#pragma once' in BossMonster.h"
#endif
#define TEAMHOMEWORK_BossMonster_generated_h

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMyCharacterOverlap);


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossMonster(); \
	friend struct Z_Construct_UClass_ABossMonster_Statics; \
public: \
	DECLARE_CLASS(ABossMonster, ACreature, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(ABossMonster)


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABossMonster(ABossMonster&&); \
	ABossMonster(const ABossMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossMonster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossMonster) \
	NO_API virtual ~ABossMonster();


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_16_PROLOG
#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class ABossMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_BossMonster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
