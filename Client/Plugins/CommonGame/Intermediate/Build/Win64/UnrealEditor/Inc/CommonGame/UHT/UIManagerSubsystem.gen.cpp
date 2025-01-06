// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/UIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUserWidgetBase_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem();
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UUIManagerSubsystem Function CreateWidgetClass
struct Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics
{
	struct UIManagerSubsystem_eventCreateWidgetClass_Parms
	{
		FGameplayTag LayerName;
		UCommonActivatableWidget* ActivatableWidgetClass;
		UCommonActivatableWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidgetClass_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerSubsystem_eventCreateWidgetClass_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerSubsystem_eventCreateWidgetClass_Parms, ActivatableWidgetClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatableWidgetClass_MetaData), NewProp_ActivatableWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManagerSubsystem_eventCreateWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_ActivatableWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManagerSubsystem, nullptr, "CreateWidgetClass", nullptr, nullptr, Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::UIManagerSubsystem_eventCreateWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::UIManagerSubsystem_eventCreateWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManagerSubsystem::execCreateWidgetClass)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
	P_GET_OBJECT(UCommonActivatableWidget,Z_Param_ActivatableWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonActivatableWidget**)Z_Param__Result=P_THIS->CreateWidgetClass(Z_Param_LayerName,Z_Param_ActivatableWidgetClass);
	P_NATIVE_END;
}
// End Class UUIManagerSubsystem Function CreateWidgetClass

// Begin Class UUIManagerSubsystem
void UUIManagerSubsystem::StaticRegisterNativesUUIManagerSubsystem()
{
	UClass* Class = UUIManagerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateWidgetClass", &UUIManagerSubsystem::execCreateWidgetClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManagerSubsystem);
UClass* Z_Construct_UClass_UUIManagerSubsystem_NoRegister()
{
	return UUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UIManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefualtWidget_MetaData[] = {
		{ "Category", "UIManagerSubsystem" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefualtWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIManagerSubsystem_CreateWidgetClass, "CreateWidgetClass" }, // 3059405942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidgetClass = { "CurrentWidgetClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, CurrentWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidgetClass_MetaData), NewProp_CurrentWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, CurrentWidget), Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_DefualtWidget = { "DefualtWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, DefualtWidget), Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefualtWidget_MetaData), NewProp_DefualtWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_DefualtWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManagerSubsystem_Statics::ClassParams = {
	&UUIManagerSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UUIManagerSubsystem>()
{
	return UUIManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManagerSubsystem);
UUIManagerSubsystem::~UUIManagerSubsystem() {}
// End Class UUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManagerSubsystem, UUIManagerSubsystem::StaticClass, TEXT("UUIManagerSubsystem"), &Z_Registration_Info_UClass_UUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManagerSubsystem), 2346420991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_762351512(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
