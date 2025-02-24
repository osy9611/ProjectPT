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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FDeleteMailMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FGetEventMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FGetEventRewardMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FRecieveRewardMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIDamageMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIFireZoomMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIHPMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUISkillCoolTimeMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIUpdateEventMessage();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FUIUpdateMailMessage();
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

// Begin ScriptStruct FUIDamageMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIDamageMessage;
class UScriptStruct* FUIDamageMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIDamageMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIDamageMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIDamageMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UIDamageMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UIDamageMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUIDamageMessage>()
{
	return FUIDamageMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIDamageMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "UIDamageMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "UIDamageMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIDamageMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUIDamageMessage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIDamageMessage, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIDamageMessage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIDamageMessage, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIDamageMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIDamageMessage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIDamageMessage_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIDamageMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIDamageMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UIDamageMessage",
	Z_Construct_UScriptStruct_FUIDamageMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIDamageMessage_Statics::PropPointers),
	sizeof(FUIDamageMessage),
	alignof(FUIDamageMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIDamageMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIDamageMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIDamageMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UIDamageMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIDamageMessage.InnerSingleton, Z_Construct_UScriptStruct_FUIDamageMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIDamageMessage.InnerSingleton;
}
// End ScriptStruct FUIDamageMessage

// Begin ScriptStruct FUIHPMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIHPMessage;
class UScriptStruct* FUIHPMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIHPMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIHPMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIHPMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UIHPMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UIHPMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUIHPMessage>()
{
	return FUIHPMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIHPMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[] = {
		{ "Category", "UIHPMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIHPMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUIHPMessage_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIHPMessage, HealthAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAmount_MetaData), NewProp_HealthAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIHPMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIHPMessage_Statics::NewProp_HealthAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIHPMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIHPMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UIHPMessage",
	Z_Construct_UScriptStruct_FUIHPMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIHPMessage_Statics::PropPointers),
	sizeof(FUIHPMessage),
	alignof(FUIHPMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIHPMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIHPMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIHPMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UIHPMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIHPMessage.InnerSingleton, Z_Construct_UScriptStruct_FUIHPMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIHPMessage.InnerSingleton;
}
// End ScriptStruct FUIHPMessage

// Begin ScriptStruct FUIUpdateMailMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIUpdateMailMessage;
class UScriptStruct* FUIUpdateMailMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIUpdateMailMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UIUpdateMailMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUIUpdateMailMessage>()
{
	return FUIUpdateMailMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIUpdateMailMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UIUpdateMailMessage",
	nullptr,
	0,
	sizeof(FUIUpdateMailMessage),
	alignof(FUIUpdateMailMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIUpdateMailMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.InnerSingleton, Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIUpdateMailMessage.InnerSingleton;
}
// End ScriptStruct FUIUpdateMailMessage

// Begin ScriptStruct FUIUpdateEventMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIUpdateEventMessage;
class UScriptStruct* FUIUpdateEventMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIUpdateEventMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("UIUpdateEventMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FUIUpdateEventMessage>()
{
	return FUIUpdateEventMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetFirstList_MetaData[] = {
		{ "Category", "UIUpdateEventMessage" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SetFirstList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetFirstList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIUpdateEventMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::NewProp_SetFirstList_SetBit(void* Obj)
{
	((FUIUpdateEventMessage*)Obj)->SetFirstList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::NewProp_SetFirstList = { "SetFirstList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIUpdateEventMessage), &Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::NewProp_SetFirstList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetFirstList_MetaData), NewProp_SetFirstList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::NewProp_SetFirstList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"UIUpdateEventMessage",
	Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::PropPointers),
	sizeof(FUIUpdateEventMessage),
	alignof(FUIUpdateEventMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIUpdateEventMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.InnerSingleton, Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIUpdateEventMessage.InnerSingleton;
}
// End ScriptStruct FUIUpdateEventMessage

// Begin ScriptStruct FDeleteMailMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeleteMailMessage;
class UScriptStruct* FDeleteMailMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeleteMailMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeleteMailMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeleteMailMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("DeleteMailMessage"));
	}
	return Z_Registration_Info_UScriptStruct_DeleteMailMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FDeleteMailMessage>()
{
	return FDeleteMailMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeleteMailMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeleteMailMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeleteMailMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"DeleteMailMessage",
	nullptr,
	0,
	sizeof(FDeleteMailMessage),
	alignof(FDeleteMailMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeleteMailMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeleteMailMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeleteMailMessage()
{
	if (!Z_Registration_Info_UScriptStruct_DeleteMailMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeleteMailMessage.InnerSingleton, Z_Construct_UScriptStruct_FDeleteMailMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeleteMailMessage.InnerSingleton;
}
// End ScriptStruct FDeleteMailMessage

// Begin ScriptStruct FRecieveRewardMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecieveRewardMessage;
class UScriptStruct* FRecieveRewardMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecieveRewardMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecieveRewardMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecieveRewardMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("RecieveRewardMessage"));
	}
	return Z_Registration_Info_UScriptStruct_RecieveRewardMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FRecieveRewardMessage>()
{
	return FRecieveRewardMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecieveRewardMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"RecieveRewardMessage",
	nullptr,
	0,
	sizeof(FRecieveRewardMessage),
	alignof(FRecieveRewardMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecieveRewardMessage()
{
	if (!Z_Registration_Info_UScriptStruct_RecieveRewardMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecieveRewardMessage.InnerSingleton, Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecieveRewardMessage.InnerSingleton;
}
// End ScriptStruct FRecieveRewardMessage

// Begin ScriptStruct FGetEventMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetEventMessage;
class UScriptStruct* FGetEventMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetEventMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetEventMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetEventMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("GetEventMessage"));
	}
	return Z_Registration_Info_UScriptStruct_GetEventMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FGetEventMessage>()
{
	return FGetEventMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetEventMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetEventMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetEventMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"GetEventMessage",
	nullptr,
	0,
	sizeof(FGetEventMessage),
	alignof(FGetEventMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetEventMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetEventMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetEventMessage()
{
	if (!Z_Registration_Info_UScriptStruct_GetEventMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetEventMessage.InnerSingleton, Z_Construct_UScriptStruct_FGetEventMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetEventMessage.InnerSingleton;
}
// End ScriptStruct FGetEventMessage

// Begin ScriptStruct FGetEventRewardMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetEventRewardMessage;
class UScriptStruct* FGetEventRewardMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetEventRewardMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetEventRewardMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetEventRewardMessage, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("GetEventRewardMessage"));
	}
	return Z_Registration_Info_UScriptStruct_GetEventRewardMessage.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FGetEventRewardMessage>()
{
	return FGetEventRewardMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Extensions/PTUIMessageExtensions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetEventRewardMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"GetEventRewardMessage",
	nullptr,
	0,
	sizeof(FGetEventRewardMessage),
	alignof(FGetEventRewardMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetEventRewardMessage()
{
	if (!Z_Registration_Info_UScriptStruct_GetEventRewardMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetEventRewardMessage.InnerSingleton, Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetEventRewardMessage.InnerSingleton;
}
// End ScriptStruct FGetEventRewardMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUISkillCoolTimeMessage::StaticStruct, Z_Construct_UScriptStruct_FUISkillCoolTimeMessage_Statics::NewStructOps, TEXT("UISkillCoolTimeMessage"), &Z_Registration_Info_UScriptStruct_UISkillCoolTimeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUISkillCoolTimeMessage), 3257997902U) },
		{ FUIFireZoomMessage::StaticStruct, Z_Construct_UScriptStruct_FUIFireZoomMessage_Statics::NewStructOps, TEXT("UIFireZoomMessage"), &Z_Registration_Info_UScriptStruct_UIFireZoomMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFireZoomMessage), 2541667117U) },
		{ FUIDamageMessage::StaticStruct, Z_Construct_UScriptStruct_FUIDamageMessage_Statics::NewStructOps, TEXT("UIDamageMessage"), &Z_Registration_Info_UScriptStruct_UIDamageMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIDamageMessage), 1523961953U) },
		{ FUIHPMessage::StaticStruct, Z_Construct_UScriptStruct_FUIHPMessage_Statics::NewStructOps, TEXT("UIHPMessage"), &Z_Registration_Info_UScriptStruct_UIHPMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIHPMessage), 3844032259U) },
		{ FUIUpdateMailMessage::StaticStruct, Z_Construct_UScriptStruct_FUIUpdateMailMessage_Statics::NewStructOps, TEXT("UIUpdateMailMessage"), &Z_Registration_Info_UScriptStruct_UIUpdateMailMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIUpdateMailMessage), 856343851U) },
		{ FUIUpdateEventMessage::StaticStruct, Z_Construct_UScriptStruct_FUIUpdateEventMessage_Statics::NewStructOps, TEXT("UIUpdateEventMessage"), &Z_Registration_Info_UScriptStruct_UIUpdateEventMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIUpdateEventMessage), 752352978U) },
		{ FDeleteMailMessage::StaticStruct, Z_Construct_UScriptStruct_FDeleteMailMessage_Statics::NewStructOps, TEXT("DeleteMailMessage"), &Z_Registration_Info_UScriptStruct_DeleteMailMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeleteMailMessage), 4251612553U) },
		{ FRecieveRewardMessage::StaticStruct, Z_Construct_UScriptStruct_FRecieveRewardMessage_Statics::NewStructOps, TEXT("RecieveRewardMessage"), &Z_Registration_Info_UScriptStruct_RecieveRewardMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecieveRewardMessage), 2168281164U) },
		{ FGetEventMessage::StaticStruct, Z_Construct_UScriptStruct_FGetEventMessage_Statics::NewStructOps, TEXT("GetEventMessage"), &Z_Registration_Info_UScriptStruct_GetEventMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetEventMessage), 1679700882U) },
		{ FGetEventRewardMessage::StaticStruct, Z_Construct_UScriptStruct_FGetEventRewardMessage_Statics::NewStructOps, TEXT("GetEventRewardMessage"), &Z_Registration_Info_UScriptStruct_GetEventRewardMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetEventRewardMessage), 1950954237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_112282105(TEXT("/Script/ProjectPT"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Extensions_PTUIMessageExtensions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
