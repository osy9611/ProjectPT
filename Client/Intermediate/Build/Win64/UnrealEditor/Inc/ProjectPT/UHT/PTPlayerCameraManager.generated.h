// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/PTPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPlayerCameraManager_generated_h
#error "PTPlayerCameraManager.generated.h already included, missing '#pragma once' in PTPlayerCameraManager.h"
#endif
#define PROJECTPT_PTPlayerCameraManager_generated_h

#define FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTPlayerCameraManager(); \
	friend struct Z_Construct_UClass_APTPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(APTPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTPlayerCameraManager)


#define FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTPlayerCameraManager(APTPlayerCameraManager&&); \
	APTPlayerCameraManager(const APTPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTPlayerCameraManager) \
	NO_API virtual ~APTPlayerCameraManager();


#define FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_16_PROLOG
#define FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_Camera_PTPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
