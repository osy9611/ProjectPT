// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/System/PTCommonSessionSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCommonSessionSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonSessionSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCommonSessionSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCommonSessionSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTCommonSessionSubsystem Function MoveSessionByTableID
struct Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics
{
	struct PTCommonSessionSubsystem_eventMoveSessionByTableID_Parms
	{
		int32 TableNo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/PTCommonSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableNo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::NewProp_TableNo = { "TableNo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTCommonSessionSubsystem_eventMoveSessionByTableID_Parms, TableNo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::NewProp_TableNo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTCommonSessionSubsystem, nullptr, "MoveSessionByTableID", nullptr, nullptr, Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PTCommonSessionSubsystem_eventMoveSessionByTableID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::PTCommonSessionSubsystem_eventMoveSessionByTableID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTCommonSessionSubsystem::execMoveSessionByTableID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TableNo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveSessionByTableID(Z_Param_TableNo);
	P_NATIVE_END;
}
// End Class UPTCommonSessionSubsystem Function MoveSessionByTableID

// Begin Class UPTCommonSessionSubsystem
void UPTCommonSessionSubsystem::StaticRegisterNativesUPTCommonSessionSubsystem()
{
	UClass* Class = UPTCommonSessionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveSessionByTableID", &UPTCommonSessionSubsystem::execMoveSessionByTableID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCommonSessionSubsystem);
UClass* Z_Construct_UClass_UPTCommonSessionSubsystem_NoRegister()
{
	return UPTCommonSessionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTCommonSessionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/PTCommonSessionSubsystem.h" },
		{ "ModuleRelativePath", "System/PTCommonSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTCommonSessionSubsystem_MoveSessionByTableID, "MoveSessionByTableID" }, // 706247642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCommonSessionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonSessionSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::ClassParams = {
	&UPTCommonSessionSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCommonSessionSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTCommonSessionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCommonSessionSubsystem.OuterSingleton, Z_Construct_UClass_UPTCommonSessionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCommonSessionSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCommonSessionSubsystem>()
{
	return UPTCommonSessionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCommonSessionSubsystem);
UPTCommonSessionSubsystem::~UPTCommonSessionSubsystem() {}
// End Class UPTCommonSessionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTCommonSessionSubsystem, UPTCommonSessionSubsystem::StaticClass, TEXT("UPTCommonSessionSubsystem"), &Z_Registration_Info_UClass_UPTCommonSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCommonSessionSubsystem), 2638352547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_622860838(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
