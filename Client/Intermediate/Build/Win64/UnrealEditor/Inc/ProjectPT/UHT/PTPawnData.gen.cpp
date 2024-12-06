// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPawnData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilitySet_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTInputConfig_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnData();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTPawnData
void UPTPawnData::StaticRegisterNativesUPTPawnData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTPawnData);
UClass* Z_Construct_UClass_UPTPawnData_NoRegister()
{
	return UPTPawnData::StaticClass();
}
struct Z_Construct_UClass_UPTPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Character/PTPawnData.h" },
		{ "ModuleRelativePath", "Character/PTPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/PTPawnData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Character/PTPawnData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Character/PTPawnData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/PTPawnData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPTPawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnData, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnData, InputConfig), Z_Construct_UClass_UPTInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTPawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPTAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTPawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySets_MetaData), NewProp_AbilitySets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnData_Statics::NewProp_DefaultCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnData_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnData_Statics::NewProp_AbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnData_Statics::NewProp_AbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTPawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTPawnData_Statics::ClassParams = {
	&UPTPawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTPawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTPawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTPawnData()
{
	if (!Z_Registration_Info_UClass_UPTPawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTPawnData.OuterSingleton, Z_Construct_UClass_UPTPawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTPawnData.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTPawnData>()
{
	return UPTPawnData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTPawnData);
UPTPawnData::~UPTPawnData() {}
// End Class UPTPawnData

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTPawnData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTPawnData, UPTPawnData::StaticClass, TEXT("UPTPawnData"), &Z_Registration_Info_UClass_UPTPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTPawnData), 1581942578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTPawnData_h_2459720058(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
