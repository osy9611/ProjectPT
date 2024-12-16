// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/PTAbilitySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAbilitySet_generated_h
#error "PTAbilitySet.generated.h already included, missing '#pragma once' in PTAbilitySet.h"
#endif
#define PROJECTPT_PTAbilitySet_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FPTAbilitySet_GameplayAbility>();

#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FPTAbilitySet_GrantedHandles>();

#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAbilitySet(); \
	friend struct Z_Construct_UClass_UPTAbilitySet_Statics; \
public: \
	DECLARE_CLASS(UPTAbilitySet, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAbilitySet)


#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAbilitySet(UPTAbilitySet&&); \
	UPTAbilitySet(const UPTAbilitySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAbilitySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAbilitySet) \
	NO_API virtual ~UPTAbilitySet();


#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_47_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_50_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAbilitySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_PTAbilitySet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
