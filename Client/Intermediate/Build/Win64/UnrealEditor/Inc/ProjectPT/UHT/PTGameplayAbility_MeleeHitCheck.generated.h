// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility_MeleeHitCheck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
#ifdef PROJECTPT_PTGameplayAbility_MeleeHitCheck_generated_h
#error "PTGameplayAbility_MeleeHitCheck.generated.h already included, missing '#pragma once' in PTGameplayAbility_MeleeHitCheck.h"
#endif
#define PROJECTPT_PTGameplayAbility_MeleeHitCheck_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTraceResultCallback);


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility_MeleeHitCheck(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_MeleeHitCheck_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility_MeleeHitCheck, UPTGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility_MeleeHitCheck)


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility_MeleeHitCheck(UPTGameplayAbility_MeleeHitCheck&&); \
	UPTGameplayAbility_MeleeHitCheck(const UPTGameplayAbility_MeleeHitCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility_MeleeHitCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility_MeleeHitCheck); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility_MeleeHitCheck) \
	NO_API virtual ~UPTGameplayAbility_MeleeHitCheck();


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_12_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility_MeleeHitCheck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeHitCheck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
