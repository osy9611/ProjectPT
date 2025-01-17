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
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceDefinition();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceDefinition_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnData_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTWidgetData_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameModes/PTExperienceDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultWidgetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPawnData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, DefaultPawnData), Z_Construct_UClass_UPTPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultWidgetData = { "DefaultWidgetData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, DefaultWidgetData), Z_Construct_UClass_UPTWidgetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWidgetData_MetaData), NewProp_DefaultWidgetData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_AIPawnData = { "AIPawnData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceDefinition, AIPawnData), Z_Construct_UClass_UPTPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPawnData_MetaData), NewProp_AIPawnData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_DefaultWidgetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceDefinition_Statics::NewProp_AIPawnData,
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
	0x001000A0u,
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
		{ Z_Construct_UClass_UPTExperienceDefinition, UPTExperienceDefinition::StaticClass, TEXT("UPTExperienceDefinition"), &Z_Registration_Info_UClass_UPTExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTExperienceDefinition), 4215352397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_3579363273(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
