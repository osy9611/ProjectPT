// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/PTUIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTActivatableWidget_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTUIManagerSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTUIManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTUIManagerSubsystem Function HandleNotifyGameplayTag
struct Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics
{
	struct PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms
	{
		TSubclassOf<UPTActivatableWidget> ActivateWidget;
		FGameplayTag LayerName;
		FGameplayTag GameplayTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PTUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_ActivateWidget = { "ActivateWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms, ActivateWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_ActivateWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::NewProp_GameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTUIManagerSubsystem, nullptr, "HandleNotifyGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::PTUIManagerSubsystem_eventHandleNotifyGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTUIManagerSubsystem::execHandleNotifyGameplayTag)
{
	P_GET_OBJECT(UClass,Z_Param_ActivateWidget);
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleNotifyGameplayTag(Z_Param_ActivateWidget,Z_Param_LayerName,Z_Param_GameplayTag);
	P_NATIVE_END;
}
// End Class UPTUIManagerSubsystem Function HandleNotifyGameplayTag

// Begin Class UPTUIManagerSubsystem Function K2_HandleNotifyGameplayTag
struct Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics
{
	struct PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms
	{
		TSubclassOf<UPTActivatableWidget> ActivateWidget;
		FGameplayTag LayerName;
		FGameplayTag GameplayTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PTUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_ActivateWidget = { "ActivateWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms, ActivateWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_ActivateWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::NewProp_GameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTUIManagerSubsystem, nullptr, "K2_HandleNotifyGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::PTUIManagerSubsystem_eventK2_HandleNotifyGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTUIManagerSubsystem::execK2_HandleNotifyGameplayTag)
{
	P_GET_OBJECT(UClass,Z_Param_ActivateWidget);
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_HandleNotifyGameplayTag(Z_Param_ActivateWidget,Z_Param_LayerName,Z_Param_GameplayTag);
	P_NATIVE_END;
}
// End Class UPTUIManagerSubsystem Function K2_HandleNotifyGameplayTag

// Begin Class UPTUIManagerSubsystem
void UPTUIManagerSubsystem::StaticRegisterNativesUPTUIManagerSubsystem()
{
	UClass* Class = UPTUIManagerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleNotifyGameplayTag", &UPTUIManagerSubsystem::execHandleNotifyGameplayTag },
		{ "K2_HandleNotifyGameplayTag", &UPTUIManagerSubsystem::execK2_HandleNotifyGameplayTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTUIManagerSubsystem);
UClass* Z_Construct_UClass_UPTUIManagerSubsystem_NoRegister()
{
	return UPTUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PTUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/PTUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTUIManagerSubsystem_HandleNotifyGameplayTag, "HandleNotifyGameplayTag" }, // 421759503
		{ &Z_Construct_UFunction_UPTUIManagerSubsystem_K2_HandleNotifyGameplayTag, "K2_HandleNotifyGameplayTag" }, // 3401862453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUIManagerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTUIManagerSubsystem_Statics::ClassParams = {
	&UPTUIManagerSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UPTUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTUIManagerSubsystem>()
{
	return UPTUIManagerSubsystem::StaticClass();
}
UPTUIManagerSubsystem::UPTUIManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTUIManagerSubsystem);
UPTUIManagerSubsystem::~UPTUIManagerSubsystem() {}
// End Class UPTUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTUIManagerSubsystem, UPTUIManagerSubsystem::StaticClass, TEXT("UPTUIManagerSubsystem"), &Z_Registration_Info_UClass_UPTUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTUIManagerSubsystem), 2637663554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_2336942944(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
