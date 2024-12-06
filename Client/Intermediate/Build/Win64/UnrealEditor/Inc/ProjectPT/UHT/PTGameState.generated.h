// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/PTGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTGameState_generated_h
#error "PTGameState.generated.h already included, missing '#pragma once' in PTGameState.h"
#endif
#define PROJECTPT_PTGameState_generated_h

#define FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTGameState(); \
	friend struct Z_Construct_UClass_APTGameState_Statics; \
public: \
	DECLARE_CLASS(APTGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTGameState)


#define FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTGameState(APTGameState&&); \
	APTGameState(const APTGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APTGameState) \
	NO_API virtual ~APTGameState();


#define FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_13_PROLOG
#define FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_GameModes_PTGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
