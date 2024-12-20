// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/PTGameplayAbilityTargetData_SingleTargetHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbilityTargetData_SingleTargetHit() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FPTGameplayAbilityTargetData_SingleTargetHit
static_assert(std::is_polymorphic<FPTGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>(), "USTRUCT FPTGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData_SingleTargetHit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit;
class UScriptStruct* FPTGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PTGameplayAbilityTargetData_SingleTargetHit"));
	}
	return Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPTGameplayAbilityTargetData_SingleTargetHit>()
{
	return FPTGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/PTGameplayAbilityTargetData_SingleTargetHit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc5\xba\xef\xbf\xbd\xef\xbf\xbd ID\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/PTGameplayAbilityTargetData_SingleTargetHit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xba\xef\xbf\xbd\xef\xbf\xbd ID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTGameplayAbilityTargetData_SingleTargetHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTGameplayAbilityTargetData_SingleTargetHit, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit,
	&NewStructOps,
	"PTGameplayAbilityTargetData_SingleTargetHit",
	Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
	sizeof(FPTGameplayAbilityTargetData_SingleTargetHit),
	alignof(FPTGameplayAbilityTargetData_SingleTargetHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit()
{
	if (!Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.InnerSingleton, Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit.InnerSingleton;
}
// End ScriptStruct FPTGameplayAbilityTargetData_SingleTargetHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetData_SingleTargetHit_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPTGameplayAbilityTargetData_SingleTargetHit::StaticStruct, Z_Construct_UScriptStruct_FPTGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps, TEXT("PTGameplayAbilityTargetData_SingleTargetHit"), &Z_Registration_Info_UScriptStruct_PTGameplayAbilityTargetData_SingleTargetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTGameplayAbilityTargetData_SingleTargetHit), 1093021961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetData_SingleTargetHit_h_2452239467(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
