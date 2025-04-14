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
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTHeroComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTHeroComponent_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTMappableConfigPair();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTHeroComponent Function RegisterInteractionComponent
struct Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics
{
	struct PTHeroComponent_eventRegisterInteractionComponent_Parms
	{
		UInteractionComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTHeroComponent_eventRegisterInteractionComponent_Parms, Component), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTHeroComponent, nullptr, "RegisterInteractionComponent", nullptr, nullptr, Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PTHeroComponent_eventRegisterInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::PTHeroComponent_eventRegisterInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTHeroComponent::execRegisterInteractionComponent)
{
	P_GET_OBJECT(UInteractionComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterInteractionComponent(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UPTHeroComponent Function RegisterInteractionComponent

// Begin Class UPTHeroComponent Function SendInteractionUIMessage
struct Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics
{
	struct PTHeroComponent_eventSendInteractionUIMessage_Parms
	{
		bool IsActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((PTHeroComponent_eventSendInteractionUIMessage_Parms*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTHeroComponent_eventSendInteractionUIMessage_Parms), &Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::NewProp_IsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTHeroComponent, nullptr, "SendInteractionUIMessage", nullptr, nullptr, Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PTHeroComponent_eventSendInteractionUIMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::PTHeroComponent_eventSendInteractionUIMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTHeroComponent::execSendInteractionUIMessage)
{
	P_GET_UBOOL(Z_Param_IsActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendInteractionUIMessage(Z_Param_IsActive);
	P_NATIVE_END;
}
// End Class UPTHeroComponent Function SendInteractionUIMessage

// Begin Class UPTHeroComponent
void UPTHeroComponent::StaticRegisterNativesUPTHeroComponent()
{
	UClass* Class = UPTHeroComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterInteractionComponent", &UPTHeroComponent::execRegisterInteractionComponent },
		{ "SendInteractionUIMessage", &UPTHeroComponent::execSendInteractionUIMessage },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PTHeroComponent.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static void NewProp_bIsMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputConfigs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTHeroComponent_RegisterInteractionComponent, "RegisterInteractionComponent" }, // 115021872
		{ &Z_Construct_UFunction_UPTHeroComponent_SendInteractionUIMessage, "SendInteractionUIMessage" }, // 822867643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTHeroComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTHeroComponent, InteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
void Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove_SetBit(void* Obj)
{
	((UPTHeroComponent*)Obj)->bIsMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove = { "bIsMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTHeroComponent), &Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_bIsMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMove_MetaData), NewProp_bIsMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTMappableConfigPair, METADATA_PARAMS(0, nullptr) }; // 1812802048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_DefaultInputConfigs = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTHeroComponent, DefaultInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputConfigs_MetaData), NewProp_DefaultInputConfigs_MetaData) }; // 1812802048
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTHeroComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTHeroComponent_Statics::NewProp_InteractionComponent,
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
		{ Z_Construct_UClass_UPTHeroComponent, UPTHeroComponent::StaticClass, TEXT("UPTHeroComponent"), &Z_Registration_Info_UClass_UPTHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTHeroComponent), 1041724136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_885217836(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
