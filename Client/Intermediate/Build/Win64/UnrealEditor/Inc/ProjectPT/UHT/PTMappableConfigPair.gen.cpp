// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Input/PTMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTMappableConfigPair() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTMappableConfigPair();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FPTMappableConfigPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTMappableConfigPair;
class UScriptStruct* FPTMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTMappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTMappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTMappableConfigPair, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PTMappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_PTMappableConfigPair.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPTMappableConfigPair>()
{
	return FPTMappableConfigPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Input/PTMappableConfigPair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "PTMappableConfigPair" },
		{ "ModuleRelativePath", "Input/PTMappableConfigPair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateAutomatically_MetaData[] = {
		{ "Category", "PTMappableConfigPair" },
		{ "ModuleRelativePath", "Input/PTMappableConfigPair.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Config;
	static void NewProp_bShouldActivateAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateAutomatically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTMappableConfigPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
void Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit(void* Obj)
{
	((FPTMappableConfigPair*)Obj)->bShouldActivateAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically = { "bShouldActivateAutomatically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPTMappableConfigPair), &Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldActivateAutomatically_MetaData), NewProp_bShouldActivateAutomatically_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"PTMappableConfigPair",
	Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::PropPointers),
	sizeof(FPTMappableConfigPair),
	alignof(FPTMappableConfigPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTMappableConfigPair()
{
	if (!Z_Registration_Info_UScriptStruct_PTMappableConfigPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTMappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTMappableConfigPair.InnerSingleton;
}
// End ScriptStruct FPTMappableConfigPair

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTMappableConfigPair_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPTMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FPTMappableConfigPair_Statics::NewStructOps, TEXT("PTMappableConfigPair"), &Z_Registration_Info_UScriptStruct_PTMappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTMappableConfigPair), 1812802048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTMappableConfigPair_h_1980656842(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTMappableConfigPair_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTMappableConfigPair_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
