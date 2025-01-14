// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/PTPlayerStart.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPlayerStart_generated_h
#error "PTPlayerStart.generated.h already included, missing '#pragma once' in PTPlayerStart.h"
#endif
#define PROJECTPT_PTPlayerStart_generated_h

#define FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTPlayerStart(); \
	friend struct Z_Construct_UClass_APTPlayerStart_Statics; \
public: \
	DECLARE_CLASS(APTPlayerStart, APlayerStart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTPlayerStart)


#define FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTPlayerStart(APTPlayerStart&&); \
	APTPlayerStart(const APTPlayerStart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTPlayerStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTPlayerStart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APTPlayerStart) \
	NO_API virtual ~APTPlayerStart();


#define FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_10_PROLOG
#define FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_13_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTPlayerStart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Object_PTPlayerStart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
