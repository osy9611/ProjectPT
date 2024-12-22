// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/PTCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTCameraMode_generated_h
#error "PTCameraMode.generated.h already included, missing '#pragma once' in PTCameraMode.h"
#endif
#define PROJECTPT_PTCameraMode_generated_h

#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTCameraMode(); \
	friend struct Z_Construct_UClass_UPTCameraMode_Statics; \
public: \
	DECLARE_CLASS(UPTCameraMode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTCameraMode)


#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTCameraMode(UPTCameraMode&&); \
	UPTCameraMode(const UPTCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTCameraMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTCameraMode) \
	NO_API virtual ~UPTCameraMode();


#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_39_PROLOG
#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_42_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTCameraMode>();

#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTCameraModeStack(); \
	friend struct Z_Construct_UClass_UPTCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(UPTCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTCameraModeStack)


#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTCameraModeStack(UPTCameraModeStack&&); \
	UPTCameraModeStack(const UPTCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTCameraModeStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTCameraModeStack) \
	NO_API virtual ~UPTCameraModeStack();


#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_95_PROLOG
#define FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_98_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Camera_PTCameraMode_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Camera_PTCameraMode_h


#define FOREACH_ENUM_EPTCAMERAMODEBLENDFUNCTION(op) \
	op(EPTCameraModeBlendFunction::Linear) \
	op(EPTCameraModeBlendFunction::EaseIn) \
	op(EPTCameraModeBlendFunction::EaseOut) \
	op(EPTCameraModeBlendFunction::EaseInOut) \
	op(EPTCameraModeBlendFunction::COUNT) 

enum class EPTCameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<EPTCameraModeBlendFunction> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EPTCameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
