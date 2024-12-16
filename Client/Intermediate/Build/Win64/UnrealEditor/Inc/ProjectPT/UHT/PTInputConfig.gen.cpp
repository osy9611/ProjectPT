// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Input/PTInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTInputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTInputConfig();
PROJECTPT_API UClass* Z_Construct_UClass_UPTInputConfig_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPTInputAction();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FPTInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTInputAction;
class UScriptStruct* FPTInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTInputAction, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PTInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_PTInputAction.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPTInputAction>()
{
	return FPTInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "PTInputAction" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "PTInputAction" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPTInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPTInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"PTInputAction",
	Z_Construct_UScriptStruct_FPTInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTInputAction_Statics::PropPointers),
	sizeof(FPTInputAction),
	alignof(FPTInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_PTInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTInputAction.InnerSingleton, Z_Construct_UScriptStruct_FPTInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTInputAction.InnerSingleton;
}
// End ScriptStruct FPTInputAction

// Begin Class UPTInputConfig
void UPTInputConfig::StaticRegisterNativesUPTInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTInputConfig);
UClass* Z_Construct_UClass_UPTInputConfig_NoRegister()
{
	return UPTInputConfig::StaticClass();
}
struct Z_Construct_UClass_UPTInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Input/PTInputConfig.h" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "PTInputConfig" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
		{ "TitleProperty", "InputAction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "PTInputConfig" },
		{ "ModuleRelativePath", "Input/PTInputConfig.h" },
		{ "TitleProperty", "InputAction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTInputAction, METADATA_PARAMS(0, nullptr) }; // 2254772067
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 2254772067
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTInputAction, METADATA_PARAMS(0, nullptr) }; // 2254772067
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 2254772067
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTInputConfig_Statics::ClassParams = {
	&UPTInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTInputConfig()
{
	if (!Z_Registration_Info_UClass_UPTInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTInputConfig.OuterSingleton, Z_Construct_UClass_UPTInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTInputConfig.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTInputConfig>()
{
	return UPTInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTInputConfig);
UPTInputConfig::~UPTInputConfig() {}
// End Class UPTInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPTInputAction::StaticStruct, Z_Construct_UScriptStruct_FPTInputAction_Statics::NewStructOps, TEXT("PTInputAction"), &Z_Registration_Info_UScriptStruct_PTInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTInputAction), 2254772067U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTInputConfig, UPTInputConfig::StaticClass, TEXT("UPTInputConfig"), &Z_Registration_Info_UClass_UPTInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTInputConfig), 2717184307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_1427711296(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Input_PTInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
