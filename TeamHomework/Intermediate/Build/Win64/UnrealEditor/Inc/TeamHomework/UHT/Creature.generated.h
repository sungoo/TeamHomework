// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Creature.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef TEAMHOMEWORK_Creature_generated_h
#error "Creature.generated.h already included, missing '#pragma once' in Creature.h"
#endif
#define TEAMHOMEWORK_Creature_generated_h

#define FID_TeamHomework_Source_TeamHomework_Creature_h_16_DELEGATE \
TEAMHOMEWORK_API void FDelegate_AttackHitEvent_DelegateWrapper(const FMulticastScriptDelegate& Delegate_AttackHitEvent);


#define FID_TeamHomework_Source_TeamHomework_Creature_h_17_DELEGATE \
TEAMHOMEWORK_API void FDelegate_Death_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Death);


#define FID_TeamHomework_Source_TeamHomework_Creature_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackHit); \
	DECLARE_FUNCTION(execOnAttackEnded); \
	DECLARE_FUNCTION(execUnpossess); \
	DECLARE_FUNCTION(execDisable);


#define FID_TeamHomework_Source_TeamHomework_Creature_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACreature(); \
	friend struct Z_Construct_UClass_ACreature_Statics; \
public: \
	DECLARE_CLASS(ACreature, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(ACreature)


#define FID_TeamHomework_Source_TeamHomework_Creature_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACreature(ACreature&&); \
	ACreature(const ACreature&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreature); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreature); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACreature) \
	NO_API virtual ~ACreature();


#define FID_TeamHomework_Source_TeamHomework_Creature_h_20_PROLOG
#define FID_TeamHomework_Source_TeamHomework_Creature_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamHomework_Source_TeamHomework_Creature_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamHomework_Source_TeamHomework_Creature_h_23_INCLASS_NO_PURE_DECLS \
	FID_TeamHomework_Source_TeamHomework_Creature_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class ACreature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamHomework_Source_TeamHomework_Creature_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
