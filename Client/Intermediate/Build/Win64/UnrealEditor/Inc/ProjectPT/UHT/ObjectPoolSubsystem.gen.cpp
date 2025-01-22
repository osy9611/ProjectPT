// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectPoolSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_NiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UObjectPoolSubsystem Function GetActor
struct Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics
{
	struct ObjectPoolSubsystem_eventGetActor_Parms
	{
		TSubclassOf<AActor> ClassType;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventGetActor_Parms, ClassType), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::NewProp_ClassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolSubsystem, nullptr, "GetActor", nullptr, nullptr, Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::ObjectPoolSubsystem_eventGetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::ObjectPoolSubsystem_eventGetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectPoolSubsystem_GetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectPoolSubsystem_GetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectPoolSubsystem::execGetActor)
{
	P_GET_OBJECT(UClass,Z_Param_ClassType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActor(Z_Param_ClassType);
	P_NATIVE_END;
}
// End Class UObjectPoolSubsystem Function GetActor

// Begin Class UObjectPoolSubsystem Function GetNiagaraSystem
struct Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics
{
	struct ObjectPoolSubsystem_eventGetNiagaraSystem_Parms
	{
		UNiagaraSystem* NiagaraSystem;
		AActor* OwnerActor;
		bool IsActive;
		UNiagaraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventGetNiagaraSystem_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventGetNiagaraSystem_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((ObjectPoolSubsystem_eventGetNiagaraSystem_Parms*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectPoolSubsystem_eventGetNiagaraSystem_Parms), &Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventGetNiagaraSystem_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_OwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_IsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolSubsystem, nullptr, "GetNiagaraSystem", nullptr, nullptr, Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::ObjectPoolSubsystem_eventGetNiagaraSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::ObjectPoolSubsystem_eventGetNiagaraSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectPoolSubsystem::execGetNiagaraSystem)
{
	P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem);
	P_GET_OBJECT(AActor,Z_Param_OwnerActor);
	P_GET_UBOOL(Z_Param_IsActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetNiagaraSystem(Z_Param_NiagaraSystem,Z_Param_OwnerActor,Z_Param_IsActive);
	P_NATIVE_END;
}
// End Class UObjectPoolSubsystem Function GetNiagaraSystem

// Begin Class UObjectPoolSubsystem Function ReturnActor
struct Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics
{
	struct ObjectPoolSubsystem_eventReturnActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventReturnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolSubsystem, nullptr, "ReturnActor", nullptr, nullptr, Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::ObjectPoolSubsystem_eventReturnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::ObjectPoolSubsystem_eventReturnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectPoolSubsystem::execReturnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UObjectPoolSubsystem Function ReturnActor

// Begin Class UObjectPoolSubsystem Function ReturnNiagaraSystem
struct Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics
{
	struct ObjectPoolSubsystem_eventReturnNiagaraSystem_Parms
	{
		UNiagaraComponent* NiagaraComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolSubsystem_eventReturnNiagaraSystem_Parms, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComp_MetaData), NewProp_NiagaraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::NewProp_NiagaraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolSubsystem, nullptr, "ReturnNiagaraSystem", nullptr, nullptr, Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::ObjectPoolSubsystem_eventReturnNiagaraSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::ObjectPoolSubsystem_eventReturnNiagaraSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectPoolSubsystem::execReturnNiagaraSystem)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnNiagaraSystem(Z_Param_NiagaraComp);
	P_NATIVE_END;
}
// End Class UObjectPoolSubsystem Function ReturnNiagaraSystem

// Begin Class UObjectPoolSubsystem
void UObjectPoolSubsystem::StaticRegisterNativesUObjectPoolSubsystem()
{
	UClass* Class = UObjectPoolSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActor", &UObjectPoolSubsystem::execGetActor },
		{ "GetNiagaraSystem", &UObjectPoolSubsystem::execGetNiagaraSystem },
		{ "ReturnActor", &UObjectPoolSubsystem::execReturnActor },
		{ "ReturnNiagaraSystem", &UObjectPoolSubsystem::execReturnNiagaraSystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPoolSubsystem);
UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister()
{
	return UObjectPoolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UObjectPoolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pool/ObjectPoolSubsystem.h" },
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPools_MetaData[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraPools_MetaData[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPools_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectPools;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPoolSubsystem_GetActor, "GetActor" }, // 612503087
		{ &Z_Construct_UFunction_UObjectPoolSubsystem_GetNiagaraSystem, "GetNiagaraSystem" }, // 115354367
		{ &Z_Construct_UFunction_UObjectPoolSubsystem_ReturnActor, "ReturnActor" }, // 1463836536
		{ &Z_Construct_UFunction_UObjectPoolSubsystem_ReturnNiagaraSystem, "ReturnNiagaraSystem" }, // 1365433571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_ValueProp = { "ObjectPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPoolable_Actor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_Key_KeyProp = { "ObjectPools_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools = { "ObjectPools", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSubsystem, ObjectPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPools_MetaData), NewProp_ObjectPools_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_NiagaraPools = { "NiagaraPools", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSubsystem, NiagaraPools), Z_Construct_UClass_UPoolable_NiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraPools_MetaData), NewProp_NiagaraPools_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_NiagaraPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams = {
	&UObjectPoolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolSubsystem()
{
	if (!Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton, Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UObjectPoolSubsystem>()
{
	return UObjectPoolSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolSubsystem);
UObjectPoolSubsystem::~UObjectPoolSubsystem() {}
// End Class UObjectPoolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolSubsystem, UObjectPoolSubsystem::StaticClass, TEXT("UObjectPoolSubsystem"), &Z_Registration_Info_UClass_UObjectPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolSubsystem), 45500188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_1008651715(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
