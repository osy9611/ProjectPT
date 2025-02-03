// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/GameModes/PTExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTExperienceDefinition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceActionSet_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceDefinition();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceDefinition_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTExperienceDefinition
void UPTExperienceDefinition::StaticRegisterNativesUPTExperienceDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTExperienceDefinition);
UClass* Z_Construct_UClass_UPTExperienceDefinition_NoRegister()
{
	return UPTExperienceDefinition::StaticClass();
}
struct Z_Construct_UClass_UPTExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameModes/PTExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "GamePlay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[] = {
		{ "Category", "GamePlay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPTExperienceActionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSets_MetaData), NewProp_ActionSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, DefaultPawnData), Z_Construct_UClass_UPTPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_ActionSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_ActionSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultPawnData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTExperienceDefinition_Statics::ClassParams = {
	&UPTExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceDefinition_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_UPTExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTExperienceDefinition.OuterSingleton, Z_Construct_UClass_UPTExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTExperienceDefinition.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTExperienceDefinition>()
{
	return UPTExperienceDefinition::StaticClass();
}
UPTExperienceDefinition::UPTExperienceDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTExperienceDefinition);
UPTExperienceDefinition::~UPTExperienceDefinition() {}
// End Class UPTExperienceDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTExperienceDefinition, UPTExperienceDefinition::StaticClass, TEXT("UPTExperienceDefinition"), &Z_Registration_Info_UClass_UPTExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTExperienceDefinition), 4014349461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_3525041606(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
