// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
#ifdef PROJECTPT_PTGameplayAbility_MeleeAttack_generated_h
#error "PTGameplayAbility_MeleeAttack.generated.h already included, missing '#pragma once' in PTGameplayAbility_MeleeAttack.h"
#endif
#define PROJECTPT_PTGameplayAbility_MeleeAttack_generated_h

#define FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTraceResultCallback);


#define FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility_MeleeAttack(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility_MeleeAttack, UPTGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility_MeleeAttack)


#define FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility_MeleeAttack(UPTGameplayAbility_MeleeAttack&&); \
	UPTGameplayAbility_MeleeAttack(const UPTGameplayAbility_MeleeAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility_MeleeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility_MeleeAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility_MeleeAttack) \
	NO_API virtual ~UPTGameplayAbility_MeleeAttack();


#define FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_12_PROLOG
#define FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility_MeleeAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
