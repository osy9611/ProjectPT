// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTCharacter_generated_h
#error "PTCharacter.generated.h already included, missing '#pragma once' in PTCharacter.h"
#endif
#define PROJECTPT_PTCharacter_generated_h

#define FID_Client_Source_ProjectPT_Character_PTCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTCharacter(); \
	friend struct Z_Construct_UClass_APTCharacter_Statics; \
public: \
	DECLARE_CLASS(APTCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTCharacter)


#define FID_Client_Source_ProjectPT_Character_PTCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTCharacter(APTCharacter&&); \
	APTCharacter(const APTCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APTCharacter) \
	NO_API virtual ~APTCharacter();


#define FID_Client_Source_ProjectPT_Character_PTCharacter_h_15_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
