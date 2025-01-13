// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTAICharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAICharacter_generated_h
#error "PTAICharacter.generated.h already included, missing '#pragma once' in PTAICharacter.h"
#endif
#define PROJECTPT_PTAICharacter_generated_h

#define FID_Client_Source_ProjectPT_Character_PTAICharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTAICharacter(); \
	friend struct Z_Construct_UClass_APTAICharacter_Statics; \
public: \
	DECLARE_CLASS(APTAICharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTAICharacter)


#define FID_Client_Source_ProjectPT_Character_PTAICharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APTAICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTAICharacter(APTAICharacter&&); \
	APTAICharacter(const APTAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTAICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTAICharacter) \
	NO_API virtual ~APTAICharacter();


#define FID_Client_Source_ProjectPT_Character_PTAICharacter_h_12_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTAICharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTAICharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTAICharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
