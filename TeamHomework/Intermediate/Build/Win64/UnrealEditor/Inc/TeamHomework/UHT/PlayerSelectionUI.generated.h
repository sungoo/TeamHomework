// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerSelectionUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMHOMEWORK_PlayerSelectionUI_generated_h
#error "PlayerSelectionUI.generated.h already included, missing '#pragma once' in PlayerSelectionUI.h"
#endif
#define TEAMHOMEWORK_PlayerSelectionUI_generated_h

#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnArcherButtonClicked); \
	DECLARE_FUNCTION(execOnKnightButtonClicked);


#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerSelectionUI(); \
	friend struct Z_Construct_UClass_UPlayerSelectionUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerSelectionUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(UPlayerSelectionUI)


#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerSelectionUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerSelectionUI(UPlayerSelectionUI&&); \
	UPlayerSelectionUI(const UPlayerSelectionUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerSelectionUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerSelectionUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerSelectionUI) \
	NO_API virtual ~UPlayerSelectionUI();


#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_12_PROLOG
#define FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class UPlayerSelectionUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_TeamHomework_TeamHomework_Source_TeamHomework_PlayerSelectionUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
