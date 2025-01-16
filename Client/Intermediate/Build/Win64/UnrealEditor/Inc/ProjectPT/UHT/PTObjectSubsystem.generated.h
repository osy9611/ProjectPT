// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/PTObjectSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayAbilityTargetDataHandle;
#ifdef PROJECTPT_PTObjectSubsystem_generated_h
#error "PTObjectSubsystem.generated.h already included, missing '#pragma once' in PTObjectSubsystem.h"
#endif
#define PROJECTPT_PTObjectSubsystem_generated_h

#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStartList_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FPlayerStartList>();

#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execApplyActorsDamage);


#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTObjectSubsystem(); \
	friend struct Z_Construct_UClass_UPTObjectSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPTObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTObjectSubsystem)


#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTObjectSubsystem(UPTObjectSubsystem&&); \
	UPTObjectSubsystem(const UPTObjectSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTObjectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTObjectSubsystem) \
	NO_API virtual ~UPTObjectSubsystem();


#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_25_PROLOG
#define FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTObjectSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
