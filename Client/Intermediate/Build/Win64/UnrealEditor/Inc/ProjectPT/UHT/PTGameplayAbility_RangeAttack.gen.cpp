// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_RangeAttack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_RangeAttack();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_RangeAttack_NoRegister();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum EPTAbilityTargetingSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPTAbilityTargetingSource;
static UEnum* EPTAbilityTargetingSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityTargetingSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPTAbilityTargetingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EPTAbilityTargetingSource"));
	}
	return Z_Registration_Info_UEnum_EPTAbilityTargetingSource.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EPTAbilityTargetingSource>()
{
	return EPTAbilityTargetingSource_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraTowardsFocus.Name", "EPTAbilityTargetingSource::CameraTowardsFocus" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPTAbilityTargetingSource::CameraTowardsFocus", (int64)EPTAbilityTargetingSource::CameraTowardsFocus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EPTAbilityTargetingSource",
	"EPTAbilityTargetingSource",
	Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityTargetingSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPTAbilityTargetingSource.InnerSingleton, Z_Construct_UEnum_ProjectPT_EPTAbilityTargetingSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPTAbilityTargetingSource.InnerSingleton;
}
// End Enum EPTAbilityTargetingSource

// Begin Class UPTGameplayAbility_RangeAttack Function OnRangeWeaponTargetDataReady
struct PTGameplayAbility_RangeAttack_eventOnRangeWeaponTargetDataReady_Parms
{
	FGameplayAbilityTargetDataHandle TargetData;
};
static FName NAME_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady = FName(TEXT("OnRangeWeaponTargetDataReady"));
void UPTGameplayAbility_RangeAttack::OnRangeWeaponTargetDataReady(FGameplayAbilityTargetDataHandle const& TargetData)
{
	PTGameplayAbility_RangeAttack_eventOnRangeWeaponTargetDataReady_Parms Parms;
	Parms.TargetData=TargetData;
	ProcessEvent(FindFunctionChecked(NAME_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady),&Parms);
}
struct Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Called When Target Data Is Ready*/" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called When Target Data Is Ready" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_RangeAttack_eventOnRangeWeaponTargetDataReady_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_RangeAttack, nullptr, "OnRangeWeaponTargetDataReady", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::PropPointers), sizeof(PTGameplayAbility_RangeAttack_eventOnRangeWeaponTargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(PTGameplayAbility_RangeAttack_eventOnRangeWeaponTargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPTGameplayAbility_RangeAttack Function OnRangeWeaponTargetDataReady

// Begin Class UPTGameplayAbility_RangeAttack Function StartRangedWeaponTargeting
struct Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_RangeAttack, nullptr, "StartRangedWeaponTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_RangeAttack::execStartRangedWeaponTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRangedWeaponTargeting();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_RangeAttack Function StartRangedWeaponTargeting

// Begin Class UPTGameplayAbility_RangeAttack
void UPTGameplayAbility_RangeAttack::StaticRegisterNativesUPTGameplayAbility_RangeAttack()
{
	UClass* Class = UPTGameplayAbility_RangeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartRangedWeaponTargeting", &UPTGameplayAbility_RangeAttack::execStartRangedWeaponTargeting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_RangeAttack);
UClass* Z_Construct_UClass_UPTGameplayAbility_RangeAttack_NoRegister()
{
	return UPTGameplayAbility_RangeAttack::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_RangeAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_OnRangeWeaponTargetDataReady, "OnRangeWeaponTargetDataReady" }, // 2210258296
		{ &Z_Construct_UFunction_UPTGameplayAbility_RangeAttack_StartRangedWeaponTargeting, "StartRangedWeaponTargeting" }, // 3857365266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_RangeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::ClassParams = {
	&UPTGameplayAbility_RangeAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_RangeAttack()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_RangeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_RangeAttack.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_RangeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_RangeAttack.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_RangeAttack>()
{
	return UPTGameplayAbility_RangeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_RangeAttack);
UPTGameplayAbility_RangeAttack::~UPTGameplayAbility_RangeAttack() {}
// End Class UPTGameplayAbility_RangeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTAbilityTargetingSource_StaticEnum, TEXT("EPTAbilityTargetingSource"), &Z_Registration_Info_UEnum_EPTAbilityTargetingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2516120183U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_RangeAttack, UPTGameplayAbility_RangeAttack::StaticClass, TEXT("UPTGameplayAbility_RangeAttack"), &Z_Registration_Info_UClass_UPTGameplayAbility_RangeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_RangeAttack), 471183110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_2424755873(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_RangeAttack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
