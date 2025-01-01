// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/GameplayEffect/PTGE_AttackDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGE_AttackDamage() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGE_AttackDamage();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGE_AttackDamage_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGE_AttackDamage
void UPTGE_AttackDamage::StaticRegisterNativesUPTGE_AttackDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGE_AttackDamage);
UClass* Z_Construct_UClass_UPTGE_AttackDamage_NoRegister()
{
	return UPTGE_AttackDamage::StaticClass();
}
struct Z_Construct_UClass_UPTGE_AttackDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GameplayEffect/PTGE_AttackDamage.h" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayEffect/PTGE_AttackDamage.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGE_AttackDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGE_AttackDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGE_AttackDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGE_AttackDamage_Statics::ClassParams = {
	&UPTGE_AttackDamage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGE_AttackDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGE_AttackDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGE_AttackDamage()
{
	if (!Z_Registration_Info_UClass_UPTGE_AttackDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGE_AttackDamage.OuterSingleton, Z_Construct_UClass_UPTGE_AttackDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGE_AttackDamage.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGE_AttackDamage>()
{
	return UPTGE_AttackDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGE_AttackDamage);
UPTGE_AttackDamage::~UPTGE_AttackDamage() {}
// End Class UPTGE_AttackDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_PTGE_AttackDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGE_AttackDamage, UPTGE_AttackDamage::StaticClass, TEXT("UPTGE_AttackDamage"), &Z_Registration_Info_UClass_UPTGE_AttackDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGE_AttackDamage), 3469724658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_PTGE_AttackDamage_h_428986503(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_PTGE_AttackDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_PTGE_AttackDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
