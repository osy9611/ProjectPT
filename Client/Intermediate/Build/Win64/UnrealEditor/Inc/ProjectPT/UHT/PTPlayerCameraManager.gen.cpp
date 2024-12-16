// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Camera/PTPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerCameraManager();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTPlayerCameraManager
void APTPlayerCameraManager::StaticRegisterNativesAPTPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTPlayerCameraManager);
UClass* Z_Construct_UClass_APTPlayerCameraManager_NoRegister()
{
	return APTPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_APTPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/PTPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/PTPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APTPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTPlayerCameraManager_Statics::ClassParams = {
	&APTPlayerCameraManager::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APTPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_APTPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTPlayerCameraManager.OuterSingleton, Z_Construct_UClass_APTPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTPlayerCameraManager.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTPlayerCameraManager>()
{
	return APTPlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTPlayerCameraManager);
APTPlayerCameraManager::~APTPlayerCameraManager() {}
// End Class APTPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTPlayerCameraManager, APTPlayerCameraManager::StaticClass, TEXT("APTPlayerCameraManager"), &Z_Registration_Info_UClass_APTPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTPlayerCameraManager), 3271653381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTPlayerCameraManager_h_3897207879(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
