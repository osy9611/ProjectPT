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
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FTest();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FTest2();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FTest3();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FTest
static_assert(std::is_polymorphic<FTest>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTest cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test;
class UScriptStruct* FTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("Test"));
	}
	return Z_Registration_Info_UScriptStruct_Test.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FTest>()
{
	return FTest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name2_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name3_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name2;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest_Statics::NewProp_name2 = { "name2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest, name2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name2_MetaData), NewProp_name2_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest_Statics::NewProp_name3 = { "name3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest, name3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name3_MetaData), NewProp_name3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_Statics::NewProp_name2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_Statics::NewProp_name3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Test",
	Z_Construct_UScriptStruct_FTest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_Statics::PropPointers),
	sizeof(FTest),
	alignof(FTest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest()
{
	if (!Z_Registration_Info_UScriptStruct_Test.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test.InnerSingleton, Z_Construct_UScriptStruct_FTest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test.InnerSingleton;
}
// End ScriptStruct FTest

// Begin ScriptStruct FTest2
static_assert(std::is_polymorphic<FTest2>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTest2 cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test2;
class UScriptStruct* FTest2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest2, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("Test2"));
	}
	return Z_Registration_Info_UScriptStruct_Test2.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FTest2>()
{
	return FTest2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Test2" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name2_MetaData[] = {
		{ "Category", "Test2" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "Category", "Test2" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest2_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest2, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest2_Statics::NewProp_name2 = { "name2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest2, name2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name2_MetaData), NewProp_name2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTest2_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest2, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest2_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest2_Statics::NewProp_name2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest2_Statics::NewProp_range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Test2",
	Z_Construct_UScriptStruct_FTest2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest2_Statics::PropPointers),
	sizeof(FTest2),
	alignof(FTest2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest2()
{
	if (!Z_Registration_Info_UScriptStruct_Test2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test2.InnerSingleton, Z_Construct_UScriptStruct_FTest2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test2.InnerSingleton;
}
// End ScriptStruct FTest2

// Begin ScriptStruct FTest3
static_assert(std::is_polymorphic<FTest3>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTest3 cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test3;
class UScriptStruct* FTest3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest3, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("Test3"));
	}
	return Z_Registration_Info_UScriptStruct_Test3.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FTest3>()
{
	return FTest3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Test3" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name2_MetaData[] = {
		{ "Category", "Test3" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "Category", "Test3" },
		{ "ModuleRelativePath", "Table/GenerateTableData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest3_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest3, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTest3_Statics::NewProp_name2 = { "name2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest3, name2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name2_MetaData), NewProp_name2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTest3_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest3, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest3_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest3_Statics::NewProp_name2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest3_Statics::NewProp_range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Test3",
	Z_Construct_UScriptStruct_FTest3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest3_Statics::PropPointers),
	sizeof(FTest3),
	alignof(FTest3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest3()
{
	if (!Z_Registration_Info_UScriptStruct_Test3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test3.InnerSingleton, Z_Construct_UScriptStruct_FTest3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test3.InnerSingleton;
}
// End ScriptStruct FTest3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTest::StaticStruct, Z_Construct_UScriptStruct_FTest_Statics::NewStructOps, TEXT("Test"), &Z_Registration_Info_UScriptStruct_Test, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest), 4142710076U) },
		{ FTest2::StaticStruct, Z_Construct_UScriptStruct_FTest2_Statics::NewStructOps, TEXT("Test2"), &Z_Registration_Info_UScriptStruct_Test2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest2), 279734136U) },
		{ FTest3::StaticStruct, Z_Construct_UScriptStruct_FTest3_Statics::NewStructOps, TEXT("Test3"), &Z_Registration_Info_UScriptStruct_Test3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest3), 542588699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_2218825594(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_GenerateTableData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
