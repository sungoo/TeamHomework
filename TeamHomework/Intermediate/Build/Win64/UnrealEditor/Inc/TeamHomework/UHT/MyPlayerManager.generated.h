// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMHOMEWORK_MyPlayerManager_generated_h
#error "MyPlayerManager.generated.h already included, missing '#pragma once' in MyPlayerManager.h"
#endif
#define TEAMHOMEWORK_MyPlayerManager_generated_h

#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerManager(); \
	friend struct Z_Construct_UClass_AMyPlayerManager_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerManager)


#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerManager(AMyPlayerManager&&); \
	AMyPlayerManager(const AMyPlayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerManager) \
	NO_API virtual ~AMyPlayerManager();


#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_16_PROLOG
#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class AMyPlayerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_MyPlayerManager_h


#define FOREACH_ENUM_EPLAYERTYPE(op) \
	op(EPlayerType::Knight) \
	op(EPlayerType::Archer) 

enum class EPlayerType : uint8;
template<> struct TIsUEnumClass<EPlayerType> { enum { Value = true }; };
template<> TEAMHOMEWORK_API UEnum* StaticEnum<EPlayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
