// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAI_AttributeSet_generated_h
#error "PTAI_AttributeSet.generated.h already included, missing '#pragma once' in PTAI_AttributeSet.h"
#endif
#define PROJECTPT_PTAI_AttributeSet_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAI_AttributeSet(); \
	friend struct Z_Construct_UClass_UPTAI_AttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPTAI_AttributeSet, UPTAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAI_AttributeSet)


#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTAI_AttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAI_AttributeSet(UPTAI_AttributeSet&&); \
	UPTAI_AttributeSet(const UPTAI_AttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAI_AttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAI_AttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAI_AttributeSet) \
	NO_API virtual ~UPTAI_AttributeSet();


#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_12_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAI_AttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
