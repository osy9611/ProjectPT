// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Player/PTPlayerAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPlayerAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerAIController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTPlayerAIController Function IsTargetVisible
struct Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics
{
	struct PTPlayerAIController_eventIsTargetVisible_Parms
	{
		AActor* TargetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPlayerAIController_eventIsTargetVisible_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PTPlayerAIController_eventIsTargetVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTPlayerAIController_eventIsTargetVisible_Parms), &Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APTPlayerAIController, nullptr, "IsTargetVisible", nullptr, nullptr, Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PTPlayerAIController_eventIsTargetVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::PTPlayerAIController_eventIsTargetVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APTPlayerAIController::execIsTargetVisible)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetVisible(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class APTPlayerAIController Function IsTargetVisible

// Begin Class APTPlayerAIController Function OnTargetPerceptionUpdated
struct Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics
{
	struct PTPlayerAIController_eventOnTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPlayerAIController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPlayerAIController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APTPlayerAIController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PTPlayerAIController_eventOnTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::PTPlayerAIController_eventOnTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APTPlayerAIController::execOnTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class APTPlayerAIController Function OnTargetPerceptionUpdated

// Begin Class APTPlayerAIController
void APTPlayerAIController::StaticRegisterNativesAPTPlayerAIController()
{
	UClass* Class = APTPlayerAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsTargetVisible", &APTPlayerAIController::execIsTargetVisible },
		{ "OnTargetPerceptionUpdated", &APTPlayerAIController::execOnTargetPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTPlayerAIController);
UClass* Z_Construct_UClass_APTPlayerAIController_NoRegister()
{
	return APTPlayerAIController::StaticClass();
}
struct Z_Construct_UClass_APTPlayerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PTPlayerAIController.h" },
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTableData_MetaData[] = {
		{ "Category", "UseTableData" },
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "SearchRadius" },
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseTableData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTableData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APTPlayerAIController_IsTargetVisible, "IsTargetVisible" }, // 1981682330
		{ &Z_Construct_UFunction_APTPlayerAIController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 2492387834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTPlayerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_UseTableData_SetBit(void* Obj)
{
	((APTPlayerAIController*)Obj)->UseTableData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_UseTableData = { "UseTableData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APTPlayerAIController), &Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_UseTableData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTableData_MetaData), NewProp_UseTableData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTPlayerAIController, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTPlayerAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTPlayerAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_UseTableData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTPlayerAIController_Statics::NewProp_AIPerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTPlayerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTPlayerAIController_Statics::ClassParams = {
	&APTPlayerAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APTPlayerAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APTPlayerAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTPlayerAIController()
{
	if (!Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton, Z_Construct_UClass_APTPlayerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTPlayerAIController>()
{
	return APTPlayerAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTPlayerAIController);
APTPlayerAIController::~APTPlayerAIController() {}
// End Class APTPlayerAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTPlayerAIController, APTPlayerAIController::StaticClass, TEXT("APTPlayerAIController"), &Z_Registration_Info_UClass_APTPlayerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTPlayerAIController), 2339374546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_3427545876(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
