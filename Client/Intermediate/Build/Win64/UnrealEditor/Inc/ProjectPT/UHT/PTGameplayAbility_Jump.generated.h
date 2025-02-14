// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility_Jump.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTGameplayAbility_Jump_generated_h
#error "PTGameplayAbility_Jump.generated.h already included, missing '#pragma once' in PTGameplayAbility_Jump.h"
#endif
#define PROJECTPT_PTGameplayAbility_Jump_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJumpEnd); \
	DECLARE_FUNCTION(execJumpStart);


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility_Jump(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_Jump_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility_Jump, UPTGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility_Jump)


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility_Jump(UPTGameplayAbility_Jump&&); \
	UPTGameplayAbility_Jump(const UPTGameplayAbility_Jump&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility_Jump); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility_Jump); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility_Jump) \
	NO_API virtual ~UPTGameplayAbility_Jump();


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_12_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility_Jump>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
