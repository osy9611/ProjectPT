// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_Projectile.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_Projectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameplayAbility_Projectile Function CreateObject
struct Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Projectile, nullptr, "CreateObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_Projectile::execCreateObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateObject();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_Projectile Function CreateObject

// Begin Class UPTGameplayAbility_Projectile Function GetCoolTime
struct Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics
{
	struct PTGameplayAbility_Projectile_eventGetCoolTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_Projectile_eventGetCoolTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Projectile, nullptr, "GetCoolTime", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PTGameplayAbility_Projectile_eventGetCoolTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::PTGameplayAbility_Projectile_eventGetCoolTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_Projectile::execGetCoolTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCoolTime();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_Projectile Function GetCoolTime

// Begin Class UPTGameplayAbility_Projectile Function OnProjectileTargetDataReady
struct PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms
{
	AActor* Owner;
	FGameplayAbilityTargetDataHandle TargetData;
};
static FName NAME_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady = FName(TEXT("OnProjectileTargetDataReady"));
void UPTGameplayAbility_Projectile::OnProjectileTargetDataReady(AActor* Owner, FGameplayAbilityTargetDataHandle const& TargetData)
{
	PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms Parms;
	Parms.Owner=Owner;
	Parms.TargetData=TargetData;
	ProcessEvent(FindFunctionChecked(NAME_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady),&Parms);
}
struct Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Projectile, nullptr, "OnProjectileTargetDataReady", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::PropPointers), sizeof(PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(PTGameplayAbility_Projectile_eventOnProjectileTargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPTGameplayAbility_Projectile Function OnProjectileTargetDataReady

// Begin Class UPTGameplayAbility_Projectile
void UPTGameplayAbility_Projectile::StaticRegisterNativesUPTGameplayAbility_Projectile()
{
	UClass* Class = UPTGameplayAbility_Projectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateObject", &UPTGameplayAbility_Projectile::execCreateObject },
		{ "GetCoolTime", &UPTGameplayAbility_Projectile::execGetCoolTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_Projectile);
UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile_NoRegister()
{
	return UPTGameplayAbility_Projectile::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBPGameplayEffect_MetaData[] = {
		{ "Category", "UseBPGameplayEffect" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileObject_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseBPGameplayEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBPGameplayEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject, "CreateObject" }, // 3031371847
		{ &Z_Construct_UFunction_UPTGameplayAbility_Projectile_GetCoolTime, "GetCoolTime" }, // 221402816
		{ &Z_Construct_UFunction_UPTGameplayAbility_Projectile_OnProjectileTargetDataReady, "OnProjectileTargetDataReady" }, // 3196281746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_Projectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_UseBPGameplayEffect_SetBit(void* Obj)
{
	((UPTGameplayAbility_Projectile*)Obj)->UseBPGameplayEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_UseBPGameplayEffect = { "UseBPGameplayEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTGameplayAbility_Projectile), &Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_UseBPGameplayEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBPGameplayEffect_MetaData), NewProp_UseBPGameplayEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_ProjectileObject = { "ProjectileObject", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTGameplayAbility_Projectile, ProjectileObject), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileObject_MetaData), NewProp_ProjectileObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_UseBPGameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::NewProp_ProjectileObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::ClassParams = {
	&UPTGameplayAbility_Projectile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_Projectile>()
{
	return UPTGameplayAbility_Projectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_Projectile);
UPTGameplayAbility_Projectile::~UPTGameplayAbility_Projectile() {}
// End Class UPTGameplayAbility_Projectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_Projectile, UPTGameplayAbility_Projectile::StaticClass, TEXT("UPTGameplayAbility_Projectile"), &Z_Registration_Info_UClass_UPTGameplayAbility_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_Projectile), 69889127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_2340795757(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
