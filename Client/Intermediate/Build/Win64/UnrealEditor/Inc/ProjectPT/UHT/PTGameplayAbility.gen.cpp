// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum EPTAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPTAbilityActivationPolicy;
static UEnum* EPTAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EPTAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EPTAbilityActivationPolicy>()
{
	return EPTAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "OnInputTirggered.Name", "EPTAbilityActivationPolicy::OnInputTirggered" },
		{ "OnSpawn.Name", "EPTAbilityActivationPolicy::OnSpawn" },
		{ "WhileInputActive.Name", "EPTAbilityActivationPolicy::WhileInputActive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPTAbilityActivationPolicy::OnInputTirggered", (int64)EPTAbilityActivationPolicy::OnInputTirggered },
		{ "EPTAbilityActivationPolicy::WhileInputActive", (int64)EPTAbilityActivationPolicy::WhileInputActive },
		{ "EPTAbilityActivationPolicy::OnSpawn", (int64)EPTAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EPTAbilityActivationPolicy",
	"EPTAbilityActivationPolicy",
	Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton;
}
// End Enum EPTAbilityActivationPolicy

// Begin Class UPTGameplayAbility
void UPTGameplayAbility::StaticRegisterNativesUPTGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility);
UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister()
{
	return UPTGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "PT|AbilityActivation" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTGameplayAbility, ActivationPolicy), Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 2255047541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_Statics::ClassParams = {
	&UPTGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility>()
{
	return UPTGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility);
UPTGameplayAbility::~UPTGameplayAbility() {}
// End Class UPTGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTAbilityActivationPolicy_StaticEnum, TEXT("EPTAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EPTAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2255047541U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility, UPTGameplayAbility::StaticClass, TEXT("UPTGameplayAbility"), &Z_Registration_Info_UClass_UPTGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility), 2214406434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_3147840696(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
