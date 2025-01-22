// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pool/ObjectPoolSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
class UNiagaraSystem;
#ifdef PROJECTPT_ObjectPoolSubsystem_generated_h
#error "ObjectPoolSubsystem.generated.h already included, missing '#pragma once' in ObjectPoolSubsystem.h"
#endif
#define PROJECTPT_ObjectPoolSubsystem_generated_h

#define FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReturnNiagaraSystem); \
	DECLARE_FUNCTION(execGetNiagaraSystem); \
	DECLARE_FUNCTION(execReturnActor); \
	DECLARE_FUNCTION(execGetActor);


#define FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolSubsystem(); \
	friend struct Z_Construct_UClass_UObjectPoolSubsystem_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolSubsystem)


#define FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectPoolSubsystem(UObjectPoolSubsystem&&); \
	UObjectPoolSubsystem(const UObjectPoolSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPoolSubsystem) \
	NO_API virtual ~UObjectPoolSubsystem();


#define FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_14_PROLOG
#define FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UObjectPoolSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
