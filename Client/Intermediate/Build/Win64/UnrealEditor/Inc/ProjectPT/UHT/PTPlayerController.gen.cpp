// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Player/PTPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPlayerController() {}

// Begin Cross Module References
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTPlayerController
void APTPlayerController::StaticRegisterNativesAPTPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTPlayerController);
UClass* Z_Construct_UClass_APTPlayerController_NoRegister()
{
	return APTPlayerController::StaticClass();
}
struct Z_Construct_UClass_APTPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PTPlayerController.h" },
		{ "ModuleRelativePath", "Player/PTPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APTPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTPlayerController_Statics::ClassParams = {
	&APTPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APTPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTPlayerController()
{
	if (!Z_Registration_Info_UClass_APTPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTPlayerController.OuterSingleton, Z_Construct_UClass_APTPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTPlayerController.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTPlayerController>()
{
	return APTPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTPlayerController);
APTPlayerController::~APTPlayerController() {}
// End Class APTPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Player_PTPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTPlayerController, APTPlayerController::StaticClass, TEXT("APTPlayerController"), &Z_Registration_Info_UClass_APTPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTPlayerController), 1422634851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Player_PTPlayerController_h_3359381330(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Player_PTPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Player_PTPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
