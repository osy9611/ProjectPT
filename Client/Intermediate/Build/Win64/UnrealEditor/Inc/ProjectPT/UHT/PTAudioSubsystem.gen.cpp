// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Sound/PTAudioSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAudioSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAudioSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAudioSubsystem_NoRegister();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_ESoundType();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FSoundOptionData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum ESoundType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundType;
static UEnum* ESoundType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_ESoundType, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("ESoundType"));
	}
	return Z_Registration_Info_UEnum_ESoundType.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<ESoundType>()
{
	return ESoundType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_ESoundType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BGM.Comment", "/**\n *\n */" },
		{ "BGM.Name", "ESoundType::BGM" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "Max.Comment", "/**\n *\n */" },
		{ "Max.Name", "ESoundType::Max" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
		{ "SFX.Comment", "/**\n *\n */" },
		{ "SFX.Name", "ESoundType::SFX" },
		{ "Voice.Comment", "/**\n *\n */" },
		{ "Voice.Name", "ESoundType::Voice" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundType::BGM", (int64)ESoundType::BGM },
		{ "ESoundType::SFX", (int64)ESoundType::SFX },
		{ "ESoundType::Voice", (int64)ESoundType::Voice },
		{ "ESoundType::Max", (int64)ESoundType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_ESoundType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"ESoundType",
	"ESoundType",
	Z_Construct_UEnum_ProjectPT_ESoundType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ESoundType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_ESoundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_ESoundType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_ESoundType()
{
	if (!Z_Registration_Info_UEnum_ESoundType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundType.InnerSingleton, Z_Construct_UEnum_ProjectPT_ESoundType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundType.InnerSingleton;
}
// End Enum ESoundType

// Begin ScriptStruct FSoundOptionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundOptionData;
class UScriptStruct* FSoundOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundOptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundOptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundOptionData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("SoundOptionData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundOptionData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FSoundOptionData>()
{
	return FSoundOptionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainVolumeMute_MetaData[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMutes_MetaData[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainVolumeRatio_MetaData[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatios_MetaData[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_MainVolumeMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MainVolumeMute;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VolumeMutes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VolumeMutes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MainVolumeRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRatios_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VolumeRatios;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundOptionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeMute_SetBit(void* Obj)
{
	((FSoundOptionData*)Obj)->MainVolumeMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeMute = { "MainVolumeMute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundOptionData), &Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeMute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainVolumeMute_MetaData), NewProp_MainVolumeMute_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeMutes_Inner = { "VolumeMutes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeMutes = { "VolumeMutes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundOptionData, VolumeMutes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMutes_MetaData), NewProp_VolumeMutes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeRatio = { "MainVolumeRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundOptionData, MainVolumeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainVolumeRatio_MetaData), NewProp_MainVolumeRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeRatios_Inner = { "VolumeRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeRatios = { "VolumeRatios", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundOptionData, VolumeRatios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRatios_MetaData), NewProp_VolumeRatios_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeMutes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeMutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_MainVolumeRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeRatios_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewProp_VolumeRatios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundOptionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"SoundOptionData",
	Z_Construct_UScriptStruct_FSoundOptionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundOptionData_Statics::PropPointers),
	sizeof(FSoundOptionData),
	alignof(FSoundOptionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundOptionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundOptionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundOptionData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundOptionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundOptionData.InnerSingleton, Z_Construct_UScriptStruct_FSoundOptionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundOptionData.InnerSingleton;
}
// End ScriptStruct FSoundOptionData

// Begin Class UPTAudioSubsystem Function FadeInSound
struct Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics
{
	struct PTAudioSubsystem_eventFadeInSound_Parms
	{
		ESoundType Type;
		float FadeDuration;
		float TargetVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_TargetVolume", "1.000000" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeInSound_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeInSound_Parms, FadeDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_TargetVolume = { "TargetVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeInSound_Parms, TargetVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::NewProp_TargetVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "FadeInSound", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PTAudioSubsystem_eventFadeInSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::PTAudioSubsystem_eventFadeInSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execFadeInSound)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeInSound(ESoundType(Z_Param_Type),Z_Param_FadeDuration,Z_Param_TargetVolume);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function FadeInSound

// Begin Class UPTAudioSubsystem Function FadeOutSound
struct Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics
{
	struct PTAudioSubsystem_eventFadeOutSound_Parms
	{
		ESoundType Type;
		float FadeDuration;
		float TargetVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_TargetVolume", "0.000000" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeOutSound_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeOutSound_Parms, FadeDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_TargetVolume = { "TargetVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventFadeOutSound_Parms, TargetVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::NewProp_TargetVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "FadeOutSound", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PTAudioSubsystem_eventFadeOutSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::PTAudioSubsystem_eventFadeOutSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execFadeOutSound)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeOutSound(ESoundType(Z_Param_Type),Z_Param_FadeDuration,Z_Param_TargetVolume);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function FadeOutSound

// Begin Class UPTAudioSubsystem Function PlaySound2D_ByPath
struct Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PTAudioSubsystem_eventPlaySound2D_ByPath_Parms
	{
		ESoundType Type;
		FSoftObjectPath Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound2D_ByPath_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound2D_ByPath_Parms, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "PlaySound2D_ByPath", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PTAudioSubsystem_eventPlaySound2D_ByPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::PTAudioSubsystem_eventPlaySound2D_ByPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execPlaySound2D_ByPath)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound2D_ByPath(ESoundType(Z_Param_Type),Z_Param_Out_Path);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function PlaySound2D_ByPath

// Begin Class UPTAudioSubsystem Function PlaySound2D_BySound
struct Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics
{
	struct PTAudioSubsystem_eventPlaySound2D_BySound_Parms
	{
		ESoundType Type;
		USoundBase* Sound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound2D_BySound_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound2D_BySound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "PlaySound2D_BySound", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PTAudioSubsystem_eventPlaySound2D_BySound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::PTAudioSubsystem_eventPlaySound2D_BySound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execPlaySound2D_BySound)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound2D_BySound(ESoundType(Z_Param_Type),Z_Param_Sound);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function PlaySound2D_BySound

// Begin Class UPTAudioSubsystem Function PlaySound3D_ByPath
struct Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PTAudioSubsystem_eventPlaySound3D_ByPath_Parms
	{
		ESoundType Type;
		FSoftObjectPath BGMPath;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BGMPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BGMPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_ByPath_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_BGMPath = { "BGMPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_ByPath_Parms, BGMPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BGMPath_MetaData), NewProp_BGMPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_ByPath_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_BGMPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "PlaySound3D_ByPath", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PTAudioSubsystem_eventPlaySound3D_ByPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::PTAudioSubsystem_eventPlaySound3D_ByPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execPlaySound3D_ByPath)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_BGMPath);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound3D_ByPath(ESoundType(Z_Param_Type),Z_Param_Out_BGMPath,Z_Param_Location);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function PlaySound3D_ByPath

// Begin Class UPTAudioSubsystem Function PlaySound3D_BySound
struct Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics
{
	struct PTAudioSubsystem_eventPlaySound3D_BySound_Parms
	{
		ESoundType Type;
		USoundBase* Sound;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_BySound_Parms, Type), Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_BySound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAudioSubsystem_eventPlaySound3D_BySound_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAudioSubsystem, nullptr, "PlaySound3D_BySound", nullptr, nullptr, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PTAudioSubsystem_eventPlaySound3D_BySound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::PTAudioSubsystem_eventPlaySound3D_BySound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAudioSubsystem::execPlaySound3D_BySound)
{
	P_GET_ENUM(ESoundType,Z_Param_Type);
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound3D_BySound(ESoundType(Z_Param_Type),Z_Param_Sound,Z_Param_Location);
	P_NATIVE_END;
}
// End Class UPTAudioSubsystem Function PlaySound3D_BySound

// Begin Class UPTAudioSubsystem
void UPTAudioSubsystem::StaticRegisterNativesUPTAudioSubsystem()
{
	UClass* Class = UPTAudioSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FadeInSound", &UPTAudioSubsystem::execFadeInSound },
		{ "FadeOutSound", &UPTAudioSubsystem::execFadeOutSound },
		{ "PlaySound2D_ByPath", &UPTAudioSubsystem::execPlaySound2D_ByPath },
		{ "PlaySound2D_BySound", &UPTAudioSubsystem::execPlaySound2D_BySound },
		{ "PlaySound3D_ByPath", &UPTAudioSubsystem::execPlaySound3D_ByPath },
		{ "PlaySound3D_BySound", &UPTAudioSubsystem::execPlaySound3D_BySound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAudioSubsystem);
UClass* Z_Construct_UClass_UPTAudioSubsystem_NoRegister()
{
	return UPTAudioSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTAudioSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/PTAudioSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterBGMSound_MetaData[] = {
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sound/PTAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegisterBGMSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioComponents_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AudioComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAudioSubsystem_FadeInSound, "FadeInSound" }, // 2103167351
		{ &Z_Construct_UFunction_UPTAudioSubsystem_FadeOutSound, "FadeOutSound" }, // 3171928377
		{ &Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_ByPath, "PlaySound2D_ByPath" }, // 901612183
		{ &Z_Construct_UFunction_UPTAudioSubsystem_PlaySound2D_BySound, "PlaySound2D_BySound" }, // 1239901900
		{ &Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_ByPath, "PlaySound3D_ByPath" }, // 2362995054
		{ &Z_Construct_UFunction_UPTAudioSubsystem_PlaySound3D_BySound, "PlaySound3D_BySound" }, // 774696812
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAudioSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_RegisterBGMSound = { "RegisterBGMSound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAudioSubsystem, RegisterBGMSound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterBGMSound_MetaData), NewProp_RegisterBGMSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_ValueProp = { "AudioComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_Key_KeyProp = { "AudioComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProjectPT_ESoundType, METADATA_PARAMS(0, nullptr) }; // 990155653
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents = { "AudioComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAudioSubsystem, AudioComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponents_MetaData), NewProp_AudioComponents_MetaData) }; // 990155653
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAudioSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_RegisterBGMSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAudioSubsystem_Statics::NewProp_AudioComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAudioSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAudioSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAudioSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAudioSubsystem_Statics::ClassParams = {
	&UPTAudioSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTAudioSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAudioSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAudioSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAudioSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAudioSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTAudioSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAudioSubsystem.OuterSingleton, Z_Construct_UClass_UPTAudioSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAudioSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAudioSubsystem>()
{
	return UPTAudioSubsystem::StaticClass();
}
UPTAudioSubsystem::UPTAudioSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAudioSubsystem);
UPTAudioSubsystem::~UPTAudioSubsystem() {}
// End Class UPTAudioSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoundType_StaticEnum, TEXT("ESoundType"), &Z_Registration_Info_UEnum_ESoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 990155653U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundOptionData::StaticStruct, Z_Construct_UScriptStruct_FSoundOptionData_Statics::NewStructOps, TEXT("SoundOptionData"), &Z_Registration_Info_UScriptStruct_SoundOptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundOptionData), 1572408232U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAudioSubsystem, UPTAudioSubsystem::StaticClass, TEXT("UPTAudioSubsystem"), &Z_Registration_Info_UClass_UPTAudioSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAudioSubsystem), 2513586567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_3186313266(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
