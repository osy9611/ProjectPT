// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonUserWidgetBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserWidgetBase() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUserWidgetBase();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUserWidgetBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UCommonUserWidgetBase Function RegisterLayer
struct Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics
{
	struct CommonUserWidgetBase_eventRegisterLayer_Parms
	{
		FGameplayTag LayerTag;
		UCommonActivatableWidgetContainerBase* LayerWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::NewProp_LayerTag = { "LayerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUserWidgetBase_eventRegisterLayer_Parms, LayerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::NewProp_LayerWidget = { "LayerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUserWidgetBase_eventRegisterLayer_Parms, LayerWidget), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerWidget_MetaData), NewProp_LayerWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::NewProp_LayerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::NewProp_LayerWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserWidgetBase, nullptr, "RegisterLayer", nullptr, nullptr, Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::CommonUserWidgetBase_eventRegisterLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::CommonUserWidgetBase_eventRegisterLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonUserWidgetBase::execRegisterLayer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_LayerWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterLayer(Z_Param_LayerTag,Z_Param_LayerWidget);
	P_NATIVE_END;
}
// End Class UCommonUserWidgetBase Function RegisterLayer

// Begin Class UCommonUserWidgetBase
void UCommonUserWidgetBase::StaticRegisterNativesUCommonUserWidgetBase()
{
	UClass* Class = UCommonUserWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterLayer", &UCommonUserWidgetBase::execRegisterLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUserWidgetBase);
UClass* Z_Construct_UClass_UCommonUserWidgetBase_NoRegister()
{
	return UCommonUserWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UCommonUserWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonUserWidgetBase.h" },
		{ "ModuleRelativePath", "Public/CommonUserWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUserWidgetBase_RegisterLayer, "RegisterLayer" }, // 2012707459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers_ValueProp = { "Layers", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers_Key_KeyProp = { "Layers_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0114008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidgetBase, Layers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidgetBase_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommonUserWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserWidgetBase_Statics::ClassParams = {
	&UCommonUserWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCommonUserWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonUserWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonUserWidgetBase()
{
	if (!Z_Registration_Info_UClass_UCommonUserWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserWidgetBase.OuterSingleton, Z_Construct_UClass_UCommonUserWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonUserWidgetBase.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UCommonUserWidgetBase>()
{
	return UCommonUserWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserWidgetBase);
UCommonUserWidgetBase::~UCommonUserWidgetBase() {}
// End Class UCommonUserWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserWidgetBase, UCommonUserWidgetBase::StaticClass, TEXT("UCommonUserWidgetBase"), &Z_Registration_Info_UClass_UCommonUserWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserWidgetBase), 1764020412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_3159801076(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
