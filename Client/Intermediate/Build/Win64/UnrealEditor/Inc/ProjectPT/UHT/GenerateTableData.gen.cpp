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
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EBindType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECollisionType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ECurrencyType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EEventOpenType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EGrade();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EInteractionType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EItemType();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EMailType();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FEventData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FMailData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FNPCData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FRewardData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSceneData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FShopData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FShopItemData();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FEventData
static_assert(std::is_polymorphic<FEventData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEventData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventData;
class UScriptStruct* FEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EventData"));
	}
	return Z_Registration_Info_UScriptStruct_EventData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FEventData>()
{
	return FEventData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eventName_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eventDesc_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_openType_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_openValue_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bannerPath_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_toggleImgPath_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_openPageImgPath_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rewardItems_MetaData[] = {
		{ "Category", "EventData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_eventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_eventDesc;
	static const UECodeGen_Private::FBytePropertyParams NewProp_openType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_openType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_openValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_bannerPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_toggleImgPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_openPageImgPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_rewardItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rewardItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_eventName = { "eventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, eventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eventName_MetaData), NewProp_eventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_eventDesc = { "eventDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, eventDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eventDesc_MetaData), NewProp_eventDesc_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openType = { "openType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, openType), Z_Construct_UEnum_ProjectPT_EEventOpenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_openType_MetaData), NewProp_openType_MetaData) }; // 1397047845
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openValue = { "openValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, openValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_openValue_MetaData), NewProp_openValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_bannerPath = { "bannerPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, bannerPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bannerPath_MetaData), NewProp_bannerPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_toggleImgPath = { "toggleImgPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, toggleImgPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_toggleImgPath_MetaData), NewProp_toggleImgPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openPageImgPath = { "openPageImgPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, openPageImgPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_openPageImgPath_MetaData), NewProp_openPageImgPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_rewardItems_Inner = { "rewardItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_rewardItems = { "rewardItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, rewardItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rewardItems_MetaData), NewProp_rewardItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_eventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_eventDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_bannerPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_toggleImgPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_openPageImgPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_rewardItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_rewardItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"EventData",
	Z_Construct_UScriptStruct_FEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::PropPointers),
	sizeof(FEventData),
	alignof(FEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventData()
{
	if (!Z_Registration_Info_UScriptStruct_EventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventData.InnerSingleton, Z_Construct_UScriptStruct_FEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EventData.InnerSingleton;
}
// End ScriptStruct FEventData

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grade_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCell_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDesc_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourcePath_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanStack_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackCount_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyPrice_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellPrice_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Grade_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Grade;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BindType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindType;
	static void NewProp_CanCell_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCell;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResourcePath;
	static void NewProp_CanStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuyPrice;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SellType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Grade_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Grade = { "Grade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Grade), Z_Construct_UEnum_ProjectPT_EGrade, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grade_MetaData), NewProp_Grade_MetaData) }; // 1290959772
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_ProjectPT_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2774345383
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BindType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BindType = { "BindType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, BindType), Z_Construct_UEnum_ProjectPT_EBindType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindType_MetaData), NewProp_BindType_MetaData) }; // 1504203016
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanCell_SetBit(void* Obj)
{
	((FItemData*)Obj)->CanCell = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanCell = { "CanCell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanCell_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCell_MetaData), NewProp_CanCell_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemDesc = { "ItemDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDesc_MetaData), NewProp_ItemDesc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ResourcePath = { "ResourcePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ResourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourcePath_MetaData), NewProp_ResourcePath_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanStack_SetBit(void* Obj)
{
	((FItemData*)Obj)->CanStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanStack = { "CanStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanStack_MetaData), NewProp_CanStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackCount = { "MaxStackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, MaxStackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackCount_MetaData), NewProp_MaxStackCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyType = { "BuyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, BuyType), Z_Construct_UEnum_ProjectPT_ECurrencyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyType_MetaData), NewProp_BuyType_MetaData) }; // 3924764404
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, BuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyPrice_MetaData), NewProp_BuyPrice_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellType = { "SellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, SellType), Z_Construct_UEnum_ProjectPT_ECurrencyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellType_MetaData), NewProp_SellType_MetaData) }; // 3924764404
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, SellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellPrice_MetaData), NewProp_SellPrice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Grade_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Grade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BindType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BindType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ResourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_CanStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_SellPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin ScriptStruct FMailData
static_assert(std::is_polymorphic<FMailData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMailData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MailData;
class UScriptStruct* FMailData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MailData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MailData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMailData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("MailData"));
	}
	return Z_Registration_Info_UScriptStruct_MailData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FMailData>()
{
	return FMailData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMailData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MailType_MetaData[] = {
		{ "Category", "MailData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MailName_MetaData[] = {
		{ "Category", "MailData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MailDesc_MetaData[] = {
		{ "Category", "MailData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MailType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MailType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MailName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MailDesc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMailData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailType = { "MailType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMailData, MailType), Z_Construct_UEnum_ProjectPT_EMailType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MailType_MetaData), NewProp_MailType_MetaData) }; // 925762257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailName = { "MailName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMailData, MailName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MailName_MetaData), NewProp_MailName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailDesc = { "MailDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMailData, MailDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MailDesc_MetaData), NewProp_MailDesc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMailData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMailData_Statics::NewProp_MailDesc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMailData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMailData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MailData",
	Z_Construct_UScriptStruct_FMailData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMailData_Statics::PropPointers),
	sizeof(FMailData),
	alignof(FMailData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMailData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMailData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMailData()
{
	if (!Z_Registration_Info_UScriptStruct_MailData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MailData.InnerSingleton, Z_Construct_UScriptStruct_FMailData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MailData.InnerSingleton;
}
// End ScriptStruct FMailData

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

// Begin ScriptStruct FNPCData
static_assert(std::is_polymorphic<FNPCData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNPCData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCData;
class UScriptStruct* FNPCData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("NPCData"));
	}
	return Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FNPCData>()
{
	return FNPCData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "NPCData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[] = {
		{ "Category", "NPCData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionValue_MetaData[] = {
		{ "Category", "NPCData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, InteractionType), Z_Construct_UEnum_ProjectPT_EInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionType_MetaData), NewProp_InteractionType_MetaData) }; // 4099167668
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionValue = { "InteractionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, InteractionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionValue_MetaData), NewProp_InteractionValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_InteractionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NPCData",
	Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers),
	sizeof(FNPCData),
	alignof(FNPCData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCData()
{
	if (!Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton, Z_Construct_UScriptStruct_FNPCData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton;
}
// End ScriptStruct FNPCData

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

// Begin ScriptStruct FRewardData
static_assert(std::is_polymorphic<FRewardData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRewardData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RewardData;
class UScriptStruct* FRewardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RewardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RewardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("RewardData"));
	}
	return Z_Registration_Info_UScriptStruct_RewardData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FRewardData>()
{
	return FRewardData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRewardData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemID_MetaData[] = {
		{ "Category", "RewardData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "RewardData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRewardData, itemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemID_MetaData), NewProp_itemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRewardData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_itemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"RewardData",
	Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers),
	sizeof(FRewardData),
	alignof(FRewardData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRewardData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRewardData()
{
	if (!Z_Registration_Info_UScriptStruct_RewardData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RewardData.InnerSingleton, Z_Construct_UScriptStruct_FRewardData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RewardData.InnerSingleton;
}
// End ScriptStruct FRewardData

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

// Begin ScriptStruct FShopData
static_assert(std::is_polymorphic<FShopData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FShopData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShopData;
class UScriptStruct* FShopData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShopData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShopData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ShopData"));
	}
	return Z_Registration_Info_UScriptStruct_ShopData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FShopData>()
{
	return FShopData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShopData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shopItemGroupID_MetaData[] = {
		{ "Category", "ShopData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_shopItemGroupID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopData_Statics::NewProp_shopItemGroupID = { "shopItemGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShopData, shopItemGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shopItemGroupID_MetaData), NewProp_shopItemGroupID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopData_Statics::NewProp_shopItemGroupID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ShopData",
	Z_Construct_UScriptStruct_FShopData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopData_Statics::PropPointers),
	sizeof(FShopData),
	alignof(FShopData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShopData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShopData()
{
	if (!Z_Registration_Info_UScriptStruct_ShopData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShopData.InnerSingleton, Z_Construct_UScriptStruct_FShopData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShopData.InnerSingleton;
}
// End ScriptStruct FShopData

// Begin ScriptStruct FShopItemData
static_assert(std::is_polymorphic<FShopItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FShopItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShopItemData;
class UScriptStruct* FShopItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShopItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShopItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopItemData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ShopItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ShopItemData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FShopItemData>()
{
	return FShopItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShopItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shopItemGroupID_MetaData[] = {
		{ "Category", "ShopItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ShopItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "Category", "ShopItemData" },
		{ "ModuleRelativePath", "Data/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_shopItemGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_shopItemGroupID = { "shopItemGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShopItemData, shopItemGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shopItemGroupID_MetaData), NewProp_shopItemGroupID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShopItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShopItemData, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_shopItemGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopItemData_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ShopItemData",
	Z_Construct_UScriptStruct_FShopItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItemData_Statics::PropPointers),
	sizeof(FShopItemData),
	alignof(FShopItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShopItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShopItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ShopItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShopItemData.InnerSingleton, Z_Construct_UScriptStruct_FShopItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShopItemData.InnerSingleton;
}
// End ScriptStruct FShopItemData

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
		{ FEventData::StaticStruct, Z_Construct_UScriptStruct_FEventData_Statics::NewStructOps, TEXT("EventData"), &Z_Registration_Info_UScriptStruct_EventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventData), 1540007122U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2214966899U) },
		{ FMailData::StaticStruct, Z_Construct_UScriptStruct_FMailData_Statics::NewStructOps, TEXT("MailData"), &Z_Registration_Info_UScriptStruct_MailData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMailData), 3049839908U) },
		{ FMonsterData::StaticStruct, Z_Construct_UScriptStruct_FMonsterData_Statics::NewStructOps, TEXT("MonsterData"), &Z_Registration_Info_UScriptStruct_MonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterData), 4054298180U) },
		{ FNPCData::StaticStruct, Z_Construct_UScriptStruct_FNPCData_Statics::NewStructOps, TEXT("NPCData"), &Z_Registration_Info_UScriptStruct_NPCData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCData), 3995810216U) },
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 3805507274U) },
		{ FRewardData::StaticStruct, Z_Construct_UScriptStruct_FRewardData_Statics::NewStructOps, TEXT("RewardData"), &Z_Registration_Info_UScriptStruct_RewardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRewardData), 1045036157U) },
		{ FSceneData::StaticStruct, Z_Construct_UScriptStruct_FSceneData_Statics::NewStructOps, TEXT("SceneData"), &Z_Registration_Info_UScriptStruct_SceneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneData), 2898749887U) },
		{ FShopData::StaticStruct, Z_Construct_UScriptStruct_FShopData_Statics::NewStructOps, TEXT("ShopData"), &Z_Registration_Info_UScriptStruct_ShopData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShopData), 1628903493U) },
		{ FShopItemData::StaticStruct, Z_Construct_UScriptStruct_FShopItemData_Statics::NewStructOps, TEXT("ShopItemData"), &Z_Registration_Info_UScriptStruct_ShopItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShopItemData), 1471051617U) },
		{ FSkillData::StaticStruct, Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps, TEXT("SkillData"), &Z_Registration_Info_UScriptStruct_SkillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillData), 146149087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_564500979(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Data_GenerateTableData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
