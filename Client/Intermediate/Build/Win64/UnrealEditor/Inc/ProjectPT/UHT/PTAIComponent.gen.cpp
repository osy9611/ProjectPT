// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAIComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerStart_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAIComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAIComponent Function IsAttackRange
struct Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics
{
	struct PTAIComponent_eventIsAttackRange_Parms
	{
		AActor* TargetActor;
		float DefaultAttackRange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAttackRange;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventIsAttackRange_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_DefaultAttackRange = { "DefaultAttackRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventIsAttackRange_Parms, DefaultAttackRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PTAIComponent_eventIsAttackRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTAIComponent_eventIsAttackRange_Parms), &Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_DefaultAttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAIComponent, nullptr, "IsAttackRange", nullptr, nullptr, Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PTAIComponent_eventIsAttackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::PTAIComponent_eventIsAttackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAIComponent_IsAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAIComponent_IsAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAIComponent::execIsAttackRange)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultAttackRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAttackRange(Z_Param_TargetActor,Z_Param_DefaultAttackRange);
	P_NATIVE_END;
}
// End Class UPTAIComponent Function IsAttackRange

// Begin Class UPTAIComponent Function IsTargetVisible
struct Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics
{
	struct PTAIComponent_eventIsTargetVisible_Parms
	{
		AActor* TargetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*AI Contents*/" },
#endif
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Contents" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventIsTargetVisible_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PTAIComponent_eventIsTargetVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTAIComponent_eventIsTargetVisible_Parms), &Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAIComponent, nullptr, "IsTargetVisible", nullptr, nullptr, Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PTAIComponent_eventIsTargetVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::PTAIComponent_eventIsTargetVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAIComponent_IsTargetVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAIComponent_IsTargetVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAIComponent::execIsTargetVisible)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetVisible(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class UPTAIComponent Function IsTargetVisible

// Begin Class UPTAIComponent Function ProcessAbility
struct Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics
{
	struct PTAIComponent_eventProcessAbility_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*GAS*/" },
#endif
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventProcessAbility_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAIComponent, nullptr, "ProcessAbility", nullptr, nullptr, Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PTAIComponent_eventProcessAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::PTAIComponent_eventProcessAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAIComponent_ProcessAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAIComponent_ProcessAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAIComponent::execProcessAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessAbility(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UPTAIComponent Function ProcessAbility

// Begin Class UPTAIComponent
void UPTAIComponent::StaticRegisterNativesUPTAIComponent()
{
	UClass* Class = UPTAIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAttackRange", &UPTAIComponent::execIsAttackRange },
		{ "IsTargetVisible", &UPTAIComponent::execIsTargetVisible },
		{ "ProcessAbility", &UPTAIComponent::execProcessAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAIComponent);
UClass* Z_Construct_UClass_UPTAIComponent_NoRegister()
{
	return UPTAIComponent::StaticClass();
}
struct Z_Construct_UClass_UPTAIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n * HeroCompoent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * AIComponent\xef\xbf\xbd\xef\xbf\xbd GAS \xef\xbf\xbd\xef\xbf\xbd AttributSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/PTAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\nHeroCompoent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nAIComponent\xef\xbf\xbd\xef\xbf\xbd GAS \xef\xbf\xbd\xef\xbf\xbd AttributSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStart_MetaData[] = {
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAIComponent_IsAttackRange, "IsAttackRange" }, // 9196268
		{ &Z_Construct_UFunction_UPTAIComponent_IsTargetVisible, "IsTargetVisible" }, // 2400802994
		{ &Z_Construct_UFunction_UPTAIComponent_ProcessAbility, "ProcessAbility" }, // 2601426692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPTAIComponent_Statics::NewProp_PlayerStart = { "PlayerStart", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAIComponent, PlayerStart), Z_Construct_UClass_APTPlayerStart_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStart_MetaData), NewProp_PlayerStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAIComponent_Statics::NewProp_PlayerStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPTAIComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UPTAIComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAIComponent_Statics::ClassParams = {
	&UPTAIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTAIComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAIComponent()
{
	if (!Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton, Z_Construct_UClass_UPTAIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAIComponent>()
{
	return UPTAIComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAIComponent);
UPTAIComponent::~UPTAIComponent() {}
// End Class UPTAIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAIComponent, UPTAIComponent::StaticClass, TEXT("UPTAIComponent"), &Z_Registration_Info_UClass_UPTAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAIComponent), 3954780159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_3555112951(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
