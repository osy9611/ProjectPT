// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "ProjectPT/Data/GenerateTableData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAttributeSet();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAttributeSet_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAttributeSet Function GetSkillData
struct Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics
{
	struct PTAttributeSet_eventGetSkillData_Parms
	{
		FGameplayTag GameplayTag;
		FSkillData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAttributeSet_eventGetSkillData_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAttributeSet_eventGetSkillData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(0, nullptr) }; // 146149087
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::NewProp_GameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAttributeSet, nullptr, "GetSkillData", nullptr, nullptr, Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PTAttributeSet_eventGetSkillData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::PTAttributeSet_eventGetSkillData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAttributeSet_GetSkillData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAttributeSet_GetSkillData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAttributeSet::execGetSkillData)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSkillData*)Z_Param__Result=P_THIS->GetSkillData(Z_Param_GameplayTag);
	P_NATIVE_END;
}
// End Class UPTAttributeSet Function GetSkillData

// Begin Class UPTAttributeSet
void UPTAttributeSet::StaticRegisterNativesUPTAttributeSet()
{
	UClass* Class = UPTAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSkillData", &UPTAttributeSet::execGetSkillData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAttributeSet);
UClass* Z_Construct_UClass_UPTAttributeSet_NoRegister()
{
	return UPTAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UPTAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Default_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Q_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Skill_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Skill_Q;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAttributeSet_GetSkillData, "GetSkillData" }, // 3314855732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Skill_Default = { "Skill_Default", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAttributeSet, Skill_Default), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill_Default_MetaData), NewProp_Skill_Default_MetaData) }; // 146149087
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Skill_Q = { "Skill_Q", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAttributeSet, Skill_Q), Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill_Q_MetaData), NewProp_Skill_Q_MetaData) }; // 146149087
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Skill_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAttributeSet_Statics::NewProp_Skill_Q,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAttributeSet_Statics::ClassParams = {
	&UPTAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAttributeSet()
{
	if (!Z_Registration_Info_UClass_UPTAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAttributeSet.OuterSingleton, Z_Construct_UClass_UPTAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAttributeSet.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAttributeSet>()
{
	return UPTAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAttributeSet);
UPTAttributeSet::~UPTAttributeSet() {}
// End Class UPTAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAttributeSet, UPTAttributeSet::StaticClass, TEXT("UPTAttributeSet"), &Z_Registration_Info_UClass_UPTAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAttributeSet), 2801035108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_2140227248(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
