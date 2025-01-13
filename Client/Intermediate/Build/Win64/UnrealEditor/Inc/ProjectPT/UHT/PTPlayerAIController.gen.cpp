// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Player/PTPlayerAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPlayerAIController() {}

// Begin Cross Module References
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerAIController();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTPlayerAIController
void APTPlayerAIController::StaticRegisterNativesAPTPlayerAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTPlayerAIController);
UClass* Z_Construct_UClass_APTPlayerAIController_NoRegister()
{
	return APTPlayerAIController::StaticClass();
}
struct Z_Construct_UClass_APTPlayerAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PTPlayerAIController.h" },
		{ "ModuleRelativePath", "Player/PTPlayerAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTPlayerAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APTPlayerAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTPlayerAIController_Statics::ClassParams = {
	&APTPlayerAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APTPlayerAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTPlayerAIController()
{
	if (!Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton, Z_Construct_UClass_APTPlayerAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTPlayerAIController.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTPlayerAIController>()
{
	return APTPlayerAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTPlayerAIController);
APTPlayerAIController::~APTPlayerAIController() {}
// End Class APTPlayerAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTPlayerAIController, APTPlayerAIController::StaticClass, TEXT("APTPlayerAIController"), &Z_Registration_Info_UClass_APTPlayerAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTPlayerAIController), 408294461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_4181530799(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTPlayerAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
