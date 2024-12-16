// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/PTGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTGameModeBase_generated_h
#error "PTGameModeBase.generated.h already included, missing '#pragma once' in PTGameModeBase.h"
#endif
#define PROJECTPT_PTGameModeBase_generated_h

#define FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTGameModeBase(); \
	friend struct Z_Construct_UClass_APTGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APTGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTGameModeBase)


#define FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTGameModeBase(APTGameModeBase&&); \
	APTGameModeBase(const APTGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APTGameModeBase) \
	NO_API virtual ~APTGameModeBase();


#define FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_11_PROLOG
#define FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
