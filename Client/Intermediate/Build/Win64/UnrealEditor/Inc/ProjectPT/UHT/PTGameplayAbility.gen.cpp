// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_APTAICharacter_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_APTCharacter_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAttributeSet_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum EPTAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPTAbilityActivationPolicy;
static UEnum* EPTAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EPTAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EPTAbilityActivationPolicy>()
{
	return EPTAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "OnInputTirggered.Name", "EPTAbilityActivationPolicy::OnInputTirggered" },
		{ "OnSpawn.Name", "EPTAbilityActivationPolicy::OnSpawn" },
		{ "WhileInputActive.Name", "EPTAbilityActivationPolicy::WhileInputActive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPTAbilityActivationPolicy::OnInputTirggered", (int64)EPTAbilityActivationPolicy::OnInputTirggered },
		{ "EPTAbilityActivationPolicy::WhileInputActive", (int64)EPTAbilityActivationPolicy::WhileInputActive },
		{ "EPTAbilityActivationPolicy::OnSpawn", (int64)EPTAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EPTAbilityActivationPolicy",
	"EPTAbilityActivationPolicy",
	Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPTAbilityActivationPolicy.InnerSingleton;
}
// End Enum EPTAbilityActivationPolicy

// Begin Class UPTGameplayAbility Function ClearCameraMode
struct Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics
{
	struct PTGameplayAbility_eventClearCameraMode_Parms
	{
		bool UseFovOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_UseFovOffset", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseFovOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFovOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::NewProp_UseFovOffset_SetBit(void* Obj)
{
	((PTGameplayAbility_eventClearCameraMode_Parms*)Obj)->UseFovOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::NewProp_UseFovOffset = { "UseFovOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTGameplayAbility_eventClearCameraMode_Parms), &Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::NewProp_UseFovOffset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::NewProp_UseFovOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PTGameplayAbility_eventClearCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::PTGameplayAbility_eventClearCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execClearCameraMode)
{
	P_GET_UBOOL(Z_Param_UseFovOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCameraMode(Z_Param_UseFovOffset);
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function ClearCameraMode

// Begin Class UPTGameplayAbility Function GetGameplayTag
struct Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics
{
	struct PTGameplayAbility_eventGetGameplayTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_eventGetGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "GetGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PTGameplayAbility_eventGetGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::PTGameplayAbility_eventGetGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execGetGameplayTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function GetGameplayTag

// Begin Class UPTGameplayAbility Function GetPTAICharacterFromActorInfo
struct Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics
{
	struct PTGameplayAbility_eventGetPTAICharacterFromActorInfo_Parms
	{
		APTAICharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_eventGetPTAICharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_APTAICharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "GetPTAICharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PTGameplayAbility_eventGetPTAICharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::PTGameplayAbility_eventGetPTAICharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execGetPTAICharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APTAICharacter**)Z_Param__Result=P_THIS->GetPTAICharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function GetPTAICharacterFromActorInfo

// Begin Class UPTGameplayAbility Function GetPTAttribute
struct Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics
{
	struct PTGameplayAbility_eventGetPTAttribute_Parms
	{
		UPTAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_eventGetPTAttribute_Parms, ReturnValue), Z_Construct_UClass_UPTAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "GetPTAttribute", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PTGameplayAbility_eventGetPTAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::PTGameplayAbility_eventGetPTAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execGetPTAttribute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPTAttributeSet**)Z_Param__Result=P_THIS->GetPTAttribute();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function GetPTAttribute

// Begin Class UPTGameplayAbility Function GetPTCharacterFromActorInfo
struct Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics
{
	struct PTGameplayAbility_eventGetPTCharacterFromActorInfo_Parms
	{
		APTCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_eventGetPTCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_APTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "GetPTCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PTGameplayAbility_eventGetPTCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::PTGameplayAbility_eventGetPTCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execGetPTCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APTCharacter**)Z_Param__Result=P_THIS->GetPTCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function GetPTCharacterFromActorInfo

// Begin Class UPTGameplayAbility Function SetCameraMode
struct Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics
{
	struct PTGameplayAbility_eventSetCameraMode_Parms
	{
		TSubclassOf<UPTCameraMode> CameraMode;
		bool UseFovOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_UseFovOffset", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static void NewProp_UseFovOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFovOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_UseFovOffset_SetBit(void* Obj)
{
	((PTGameplayAbility_eventSetCameraMode_Parms*)Obj)->UseFovOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_UseFovOffset = { "UseFovOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTGameplayAbility_eventSetCameraMode_Parms), &Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_UseFovOffset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::NewProp_UseFovOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PTGameplayAbility_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::PTGameplayAbility_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_CameraMode);
	P_GET_UBOOL(Z_Param_UseFovOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraMode,Z_Param_UseFovOffset);
	P_NATIVE_END;
}
// End Class UPTGameplayAbility Function SetCameraMode

// Begin Class UPTGameplayAbility
void UPTGameplayAbility::StaticRegisterNativesUPTGameplayAbility()
{
	UClass* Class = UPTGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCameraMode", &UPTGameplayAbility::execClearCameraMode },
		{ "GetGameplayTag", &UPTGameplayAbility::execGetGameplayTag },
		{ "GetPTAICharacterFromActorInfo", &UPTGameplayAbility::execGetPTAICharacterFromActorInfo },
		{ "GetPTAttribute", &UPTGameplayAbility::execGetPTAttribute },
		{ "GetPTCharacterFromActorInfo", &UPTGameplayAbility::execGetPTCharacterFromActorInfo },
		{ "SetCameraMode", &UPTGameplayAbility::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility);
UClass* Z_Construct_UClass_UPTGameplayAbility_NoRegister()
{
	return UPTGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "PT|AbilityActivation" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "PT|AnimMontage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 3000964135
		{ &Z_Construct_UFunction_UPTGameplayAbility_GetGameplayTag, "GetGameplayTag" }, // 1099813518
		{ &Z_Construct_UFunction_UPTGameplayAbility_GetPTAICharacterFromActorInfo, "GetPTAICharacterFromActorInfo" }, // 3529376896
		{ &Z_Construct_UFunction_UPTGameplayAbility_GetPTAttribute, "GetPTAttribute" }, // 3592778793
		{ &Z_Construct_UFunction_UPTGameplayAbility_GetPTCharacterFromActorInfo, "GetPTCharacterFromActorInfo" }, // 647374732
		{ &Z_Construct_UFunction_UPTGameplayAbility_SetCameraMode, "SetCameraMode" }, // 576287492
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTGameplayAbility, ActivationPolicy), Z_Construct_UEnum_ProjectPT_EPTAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 2255047541
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTGameplayAbility, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTGameplayAbility_Statics::NewProp_AnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_Statics::ClassParams = {
	&UPTGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility>()
{
	return UPTGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility);
UPTGameplayAbility::~UPTGameplayAbility() {}
// End Class UPTGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTAbilityActivationPolicy_StaticEnum, TEXT("EPTAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EPTAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2255047541U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility, UPTGameplayAbility::StaticClass, TEXT("UPTGameplayAbility"), &Z_Registration_Info_UClass_UPTGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility), 819976535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_2610858650(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
