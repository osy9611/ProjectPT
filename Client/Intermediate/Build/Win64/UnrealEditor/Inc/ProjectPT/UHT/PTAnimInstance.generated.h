// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/PTAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAnimInstance_generated_h
#error "PTAnimInstance.generated.h already included, missing '#pragma once' in PTAnimInstance.h"
#endif
#define PROJECTPT_PTAnimInstance_generated_h

#define FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_CALLBACK_WRAPPERS
#define FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAnimInstance(); \
	friend struct Z_Construct_UClass_UPTAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPTAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAnimInstance)


#define FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAnimInstance(UPTAnimInstance&&); \
	UPTAnimInstance(const UPTAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAnimInstance) \
	NO_API virtual ~UPTAnimInstance();


#define FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_12_PROLOG
#define FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_CALLBACK_WRAPPERS \
	FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
