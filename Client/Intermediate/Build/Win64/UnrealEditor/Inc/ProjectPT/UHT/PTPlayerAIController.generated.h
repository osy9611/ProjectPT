// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PTPlayerAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPlayerAIController_generated_h
#error "PTPlayerAIController.generated.h already included, missing '#pragma once' in PTPlayerAIController.h"
#endif
#define PROJECTPT_PTPlayerAIController_generated_h

#define FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTPlayerAIController(); \
	friend struct Z_Construct_UClass_APTPlayerAIController_Statics; \
public: \
	DECLARE_CLASS(APTPlayerAIController, AModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTPlayerAIController)


#define FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTPlayerAIController(APTPlayerAIController&&); \
	APTPlayerAIController(const APTPlayerAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTPlayerAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTPlayerAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTPlayerAIController) \
	NO_API virtual ~APTPlayerAIController();


#define FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_14_PROLOG
#define FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTPlayerAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
