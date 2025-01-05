// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PTPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPlayerController_generated_h
#error "PTPlayerController.generated.h already included, missing '#pragma once' in PTPlayerController.h"
#endif
#define PROJECTPT_PTPlayerController_generated_h

#define FID_Client_Source_ProjectPT_Player_PTPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTPlayerController(); \
	friend struct Z_Construct_UClass_APTPlayerController_Statics; \
public: \
	DECLARE_CLASS(APTPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTPlayerController)


#define FID_Client_Source_ProjectPT_Player_PTPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTPlayerController(APTPlayerController&&); \
	APTPlayerController(const APTPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTPlayerController) \
	NO_API virtual ~APTPlayerController();


#define FID_Client_Source_ProjectPT_Player_PTPlayerController_h_15_PROLOG
#define FID_Client_Source_ProjectPT_Player_PTPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Player_PTPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Player_PTPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Player_PTPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
