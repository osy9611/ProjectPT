// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Extensions/PTUIMessageExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTUIMessageExtensions() {}

// Begin Cross Module References
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIFireZoomMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUISkillCoolTimeMessage();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FUISkillCoolTimeMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage;
class UScriptStruct* FUISkillCoolTimeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUISkillCoolTimeMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UISkillCoolTimeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUISkillCoolTimeMessage>()
{
	return FUISkillCoolTimeMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolTime_MetaData[] = {
		{ "Category", "UISkillCoolTimeMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUISkillCoolTimeMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::NewProp_CoolTime = { "CoolTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUISkillCoolTimeMessage, CoolTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolTime_MetaData), NewProp_CoolTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::NewProp_CoolTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UISkillCoolTimeMessage",
	Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::PropPointers),
	sizeof(FUISkillCoolTimeMessage),
	alignof(FUISkillCoolTimeMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUISkillCoolTimeMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.InnerSingleton, Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage.InnerSingleton;
}
// End ScriptStruct FUISkillCoolTimeMessage

// Begin ScriptStruct FUIFireZoomMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFireZoomMessage;
class UScriptStruct* FUIFireZoomMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFireZoomMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFireZoomMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFireZoomMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UIFireZoomMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UIFireZoomMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUIFireZoomMessage>()
{
	return FUIFireZoomMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireZoom_MetaData[] = {
		{ "Category", "UIFireZoomMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_FireZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FireZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFireZoomMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewProp_FireZoom_SetBit(void* Obj)
{
	((FUIFireZoomMessage*)Obj)->FireZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewProp_FireZoom = { "FireZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIFireZoomMessage), &Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewProp_FireZoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireZoom_MetaData), NewProp_FireZoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewProp_FireZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UIFireZoomMessage",
	Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::PropPointers),
	sizeof(FUIFireZoomMessage),
	alignof(FUIFireZoomMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIFireZoomMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UIFireZoomMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFireZoomMessage.InnerSingleton, Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIFireZoomMessage.InnerSingleton;
}
// End ScriptStruct FUIFireZoomMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUISkillCoolTimeMessage::StaticStruct, Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::NewStructOps, TEXT("UISkillCoolTimeMessage"), &Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUISkillCoolTimeMessage), 3257997902U) },
		{ FUIFireZoomMessage::StaticStruct, Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewStructOps, TEXT("UIFireZoomMessage"), &Z_Registration_Info_UScriptStruct_UIFireZoomMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFireZoomMessage), 2541667117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_3457889404(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
