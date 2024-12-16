// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/GameModes/PTGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameState();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameState_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTExperienceManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTGameState
void APTGameState::StaticRegisterNativesAPTGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTGameState);
UClass* Z_Construct_UClass_APTGameState_NoRegister()
{
	return APTGameState::StaticClass();
}
struct Z_Construct_UClass_APTGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/PTGameState.h" },
		{ "ModuleRelativePath", "GameModes/PTGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/PTGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTGameState, ExperienceManagerComponent), Z_Construct_UClass_UPTExperienceManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceManagerComponent_MetaData), NewProp_ExperienceManagerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTGameState_Statics::NewProp_ExperienceManagerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTGameState_Statics::ClassParams = {
	&APTGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APTGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APTGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APTGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTGameState()
{
	if (!Z_Registration_Info_UClass_APTGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTGameState.OuterSingleton, Z_Construct_UClass_APTGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTGameState.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTGameState>()
{
	return APTGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTGameState);
APTGameState::~APTGameState() {}
// End Class APTGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTGameState, APTGameState::StaticClass, TEXT("APTGameState"), &Z_Registration_Info_UClass_APTGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTGameState), 785682662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameState_h_2783980216(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
