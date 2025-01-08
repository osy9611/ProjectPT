// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/GameModes/PTSceneData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTSceneData() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UMoveSessionData_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PROJECTPT_API UClass* Z_Construct_UClass_UPTSceneData();
PROJECTPT_API UClass* Z_Construct_UClass_UPTSceneData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTSceneData Function CreateMoveSessionData
struct Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics
{
	struct PTSceneData_eventCreateMoveSessionData_Parms
	{
		UMoveSessionData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/PTSceneData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTSceneData_eventCreateMoveSessionData_Parms, ReturnValue), Z_Construct_UClass_UMoveSessionData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTSceneData, nullptr, "CreateMoveSessionData", nullptr, nullptr, Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PTSceneData_eventCreateMoveSessionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::PTSceneData_eventCreateMoveSessionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTSceneData::execCreateMoveSessionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMoveSessionData**)Z_Param__Result=P_THIS->CreateMoveSessionData();
	P_NATIVE_END;
}
// End Class UPTSceneData Function CreateMoveSessionData

// Begin Class UPTSceneData
void UPTSceneData::StaticRegisterNativesUPTSceneData()
{
	UClass* Class = UPTSceneData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMoveSessionData", &UPTSceneData::execCreateMoveSessionData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTSceneData);
UClass* Z_Construct_UClass_UPTSceneData_NoRegister()
{
	return UPTSceneData::StaticClass();
}
struct Z_Construct_UClass_UPTSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameModes/PTSceneData.h" },
		{ "ModuleRelativePath", "GameModes/PTSceneData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
		{ "ModuleRelativePath", "GameModes/PTSceneData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperinceID_MetaData[] = {
		{ "AllowedTypes", "PTExperienceDefinition" },
		{ "Category", "Experience" },
		{ "ModuleRelativePath", "GameModes/PTSceneData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperinceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTSceneData_CreateMoveSessionData, "CreateMoveSessionData" }, // 471559855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTSceneData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTSceneData_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTSceneData, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTSceneData_Statics::NewProp_ExperinceID = { "ExperinceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTSceneData, ExperinceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperinceID_MetaData), NewProp_ExperinceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTSceneData_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTSceneData_Statics::NewProp_ExperinceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTSceneData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTSceneData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTSceneData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTSceneData_Statics::ClassParams = {
	&UPTSceneData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTSceneData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTSceneData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTSceneData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTSceneData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTSceneData()
{
	if (!Z_Registration_Info_UClass_UPTSceneData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTSceneData.OuterSingleton, Z_Construct_UClass_UPTSceneData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTSceneData.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTSceneData>()
{
	return UPTSceneData::StaticClass();
}
UPTSceneData::UPTSceneData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTSceneData);
UPTSceneData::~UPTSceneData() {}
// End Class UPTSceneData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTSceneData, UPTSceneData::StaticClass, TEXT("UPTSceneData"), &Z_Registration_Info_UClass_UPTSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTSceneData), 1210791380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_3755946998(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
