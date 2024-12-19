// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Table/GenerateTableData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateTableData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

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
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillRange_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skillRadius_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "SkillData" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_skillRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRange = { "skillRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillRange_MetaData), NewProp_skillRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRadius = { "skillRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, skillRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skillRadius_MetaData), NewProp_skillRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillData, CollisionType), Z_Construct_UEnum_ProjectPT_ECollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 150798757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillData_Statics::NewProp_skillRadius,
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
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkillData::StaticStruct, Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps, TEXT("SkillData"), &Z_Registration_Info_UScriptStruct_SkillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillData), 2513068451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_1666724002(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
