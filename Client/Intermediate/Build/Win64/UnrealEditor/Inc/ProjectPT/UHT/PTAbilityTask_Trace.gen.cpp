// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Task/PTAbilityTask_Trace.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAbilityTask_Trace() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilityTask_Trace();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilityTask_Trace_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister();
PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Delegate FTraceResultDelegate
struct Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics
{
	struct _Script_ProjectPT_eventTraceResultDelegate_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectPT_eventTraceResultDelegate_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDataHandle_MetaData), NewProp_TargetDataHandle_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::NewProp_TargetDataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectPT, nullptr, "TraceResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::_Script_ProjectPT_eventTraceResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::_Script_ProjectPT_eventTraceResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTraceResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& TraceResultDelegate, FGameplayAbilityTargetDataHandle const& TargetDataHandle)
{
	struct _Script_ProjectPT_eventTraceResultDelegate_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
	};
	_Script_ProjectPT_eventTraceResultDelegate_Parms Parms;
	Parms.TargetDataHandle=TargetDataHandle;
	TraceResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTraceResultDelegate

// Begin Class UPTAbilityTask_Trace Function CreateTask
struct Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics
{
	struct PTAbilityTask_Trace_eventCreateTask_Parms
	{
		UPTGameplayAbility* OwningAbility;
		TSubclassOf<APTGameplayAbilityTargetActor_Trace> TargetActorClass;
		UPTAbilityTask_Trace* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Task" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "WaitForTrace" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAbilityTask_Trace_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UPTGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_TargetActorClass = { "TargetActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAbilityTask_Trace_eventCreateTask_Parms, TargetActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAbilityTask_Trace_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UPTAbilityTask_Trace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_TargetActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAbilityTask_Trace, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PTAbilityTask_Trace_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::PTAbilityTask_Trace_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAbilityTask_Trace::execCreateTask)
{
	P_GET_OBJECT(UPTGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UClass,Z_Param_TargetActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPTAbilityTask_Trace**)Z_Param__Result=UPTAbilityTask_Trace::CreateTask(Z_Param_OwningAbility,Z_Param_TargetActorClass);
	P_NATIVE_END;
}
// End Class UPTAbilityTask_Trace Function CreateTask

// Begin Class UPTAbilityTask_Trace
void UPTAbilityTask_Trace::StaticRegisterNativesUPTAbilityTask_Trace()
{
	UClass* Class = UPTAbilityTask_Trace::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTask", &UPTAbilityTask_Trace::execCreateTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAbilityTask_Trace);
UClass* Z_Construct_UClass_UPTAbilityTask_Trace_NoRegister()
{
	return UPTAbilityTask_Trace::StaticClass();
}
struct Z_Construct_UClass_UPTAbilityTask_Trace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorClass_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Task/PTAbilityTask_Trace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedTargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAbilityTask_Trace_CreateTask, "CreateTask" }, // 1180893332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAbilityTask_Trace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAbilityTask_Trace, OnComplete), Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2851717404
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_TargetActorClass = { "TargetActorClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAbilityTask_Trace, TargetActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorClass_MetaData), NewProp_TargetActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_SpawnedTargetActor = { "SpawnedTargetActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAbilityTask_Trace, SpawnedTargetActor), Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedTargetActor_MetaData), NewProp_SpawnedTargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAbilityTask_Trace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_TargetActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAbilityTask_Trace_Statics::NewProp_SpawnedTargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilityTask_Trace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAbilityTask_Trace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilityTask_Trace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAbilityTask_Trace_Statics::ClassParams = {
	&UPTAbilityTask_Trace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTAbilityTask_Trace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilityTask_Trace_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilityTask_Trace_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAbilityTask_Trace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAbilityTask_Trace()
{
	if (!Z_Registration_Info_UClass_UPTAbilityTask_Trace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAbilityTask_Trace.OuterSingleton, Z_Construct_UClass_UPTAbilityTask_Trace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAbilityTask_Trace.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAbilityTask_Trace>()
{
	return UPTAbilityTask_Trace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAbilityTask_Trace);
UPTAbilityTask_Trace::~UPTAbilityTask_Trace() {}
// End Class UPTAbilityTask_Trace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAbilityTask_Trace, UPTAbilityTask_Trace::StaticClass, TEXT("UPTAbilityTask_Trace"), &Z_Registration_Info_UClass_UPTAbilityTask_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAbilityTask_Trace), 3478126574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_1947705118(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Task_PTAbilityTask_Trace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
