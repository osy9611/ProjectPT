// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_MeleeAttack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameplayAbility_MeleeAttack Function OnTraceResultCallback
struct Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics
{
	struct PTGameplayAbility_MeleeAttack_eventOnTraceResultCallback_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_MeleeAttack_eventOnTraceResultCallback_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDataHandle_MetaData), NewProp_TargetDataHandle_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::NewProp_TargetDataHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_MeleeAttack, nullptr, "OnTraceResultCallback", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PTGameplayAbility_MeleeAttack_eventOnTraceResultCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::PTGameplayAbility_MeleeAttack_eventOnTraceResultCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_MeleeAttack::execOnTraceResultCallback)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetDataHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTraceResultCallback(Z_Param_Out_TargetDataHandle);
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_MeleeAttack Function OnTraceResultCallback

// Begin Class UPTGameplayAbility_MeleeAttack
void UPTGameplayAbility_MeleeAttack::StaticRegisterNativesUPTGameplayAbility_MeleeAttack()
{
	UClass* Class = UPTGameplayAbility_MeleeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTraceResultCallback", &UPTGameplayAbility_MeleeAttack::execOnTraceResultCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_MeleeAttack);
UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_NoRegister()
{
	return UPTGameplayAbility_MeleeAttack::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_MeleeAttack_OnTraceResultCallback, "OnTraceResultCallback" }, // 1189993243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::ClassParams = {
	&UPTGameplayAbility_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_MeleeAttack>()
{
	return UPTGameplayAbility_MeleeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_MeleeAttack);
UPTGameplayAbility_MeleeAttack::~UPTGameplayAbility_MeleeAttack() {}
// End Class UPTGameplayAbility_MeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_MeleeAttack, UPTGameplayAbility_MeleeAttack::StaticClass, TEXT("UPTGameplayAbility_MeleeAttack"), &Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_MeleeAttack), 2405077553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_3393719213(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
