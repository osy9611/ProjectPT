// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/PTAbilitySet.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilitySet();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilitySet_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FPTAbilitySet_GameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility;
class UScriptStruct* FPTAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PTAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPTAbilitySet_GameplayAbility>()
{
	return FPTAbilitySet_GameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "PTAbilitySet_GameplayAbility" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "PTAbilitySet_GameplayAbility" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "PTAbilitySet_GameplayAbility" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"PTAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FPTAbilitySet_GameplayAbility),
	alignof(FPTAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility.InnerSingleton;
}
// End ScriptStruct FPTAbilitySet_GameplayAbility

// Begin ScriptStruct FPTAbilitySet_GrantedHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles;
class UScriptStruct* FPTAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PTAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPTAbilitySet_GrantedHandles>()
{
	return FPTAbilitySet_GrantedHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"PTAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FPTAbilitySet_GrantedHandles),
	alignof(FPTAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles.InnerSingleton;
}
// End ScriptStruct FPTAbilitySet_GrantedHandles

// Begin Class UPTAbilitySet
void UPTAbilitySet::StaticRegisterNativesUPTAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAbilitySet);
UClass* Z_Construct_UClass_UPTAbilitySet_NoRegister()
{
	return UPTAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UPTAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/PTAbilitySet.h" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "AbilitySystem/PTAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1512971894
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 1512971894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAbilitySet_Statics::ClassParams = {
	&UPTAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilitySet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAbilitySet()
{
	if (!Z_Registration_Info_UClass_UPTAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAbilitySet.OuterSingleton, Z_Construct_UClass_UPTAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAbilitySet.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAbilitySet>()
{
	return UPTAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAbilitySet);
UPTAbilitySet::~UPTAbilitySet() {}
// End Class UPTAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPTAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FPTAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("PTAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_PTAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTAbilitySet_GameplayAbility), 1512971894U) },
		{ FPTAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FPTAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("PTAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_PTAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTAbilitySet_GrantedHandles), 3153605528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAbilitySet, UPTAbilitySet::StaticClass, TEXT("UPTAbilitySet"), &Z_Registration_Info_UClass_UPTAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAbilitySet), 1475647774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_3668679588(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_AbilitySystem_PTAbilitySet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
