// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
#ifdef PROJECTPT_PTGameplayAbility_RangeAttack_generated_h
#error "PTGameplayAbility_RangeAttack.generated.h already included, missing '#pragma once' in PTGameplayAbility_RangeAttack.h"
#endif
#define PROJECTPT_PTGameplayAbility_RangeAttack_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMuzzleName); \
	DECLARE_FUNCTION(execStartRangedWeaponTargeting);


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_CALLBACK_WRAPPERS
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility_RangeAttack(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility_RangeAttack, UPTGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility_RangeAttack)


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility_RangeAttack(UPTGameplayAbility_RangeAttack&&); \
	UPTGameplayAbility_RangeAttack(const UPTGameplayAbility_RangeAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility_RangeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility_RangeAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility_RangeAttack) \
	NO_API virtual ~UPTGameplayAbility_RangeAttack();


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_17_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_CALLBACK_WRAPPERS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility_RangeAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h


#define FOREACH_ENUM_EPTABILITYTARGETINGSOURCE(op) \
	op(EPTAbilityTargetingSource::CameraTowardsFocus) 

enum class EPTAbilityTargetingSource : uint8;
template<> struct TIsUEnumClass<EPTAbilityTargetingSource> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EPTAbilityTargetingSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
