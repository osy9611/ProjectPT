// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameModeBase();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTGameModeBase
void APTGameModeBase::StaticRegisterNativesAPTGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTGameModeBase);
UClass* Z_Construct_UClass_APTGameModeBase_NoRegister()
{
	return APTGameModeBase::StaticClass();
}
struct Z_Construct_UClass_APTGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/PTGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/PTGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APTGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTGameModeBase_Statics::ClassParams = {
	&APTGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APTGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTGameModeBase()
{
	if (!Z_Registration_Info_UClass_APTGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTGameModeBase.OuterSingleton, Z_Construct_UClass_APTGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTGameModeBase.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTGameModeBase>()
{
	return APTGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTGameModeBase);
APTGameModeBase::~APTGameModeBase() {}
// End Class APTGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTGameModeBase, APTGameModeBase::StaticClass, TEXT("APTGameModeBase"), &Z_Registration_Info_UClass_APTGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTGameModeBase), 4205333183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_337066910(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_GameModes_PTGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
