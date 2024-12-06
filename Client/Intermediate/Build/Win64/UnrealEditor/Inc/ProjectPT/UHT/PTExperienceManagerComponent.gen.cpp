// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTExperienceManagerComponent() {}

// Begin Cross Module References
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceDefinition_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceManagerComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTExperienceManagerComponent
void UPTExperienceManagerComponent::StaticRegisterNativesUPTExperienceManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTExperienceManagerComponent);
UClass* Z_Construct_UClass_UPTExperienceManagerComponent_NoRegister()
{
	return UPTExperienceManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UPTExperienceManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/PTExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "GameModes/PTExperienceManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/PTExperienceManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTExperienceManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_UPTExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExperience_MetaData), NewProp_CurrentExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTExperienceManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTExperienceManagerComponent_Statics::NewProp_CurrentExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTExperienceManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTExperienceManagerComponent_Statics::ClassParams = {
	&UPTExperienceManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTExperienceManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTExperienceManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTExperienceManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTExperienceManagerComponent()
{
	if (!Z_Registration_Info_UClass_UPTExperienceManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_UPTExperienceManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTExperienceManagerComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTExperienceManagerComponent>()
{
	return UPTExperienceManagerComponent::StaticClass();
}
UPTExperienceManagerComponent::UPTExperienceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTExperienceManagerComponent);
UPTExperienceManagerComponent::~UPTExperienceManagerComponent() {}
// End Class UPTExperienceManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTExperienceManagerComponent, UPTExperienceManagerComponent::StaticClass, TEXT("UPTExperienceManagerComponent"), &Z_Registration_Info_UClass_UPTExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTExperienceManagerComponent), 3315553620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_1113373283(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
