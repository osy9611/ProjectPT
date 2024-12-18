// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Table/EnumGenerateData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumGenerateData() {}

// Begin Cross Module References
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EMonsterType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTElementType();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum EPTElementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPTElementType;
static UEnum* EPTElementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPTElementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPTElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EPTElementType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EPTElementType"));
	}
	return Z_Registration_Info_UEnum_EPTElementType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EPTElementType>()
{
	return EPTElementType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EPTElementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ELEMENTAL_TYPE.Comment", "//\xed\x99\x94\xec\x97\xbc\n" },
		{ "ELEMENTAL_TYPE.Name", "EPTElementType::ELEMENTAL_TYPE" },
		{ "ELEMENTAL_TYPE.ToolTip", "\xed\x99\x94\xec\x97\xbc" },
		{ "FIGHTING_TYPE.Comment", "//\xeb\x82\x98\xeb\xac\xb4\n" },
		{ "FIGHTING_TYPE.Name", "EPTElementType::FIGHTING_TYPE" },
		{ "FIGHTING_TYPE.ToolTip", "\xeb\x82\x98\xeb\xac\xb4" },
		{ "ILLUSION_TYPE.Comment", "//\xeb\xb0\x94\xeb\x8b\xa4\n" },
		{ "ILLUSION_TYPE.Name", "EPTElementType::ILLUSION_TYPE" },
		{ "ILLUSION_TYPE.ToolTip", "\xeb\xb0\x94\xeb\x8b\xa4" },
		{ "ILLUSION_TYPE2.Comment", "//\xec\x96\xb4\xeb\x91\xa0\n" },
		{ "ILLUSION_TYPE2.Name", "EPTElementType::ILLUSION_TYPE2" },
		{ "ILLUSION_TYPE2.ToolTip", "\xec\x96\xb4\xeb\x91\xa0" },
		{ "ModuleRelativePath", "Table/EnumGenerateData.h" },
		{ "NONE.Name", "EPTElementType::NONE" },
		{ "SUPERHUMAN_TYPE.Name", "EPTElementType::SUPERHUMAN_TYPE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPTElementType::NONE", (int64)EPTElementType::NONE },
		{ "EPTElementType::SUPERHUMAN_TYPE", (int64)EPTElementType::SUPERHUMAN_TYPE },
		{ "EPTElementType::ELEMENTAL_TYPE", (int64)EPTElementType::ELEMENTAL_TYPE },
		{ "EPTElementType::FIGHTING_TYPE", (int64)EPTElementType::FIGHTING_TYPE },
		{ "EPTElementType::ILLUSION_TYPE", (int64)EPTElementType::ILLUSION_TYPE },
		{ "EPTElementType::ILLUSION_TYPE2", (int64)EPTElementType::ILLUSION_TYPE2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EPTElementType",
	"EPTElementType",
	Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EPTElementType()
{
	if (!Z_Registration_Info_UEnum_EPTElementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPTElementType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EPTElementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPTElementType.InnerSingleton;
}
// End Enum EPTElementType

// Begin Enum EMonsterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMonsterType;
static UEnum* EMonsterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMonsterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMonsterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EMonsterType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EMonsterType"));
	}
	return Z_Registration_Info_UEnum_EMonsterType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EMonsterType>()
{
	return EMonsterType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EMonsterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOSS.Comment", "//\xec\x9d\xbc\xeb\xb0\x98\n" },
		{ "BOSS.Name", "EMonsterType::BOSS" },
		{ "BOSS.ToolTip", "\xec\x9d\xbc\xeb\xb0\x98" },
		{ "ModuleRelativePath", "Table/EnumGenerateData.h" },
		{ "NORMAL.Name", "EMonsterType::NORMAL" },
		{ "UNIQUE.Comment", "//\xeb\xb3\xb4\xec\x8a\xa4\n" },
		{ "UNIQUE.Name", "EMonsterType::UNIQUE" },
		{ "UNIQUE.ToolTip", "\xeb\xb3\xb4\xec\x8a\xa4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMonsterType::NORMAL", (int64)EMonsterType::NORMAL },
		{ "EMonsterType::BOSS", (int64)EMonsterType::BOSS },
		{ "EMonsterType::UNIQUE", (int64)EMonsterType::UNIQUE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EMonsterType",
	"EMonsterType",
	Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EMonsterType()
{
	if (!Z_Registration_Info_UEnum_EMonsterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMonsterType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EMonsterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMonsterType.InnerSingleton;
}
// End Enum EMonsterType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_EnumGenerateData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTElementType_StaticEnum, TEXT("EPTElementType"), &Z_Registration_Info_UEnum_EPTElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1995855187U) },
		{ EMonsterType_StaticEnum, TEXT("EMonsterType"), &Z_Registration_Info_UEnum_EMonsterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1246490867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_EnumGenerateData_h_523941014(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_EnumGenerateData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_EnumGenerateData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
