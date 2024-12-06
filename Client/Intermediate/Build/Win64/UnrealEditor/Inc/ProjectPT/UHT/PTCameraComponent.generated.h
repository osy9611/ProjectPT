// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/PTCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTCameraComponent_generated_h
#error "PTCameraComponent.generated.h already included, missing '#pragma once' in PTCameraComponent.h"
#endif
#define PROJECTPT_PTCameraComponent_generated_h

#define FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTCameraComponent(); \
	friend struct Z_Construct_UClass_UPTCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UPTCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTCameraComponent)


#define FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTCameraComponent(UPTCameraComponent&&); \
	UPTCameraComponent(const UPTCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTCameraComponent) \
	NO_API virtual ~UPTCameraComponent();


#define FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_19_PROLOG
#define FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
