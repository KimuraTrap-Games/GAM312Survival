// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerChar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTSURVIVE_PlayerChar_generated_h
#error "PlayerChar.generated.h already included, missing '#pragma once' in PlayerChar.h"
#endif
#define PROJECTSURVIVE_PlayerChar_generated_h

#define FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGiveResource); \
	DECLARE_FUNCTION(execDecreaseStats); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetThirst); \
	DECLARE_FUNCTION(execSetHunger); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execFindObject); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerChar(); \
	friend struct Z_Construct_UClass_APlayerChar_Statics; \
public: \
	DECLARE_CLASS(APlayerChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectSurvive"), NO_API) \
	DECLARE_SERIALIZER(APlayerChar)


#define FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerChar(APlayerChar&&); \
	APlayerChar(const APlayerChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerChar) \
	NO_API virtual ~APlayerChar();


#define FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_11_PROLOG
#define FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTSURVIVE_API UClass* StaticClass<class APlayerChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_PlayerChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
