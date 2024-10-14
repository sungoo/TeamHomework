// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MyNPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAMHOMEWORK_MyNPC_generated_h
#error "MyNPC.generated.h already included, missing '#pragma once' in MyNPC.h"
#endif
#define TEAMHOMEWORK_MyNPC_generated_h

#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCharacterOverlapped); \
	DECLARE_FUNCTION(execOnMyCharacterOverlapEnd); \
	DECLARE_FUNCTION(execOnMyCharacterOverlap);


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNPC(); \
	friend struct Z_Construct_UClass_AMyNPC_Statics; \
public: \
	DECLARE_CLASS(AMyNPC, ACreature, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(AMyNPC)


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyNPC(AMyNPC&&); \
	AMyNPC(const AMyNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyNPC) \
	NO_API virtual ~AMyNPC();


#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_12_PROLOG
#define FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class AMyNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Characters_MyNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
