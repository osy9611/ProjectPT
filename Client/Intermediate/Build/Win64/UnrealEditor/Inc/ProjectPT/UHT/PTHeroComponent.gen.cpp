// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTHeroComponent.h"
#include "ProjectPT/Input/PTMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTHeroComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTHeroComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTHeroComponent_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTMappableConfigPair();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTHeroComponent Function InteractionEnter
struct Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics
{
	struct PTHeroComponent_eventInteractionEnter_Parms
	{
		const AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTHeroComponent_eventInteractionEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTHeroComponent, nullptr, "InteractionEnter", nullptr, nullptr, Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PTHeroComponent_eventInteractionEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::PTHeroComponent_eventInteractionEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTHeroComponent_InteractionEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTHeroComponent_InteractionEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTHeroComponent::execInteractionEnter)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractionEnter(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class UPTHeroComponent Function InteractionEnter

// Begin Class UPTHeroComponent Function InteractionLeave
struct Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics
{
	struct PTHeroComponent_eventInteractionLeave_Parms
	{
		const AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTHeroComponent_eventInteractionLeave_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTHeroComponent, nullptr, "InteractionLeave", nullptr, nullptr, Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PTHeroComponent_eventInteractionLeave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::PTHeroComponent_eventInteractionLeave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTHeroComponent_InteractionLeave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTHeroComponent_InteractionLeave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTHeroComponent::execInteractionLeave)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractionLeave(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class UPTHeroComponent Function InteractionLeave

// Begin Class UPTHeroComponent
void UPTHeroComponent::StaticRegisterNativesUPTHeroComponent()
{
	UClass* Class = UPTHeroComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InteractionEnter", &UPTHeroComponent::execInteractionEnter },
		{ "InteractionLeave", &UPTHeroComponent::execInteractionLeave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTHeroComponent);
UClass* Z_Construct_UClass_UPTHeroComponent_NoRegister()
{
	return UPTHeroComponent::StaticClass();
}
struct Z_Construct_UClass_UPTHeroComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd, \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n * Pawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/PTHeroComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd, \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\nPawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMove_MetaData[] = {
		{ "Category", "PTHeroComponent" },
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputConfigs_MetaData[] = {
		{ "Category", "PTHeroComponent" },
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputConfigs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTHeroComponent_InteractionEnter, "InteractionEnter" }, // 4050578568
		{ &Z_Construct_UFunction_UPTHeroComponent_InteractionLeave, "InteractionLeave" }, // 2556102585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTHeroComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove_SetBit(void* Obj)
{
	((UPTHeroComponent*)Obj)->bIsMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove = { "bIsMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTHeroComponent), &Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMove_MetaData), NewProp_bIsMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTMappableConfigPair, METADATA_PARAMS(0, nullptr) }; // 1812802048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTHeroComponent, DefaultInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputConfigs_MetaData), NewProp_DefaultInputConfigs_MetaData) }; // 1812802048
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTHeroComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_AbilityCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTHeroComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTHeroComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTHeroComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPTHeroComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UPTHeroComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTHeroComponent_Statics::ClassParams = {
	&UPTHeroComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTHeroComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTHeroComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTHeroComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTHeroComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTHeroComponent()
{
	if (!Z_Registration_Info_UClass_UPTHeroComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTHeroComponent.OuterSingleton, Z_Construct_UClass_UPTHeroComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTHeroComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTHeroComponent>()
{
	return UPTHeroComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTHeroComponent);
UPTHeroComponent::~UPTHeroComponent() {}
// End Class UPTHeroComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTHeroComponent, UPTHeroComponent::StaticClass, TEXT("UPTHeroComponent"), &Z_Registration_Info_UClass_UPTHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTHeroComponent), 3517930249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_113213512(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
