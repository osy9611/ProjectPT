// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Data/EnumGenerateData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumGenerateData() {}

// Begin Cross Module References
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EItemType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EMonsterType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTElementType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ERedDotType();
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
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
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
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
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

// Begin Enum ECollisionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionType;
static UEnum* ECollisionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_ECollisionType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ECollisionType"));
	}
	return Z_Registration_Info_UEnum_ECollisionType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<ECollisionType>()
{
	return ECollisionType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_ECollisionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Comment", "//\xec\xba\xa1\xec\x8a\x90\n" },
		{ "Box.Name", "ECollisionType::Box" },
		{ "Box.ToolTip", "\xec\xba\xa1\xec\x8a\x90" },
		{ "Capsule.Comment", "//\xea\xb5\xac\xed\x98\x95\n" },
		{ "Capsule.Name", "ECollisionType::Capsule" },
		{ "Capsule.ToolTip", "\xea\xb5\xac\xed\x98\x95" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "RayTrace.Name", "ECollisionType::RayTrace" },
		{ "Sphere.Comment", "//\xeb\xa0\x88\xec\x9d\xb4\n" },
		{ "Sphere.Name", "ECollisionType::Sphere" },
		{ "Sphere.ToolTip", "\xeb\xa0\x88\xec\x9d\xb4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionType::RayTrace", (int64)ECollisionType::RayTrace },
		{ "ECollisionType::Sphere", (int64)ECollisionType::Sphere },
		{ "ECollisionType::Capsule", (int64)ECollisionType::Capsule },
		{ "ECollisionType::Box", (int64)ECollisionType::Box },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"ECollisionType",
	"ECollisionType",
	Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType()
{
	if (!Z_Registration_Info_UEnum_ECollisionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionType.InnerSingleton, Z_Construct_UEnum_ProjectPT_ECollisionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionType.InnerSingleton;
}
// End Enum ECollisionType

// Begin Enum ERedDotType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERedDotType;
static UEnum* ERedDotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERedDotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERedDotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_ERedDotType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ERedDotType"));
	}
	return Z_Registration_Info_UEnum_ERedDotType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<ERedDotType>()
{
	return ERedDotType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_ERedDotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Event.Comment", "//\xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac\n" },
		{ "Event.Name", "ERedDotType::Event" },
		{ "Event.ToolTip", "\xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac" },
		{ "Inventory.Comment", "//\xeb\xa9\x94\xec\x9d\xbc\n" },
		{ "Inventory.Name", "ERedDotType::Inventory" },
		{ "Inventory.ToolTip", "\xeb\xa9\x94\xec\x9d\xbc" },
		{ "Mail.Name", "ERedDotType::Mail" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERedDotType::Mail", (int64)ERedDotType::Mail },
		{ "ERedDotType::Inventory", (int64)ERedDotType::Inventory },
		{ "ERedDotType::Event", (int64)ERedDotType::Event },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"ERedDotType",
	"ERedDotType",
	Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_ERedDotType()
{
	if (!Z_Registration_Info_UEnum_ERedDotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERedDotType.InnerSingleton, Z_Construct_UEnum_ProjectPT_ERedDotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERedDotType.InnerSingleton;
}
// End Enum ERedDotType

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EItemType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Scroll.Comment", "//\xed\x8f\xac\xec\x85\x98\n" },
		{ "Scroll.Name", "EItemType::Scroll" },
		{ "Scroll.ToolTip", "\xed\x8f\xac\xec\x85\x98" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Potion", (int64)EItemType::Potion },
		{ "EItemType::Scroll", (int64)EItemType::Scroll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_ProjectPT_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTElementType_StaticEnum, TEXT("EPTElementType"), &Z_Registration_Info_UEnum_EPTElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142800082U) },
		{ EMonsterType_StaticEnum, TEXT("EMonsterType"), &Z_Registration_Info_UEnum_EMonsterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 815457047U) },
		{ ECollisionType_StaticEnum, TEXT("ECollisionType"), &Z_Registration_Info_UEnum_ECollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4236091643U) },
		{ ERedDotType_StaticEnum, TEXT("ERedDotType"), &Z_Registration_Info_UEnum_ERedDotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3203063460U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2880388580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_2394247799(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
