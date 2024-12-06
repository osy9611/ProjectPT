// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PTPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPlayerState_generated_h
#error "PTPlayerState.generated.h already included, missing '#pragma once' in PTPlayerState.h"
#endif
#define PROJECTPT_PTPlayerState_generated_h

#define FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTPlayerState(); \
	friend struct Z_Construct_UClass_APTPlayerState_Statics; \
public: \
	DECLARE_CLASS(APTPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTPlayerState)


#define FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTPlayerState(APTPlayerState&&); \
	APTPlayerState(const APTPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTPlayerState) \
	NO_API virtual ~APTPlayerState();


#define FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_15_PROLOG
#define FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_Player_PTPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
