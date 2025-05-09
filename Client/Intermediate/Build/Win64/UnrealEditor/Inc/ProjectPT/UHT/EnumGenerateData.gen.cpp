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
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EBindType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EContentsType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECurrencyType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EEventOpenType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EGrade();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EInteractionType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EItemType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EMailType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EMonsterType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTElementType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ERedDotType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EShopType();
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
		{ "All.Name", "EItemType::All" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "Potion.Comment", "//\xec\xa0\x84\xeb\xb6\x80\n" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Potion.ToolTip", "\xec\xa0\x84\xeb\xb6\x80" },
		{ "Scroll.Comment", "//\xed\x8f\xac\xec\x85\x98\n" },
		{ "Scroll.Name", "EItemType::Scroll" },
		{ "Scroll.ToolTip", "\xed\x8f\xac\xec\x85\x98" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::All", (int64)EItemType::All },
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

// Begin Enum EGrade
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrade;
static UEnum* EGrade_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrade.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrade.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EGrade, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EGrade"));
	}
	return Z_Registration_Info_UEnum_EGrade.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EGrade>()
{
	return EGrade_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EGrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Legend.Comment", "//\xeb\xa0\x88\xec\x96\xb4\n" },
		{ "Legend.Name", "EGrade::Legend" },
		{ "Legend.ToolTip", "\xeb\xa0\x88\xec\x96\xb4" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "Normal.Name", "EGrade::Normal" },
		{ "Rare.Comment", "//\xeb\x85\xb8\xeb\xa9\x80\n" },
		{ "Rare.Name", "EGrade::Rare" },
		{ "Rare.ToolTip", "\xeb\x85\xb8\xeb\xa9\x80" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrade::Normal", (int64)EGrade::Normal },
		{ "EGrade::Rare", (int64)EGrade::Rare },
		{ "EGrade::Legend", (int64)EGrade::Legend },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EGrade_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EGrade",
	"EGrade",
	Z_Construct_UEnum_ProjectPT_EGrade_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EGrade_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EGrade_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EGrade_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EGrade()
{
	if (!Z_Registration_Info_UEnum_EGrade.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrade.InnerSingleton, Z_Construct_UEnum_ProjectPT_EGrade_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrade.InnerSingleton;
}
// End Enum EGrade

// Begin Enum EBindType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBindType;
static UEnum* EBindType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBindType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EBindType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EBindType"));
	}
	return Z_Registration_Info_UEnum_EBindType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EBindType>()
{
	return EBindType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EBindType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Account.Comment", "//\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\n" },
		{ "Account.Name", "EBindType::Account" },
		{ "Account.ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0" },
		{ "BlueprintType", "true" },
		{ "Character.Name", "EBindType::Character" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBindType::Character", (int64)EBindType::Character },
		{ "EBindType::Account", (int64)EBindType::Account },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EBindType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EBindType",
	"EBindType",
	Z_Construct_UEnum_ProjectPT_EBindType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EBindType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EBindType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EBindType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EBindType()
{
	if (!Z_Registration_Info_UEnum_EBindType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBindType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EBindType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBindType.InnerSingleton;
}
// End Enum EBindType

// Begin Enum EMailType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMailType;
static UEnum* EMailType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMailType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMailType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EMailType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EMailType"));
	}
	return Z_Registration_Info_UEnum_EMailType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EMailType>()
{
	return EMailType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EMailType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "ServerMail.Name", "EMailType::ServerMail" },
		{ "System.Comment", "//\xec\x84\x9c\xeb\xb2\x84 \xeb\xa9\x94\xec\x9d\xbc\n" },
		{ "System.Name", "EMailType::System" },
		{ "System.ToolTip", "\xec\x84\x9c\xeb\xb2\x84 \xeb\xa9\x94\xec\x9d\xbc" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMailType::ServerMail", (int64)EMailType::ServerMail },
		{ "EMailType::System", (int64)EMailType::System },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EMailType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EMailType",
	"EMailType",
	Z_Construct_UEnum_ProjectPT_EMailType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EMailType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EMailType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EMailType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EMailType()
{
	if (!Z_Registration_Info_UEnum_EMailType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMailType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EMailType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMailType.InnerSingleton;
}
// End Enum EMailType

// Begin Enum EEventOpenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEventOpenType;
static UEnum* EEventOpenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEventOpenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEventOpenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EEventOpenType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EEventOpenType"));
	}
	return Z_Registration_Info_UEnum_EEventOpenType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EEventOpenType>()
{
	return EEventOpenType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ConentsOpen.Comment", "//\xec\x97\x86\xec\x9d\x8c\n" },
		{ "ConentsOpen.Name", "EEventOpenType::ConentsOpen" },
		{ "ConentsOpen.ToolTip", "\xec\x97\x86\xec\x9d\x8c" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "NONE.Name", "EEventOpenType::NONE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEventOpenType::NONE", (int64)EEventOpenType::NONE },
		{ "EEventOpenType::ConentsOpen", (int64)EEventOpenType::ConentsOpen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EEventOpenType",
	"EEventOpenType",
	Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EEventOpenType()
{
	if (!Z_Registration_Info_UEnum_EEventOpenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEventOpenType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EEventOpenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEventOpenType.InnerSingleton;
}
// End Enum EEventOpenType

// Begin Enum EContentsType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentsType;
static UEnum* EContentsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EContentsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EContentsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EContentsType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EContentsType"));
	}
	return Z_Registration_Info_UEnum_EContentsType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EContentsType>()
{
	return EContentsType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EContentsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.Name", "EContentsType::Battle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EContentsType::Battle", (int64)EContentsType::Battle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EContentsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EContentsType",
	"EContentsType",
	Z_Construct_UEnum_ProjectPT_EContentsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EContentsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EContentsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EContentsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EContentsType()
{
	if (!Z_Registration_Info_UEnum_EContentsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentsType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EContentsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EContentsType.InnerSingleton;
}
// End Enum EContentsType

// Begin Enum EInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionType;
static UEnum* EInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EInteractionType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EInteractionType"));
	}
	return Z_Registration_Info_UEnum_EInteractionType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EInteractionType>()
{
	return EInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "Shop.Name", "EInteractionType::Shop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractionType::Shop", (int64)EInteractionType::Shop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EInteractionType",
	"EInteractionType",
	Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EInteractionType()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractionType.InnerSingleton;
}
// End Enum EInteractionType

// Begin Enum EShopType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShopType;
static UEnum* EShopType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShopType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShopType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EShopType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EShopType"));
	}
	return Z_Registration_Info_UEnum_EShopType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EShopType>()
{
	return EShopType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EShopType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Buy.Name", "EShopType::Buy" },
		{ "Fix.Comment", "//\xed\x8c\x90\xeb\xa7\xa4 \xec\x83\xb5\n" },
		{ "Fix.Name", "EShopType::Fix" },
		{ "Fix.ToolTip", "\xed\x8c\x90\xeb\xa7\xa4 \xec\x83\xb5" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
		{ "Sell.Comment", "//\xea\xb5\xac\xeb\xa7\xa4 \xec\x83\xb5\n" },
		{ "Sell.Name", "EShopType::Sell" },
		{ "Sell.ToolTip", "\xea\xb5\xac\xeb\xa7\xa4 \xec\x83\xb5" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShopType::Buy", (int64)EShopType::Buy },
		{ "EShopType::Sell", (int64)EShopType::Sell },
		{ "EShopType::Fix", (int64)EShopType::Fix },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EShopType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EShopType",
	"EShopType",
	Z_Construct_UEnum_ProjectPT_EShopType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EShopType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EShopType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EShopType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EShopType()
{
	if (!Z_Registration_Info_UEnum_EShopType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShopType.InnerSingleton, Z_Construct_UEnum_ProjectPT_EShopType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShopType.InnerSingleton;
}
// End Enum EShopType

// Begin Enum ECurrencyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurrencyType;
static UEnum* ECurrencyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECurrencyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECurrencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_ECurrencyType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ECurrencyType"));
	}
	return Z_Registration_Info_UEnum_ECurrencyType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<ECurrencyType>()
{
	return ECurrencyType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Diamond.Comment", "//\xea\xb3\xa8\xeb\x93\x9c\n" },
		{ "Diamond.Name", "ECurrencyType::Diamond" },
		{ "Diamond.ToolTip", "\xea\xb3\xa8\xeb\x93\x9c" },
		{ "Gold.Name", "ECurrencyType::Gold" },
		{ "ModuleRelativePath", "Data/EnumGenerateData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurrencyType::Gold", (int64)ECurrencyType::Gold },
		{ "ECurrencyType::Diamond", (int64)ECurrencyType::Diamond },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"ECurrencyType",
	"ECurrencyType",
	Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_ECurrencyType()
{
	if (!Z_Registration_Info_UEnum_ECurrencyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurrencyType.InnerSingleton, Z_Construct_UEnum_ProjectPT_ECurrencyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECurrencyType.InnerSingleton;
}
// End Enum ECurrencyType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTElementType_StaticEnum, TEXT("EPTElementType"), &Z_Registration_Info_UEnum_EPTElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142800082U) },
		{ EMonsterType_StaticEnum, TEXT("EMonsterType"), &Z_Registration_Info_UEnum_EMonsterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 815457047U) },
		{ ECollisionType_StaticEnum, TEXT("ECollisionType"), &Z_Registration_Info_UEnum_ECollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4236091643U) },
		{ ERedDotType_StaticEnum, TEXT("ERedDotType"), &Z_Registration_Info_UEnum_ERedDotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3203063460U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2774345383U) },
		{ EGrade_StaticEnum, TEXT("EGrade"), &Z_Registration_Info_UEnum_EGrade, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1290959772U) },
		{ EBindType_StaticEnum, TEXT("EBindType"), &Z_Registration_Info_UEnum_EBindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1504203016U) },
		{ EMailType_StaticEnum, TEXT("EMailType"), &Z_Registration_Info_UEnum_EMailType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 925762257U) },
		{ EEventOpenType_StaticEnum, TEXT("EEventOpenType"), &Z_Registration_Info_UEnum_EEventOpenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1397047845U) },
		{ EContentsType_StaticEnum, TEXT("EContentsType"), &Z_Registration_Info_UEnum_EContentsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2230140088U) },
		{ EInteractionType_StaticEnum, TEXT("EInteractionType"), &Z_Registration_Info_UEnum_EInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4099167668U) },
		{ EShopType_StaticEnum, TEXT("EShopType"), &Z_Registration_Info_UEnum_EShopType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2903499760U) },
		{ ECurrencyType_StaticEnum, TEXT("ECurrencyType"), &Z_Registration_Info_UEnum_ECurrencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924764404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_3104640924(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_EnumGenerateData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
