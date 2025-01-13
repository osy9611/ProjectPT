// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTGameplayAbility_Projectile_generated_h
#error "PTGameplayAbility_Projectile.generated.h already included, missing '#pragma once' in PTGameplayAbility_Projectile.h"
#endif
#define PROJECTPT_PTGameplayAbility_Projectile_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execGetCoolTime);


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility_Projectile(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility_Projectile, UPTGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility_Projectile)


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility_Projectile(UPTGameplayAbility_Projectile&&); \
	UPTGameplayAbility_Projectile(const UPTGameplayAbility_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility_Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility_Projectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility_Projectile) \
	NO_API virtual ~UPTGameplayAbility_Projectile();


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_12_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
