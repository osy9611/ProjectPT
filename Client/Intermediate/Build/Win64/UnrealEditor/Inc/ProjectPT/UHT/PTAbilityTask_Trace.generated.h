// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Task/PTAbilityTask_Trace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APTGameplayAbilityTargetActor_Trace;
class UPTAbilityTask_Trace;
class UPTGameplayAbility;
struct FGameplayAbilityTargetDataHandle;
#ifdef PROJECTPT_PTAbilityTask_Trace_generated_h
#error "PTAbilityTask_Trace.generated.h already included, missing '#pragma once' in PTAbilityTask_Trace.h"
#endif
#define PROJECTPT_PTAbilityTask_Trace_generated_h

#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_12_DELEGATE \
PROJECTPT_API void FTraceResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& TraceResultDelegate, FGameplayAbilityTargetDataHandle const& TargetDataHandle);


#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateTask);


#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAbilityTask_Trace(); \
	friend struct Z_Construct_UClass_UPTAbilityTask_Trace_Statics; \
public: \
	DECLARE_CLASS(UPTAbilityTask_Trace, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAbilityTask_Trace)


#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAbilityTask_Trace(UPTAbilityTask_Trace&&); \
	UPTAbilityTask_Trace(const UPTAbilityTask_Trace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAbilityTask_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAbilityTask_Trace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAbilityTask_Trace) \
	NO_API virtual ~UPTAbilityTask_Trace();


#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_17_PROLOG
#define FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAbilityTask_Trace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
