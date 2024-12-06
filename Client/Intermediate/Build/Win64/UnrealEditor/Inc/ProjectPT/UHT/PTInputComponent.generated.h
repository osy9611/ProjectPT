// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/PTInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTInputComponent_generated_h
#error "PTInputComponent.generated.h already included, missing '#pragma once' in PTInputComponent.h"
#endif
#define PROJECTPT_PTInputComponent_generated_h

#define FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTInputComponent(); \
	friend struct Z_Construct_UClass_UPTInputComponent_Statics; \
public: \
	DECLARE_CLASS(UPTInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTInputComponent)


#define FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTInputComponent(UPTInputComponent&&); \
	UPTInputComponent(const UPTInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTInputComponent) \
	NO_API virtual ~UPTInputComponent();


#define FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_15_PROLOG
#define FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
