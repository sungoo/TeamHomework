// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI_BaseDisplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMHOMEWORK_UI_BaseDisplay_generated_h
#error "UI_BaseDisplay.generated.h already included, missing '#pragma once' in UI_BaseDisplay.h"
#endif
#define TEAMHOMEWORK_UI_BaseDisplay_generated_h

#define FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_BaseDisplay(); \
	friend struct Z_Construct_UClass_UUI_BaseDisplay_Statics; \
public: \
	DECLARE_CLASS(UUI_BaseDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TeamHomework"), NO_API) \
	DECLARE_SERIALIZER(UUI_BaseDisplay)


#define FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_BaseDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUI_BaseDisplay(UUI_BaseDisplay&&); \
	UUI_BaseDisplay(const UUI_BaseDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_BaseDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_BaseDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_BaseDisplay) \
	NO_API virtual ~UUI_BaseDisplay();


#define FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_12_PROLOG
#define FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_15_INCLASS_NO_PURE_DECLS \
	FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMHOMEWORK_API UClass* StaticClass<class UUI_BaseDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamHomework_Source_TeamHomework_UI_BaseDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
