// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAttributeSet_generated_h
#error "PTAttributeSet.generated.h already included, missing '#pragma once' in PTAttributeSet.h"
#endif
#define PROJECTPT_PTAttributeSet_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAttributeSet(); \
	friend struct Z_Construct_UClass_UPTAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPTAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAttributeSet)


#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAttributeSet(UPTAttributeSet&&); \
	UPTAttributeSet(const UPTAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAttributeSet) \
	NO_API virtual ~UPTAttributeSet();


#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_17_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
