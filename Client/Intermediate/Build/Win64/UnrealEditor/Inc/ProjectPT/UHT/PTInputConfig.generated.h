// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/PTInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTInputConfig_generated_h
#error "PTInputConfig.generated.h already included, missing '#pragma once' in PTInputConfig.h"
#endif
#define PROJECTPT_PTInputConfig_generated_h

#define FID_Client_Source_ProjectPT_Input_PTInputConfig_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPTInputAction_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FPTInputAction>();

#define FID_Client_Source_ProjectPT_Input_PTInputConfig_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTInputConfig(); \
	friend struct Z_Construct_UClass_UPTInputConfig_Statics; \
public: \
	DECLARE_CLASS(UPTInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTInputConfig)


#define FID_Client_Source_ProjectPT_Input_PTInputConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTInputConfig(UPTInputConfig&&); \
	UPTInputConfig(const UPTInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTInputConfig) \
	NO_API virtual ~UPTInputConfig();


#define FID_Client_Source_ProjectPT_Input_PTInputConfig_h_28_PROLOG
#define FID_Client_Source_ProjectPT_Input_PTInputConfig_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Input_PTInputConfig_h_31_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Input_PTInputConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Input_PTInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
