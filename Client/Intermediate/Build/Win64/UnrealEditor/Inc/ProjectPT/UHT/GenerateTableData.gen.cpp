// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Data/GenerateTableData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateTableData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSceneData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FMonsterData
static_assert(std::is_polymorphic<FMonsterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMonsterData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonsterData;
class UScriptStruct* FMonsterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonsterData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("MonsterData"));
	}
	return Z_Registration_Info_UScriptStruct_MonsterData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FMonsterData>()
{
	return FMonsterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMonsterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttackRange_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_MetaData[] = {
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAttackRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Skill1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonsterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, HP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, PeripheralVisionAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngleDegrees_MetaData), NewProp_PeripheralVisionAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_DefaultAttackRange = { "DefaultAttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, DefaultAttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttackRange_MetaData), NewProp_DefaultAttackRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_Skill1 = { "Skill1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterData, Skill1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill1_MetaData), NewProp_Skill1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_PeripheralVisionAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_DefaultAttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterData_Statics::NewProp_Skill1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonsterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MonsterData",
	Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::PropPointers),
	sizeof(FMonsterData),
	alignof(FMonsterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMonsterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMonsterData()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton, Z_Construct_UScriptStruct_FMonsterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MonsterData.InnerSingleton;
}
// End ScriptStruct FMonsterData

// Begin ScriptStruct FPlayerData
static_assert(std::is_polymorphic<FPlayerData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Default_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Q_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Skill_Default;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Skill_Q;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, HP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skill_Default = { "Skill_Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Skill_Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill_Default_MetaData), NewProp_Skill_Default_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skill_Q = { "Skill_Q", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Skill_Q), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skill_Q_MetaData), NewProp_Skill_Q_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skill_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skill_Q,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PlayerData",
	Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
	sizeof(FPlayerData),
	alignof(FPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton;
}
// End ScriptStruct FPlayerData

// Begin ScriptStruct FSceneData
static_assert(std::is_polymorphic<FSceneData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSceneData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneData;
class UScriptStruct* FSceneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("SceneData"));
	}
	return Z_Registration_Info_UScriptStruct_SceneData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FSceneData>()
{
	return FSceneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPath_MetaData[] = {
		{ "Category", "SceneData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BGMPath_MetaData[] = {
		{ "Category", "SceneData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BGMPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSceneData_Statics::NewProp_DataPath = { "DataPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSceneData, DataPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPath_MetaData), NewProp_DataPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSceneData_Statics::NewProp_BGMPath = { "BGMPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSceneData, BGMPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BGMPath_MetaData), NewProp_BGMPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneData_Statics::NewProp_DataPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneData_Statics::NewProp_BGMPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SceneData",
	Z_Construct_UScriptStruct_FSceneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneData_Statics::PropPointers),
	sizeof(FSceneData),
	alignof(FSceneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSceneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSceneData()
{
	if (!Z_Registration_Info_UScriptStruct_SceneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneData.InnerSingleton, Z_Construct_UScriptStruct_FSceneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SceneData.InnerSingleton;
}
// End ScriptStruct FSceneData

// Begin ScriptStruct FSkillData
static_assert(std::is_polymorphic<FSkillData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSkillData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillData;
class UScriptStruct* FSkillData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("SkillData"));
	}
	return Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FSkillData>()
{
	return FSkillData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkillData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDamage_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillRange_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillRadius_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillSpeed_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillCoolTime_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleName_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkillDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillCoolTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MuzzleName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillDamage = { "SkillDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, SkillDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDamage_MetaData), NewProp_SkillDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRange = { "skillRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillRange_MetaData), NewProp_skillRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRadius = { "skillRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillRadius_MetaData), NewProp_skillRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillSpeed = { "skillSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillSpeed_MetaData), NewProp_skillSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillCoolTime = { "skillCoolTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillCoolTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillCoolTime_MetaData), NewProp_skillCoolTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_MuzzleName = { "MuzzleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, MuzzleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleName_MetaData), NewProp_MuzzleName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, CollisionType), Z_Construct_UEnum_ProjectPT_ECollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 4236091643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_SkillDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillCoolTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_MuzzleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SkillData",
	Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers),
	sizeof(FSkillData),
	alignof(FSkillData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkillData()
{
	if (!Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton, Z_Construct_UScriptStruct_FSkillData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton;
}
// End ScriptStruct FSkillData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMonsterData::StaticStruct, Z_Construct_UScriptStruct_FMonsterData_Statics::NewStructOps, TEXT("MonsterData"), &Z_Registration_Info_UScriptStruct_MonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterData), 4054298180U) },
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 3805507274U) },
		{ FSceneData::StaticStruct, Z_Construct_UScriptStruct_FSceneData_Statics::NewStructOps, TEXT("SceneData"), &Z_Registration_Info_UScriptStruct_SceneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneData), 2898749887U) },
		{ FSkillData::StaticStruct, Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps, TEXT("SkillData"), &Z_Registration_Info_UScriptStruct_SkillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillData), 146149087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_1671601260(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
