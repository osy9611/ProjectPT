// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PTGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPTCameraMode;
#ifdef PROJECTPT_PTGameplayAbility_generated_h
#error "PTGameplayAbility.generated.h already included, missing '#pragma once' in PTGameplayAbility.h"
#endif
#define PROJECTPT_PTGameplayAbility_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode);


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameplayAbility(); \
	friend struct Z_Construct_UClass_UPTGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UPTGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameplayAbility)


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameplayAbility(UPTGameplayAbility&&); \
	UPTGameplayAbility(const UPTGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameplayAbility) \
	NO_API virtual ~UPTGameplayAbility();


#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_27_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h


#define FOREACH_ENUM_EPTABILITYACTIVATIONPOLICY(op) \
	op(EPTAbilityActivationPolicy::OnInputTirggered) \
	op(EPTAbilityActivationPolicy::WhileInputActive) \
	op(EPTAbilityActivationPolicy::OnSpawn) 

enum class EPTAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EPTAbilityActivationPolicy> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EPTAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
