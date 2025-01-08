// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonSessionSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonSessionSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonSessionSubsystem();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UMoveSessionData();
COMMONGAME_API UClass* Z_Construct_UClass_UMoveSessionData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UMoveSessionData
void UMoveSessionData::StaticRegisterNativesUMoveSessionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveSessionData);
UClass* Z_Construct_UClass_UMoveSessionData_NoRegister()
{
	return UMoveSessionData::StaticClass();
}
struct Z_Construct_UClass_UMoveSessionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Session" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveSessionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveSessionData_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveSessionData, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveSessionData, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraArgs_MetaData), NewProp_ExtraArgs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveSessionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveSessionData_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveSessionData_Statics::NewProp_ExtraArgs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveSessionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoveSessionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveSessionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveSessionData_Statics::ClassParams = {
	&UMoveSessionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoveSessionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoveSessionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveSessionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveSessionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoveSessionData()
{
	if (!Z_Registration_Info_UClass_UMoveSessionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveSessionData.OuterSingleton, Z_Construct_UClass_UMoveSessionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoveSessionData.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UMoveSessionData>()
{
	return UMoveSessionData::StaticClass();
}
UMoveSessionData::UMoveSessionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveSessionData);
UMoveSessionData::~UMoveSessionData() {}
// End Class UMoveSessionData

// Begin Class UCommonSessionSubsystem Function MoveSession
struct Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics
{
	struct CommonSessionSubsystem_eventMoveSession_Parms
	{
		APlayerController* PlayerController;
		UMoveSessionData* SessionData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonSessionSubsystem_eventMoveSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::NewProp_SessionData = { "SessionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonSessionSubsystem_eventMoveSession_Parms, SessionData), Z_Construct_UClass_UMoveSessionData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::NewProp_SessionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "MoveSession", nullptr, nullptr, Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::CommonSessionSubsystem_eventMoveSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::CommonSessionSubsystem_eventMoveSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonSessionSubsystem::execMoveSession)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UMoveSessionData,Z_Param_SessionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveSession(Z_Param_PlayerController,Z_Param_SessionData);
	P_NATIVE_END;
}
// End Class UCommonSessionSubsystem Function MoveSession

// Begin Class UCommonSessionSubsystem
void UCommonSessionSubsystem::StaticRegisterNativesUCommonSessionSubsystem()
{
	UClass* Class = UCommonSessionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveSession", &UCommonSessionSubsystem::execMoveSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonSessionSubsystem);
UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister()
{
	return UCommonSessionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCommonSessionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_MoveSession, "MoveSession" }, // 383103852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonSessionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCommonSessionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonSessionSubsystem_Statics::ClassParams = {
	&UCommonSessionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonSessionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonSessionSubsystem()
{
	if (!Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton, Z_Construct_UClass_UCommonSessionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UCommonSessionSubsystem>()
{
	return UCommonSessionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonSessionSubsystem);
UCommonSessionSubsystem::~UCommonSessionSubsystem() {}
// End Class UCommonSessionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoveSessionData, UMoveSessionData::StaticClass, TEXT("UMoveSessionData"), &Z_Registration_Info_UClass_UMoveSessionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveSessionData), 3582563341U) },
		{ Z_Construct_UClass_UCommonSessionSubsystem, UCommonSessionSubsystem::StaticClass, TEXT("UCommonSessionSubsystem"), &Z_Registration_Info_UClass_UCommonSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonSessionSubsystem), 2245559497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_4074897107(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
