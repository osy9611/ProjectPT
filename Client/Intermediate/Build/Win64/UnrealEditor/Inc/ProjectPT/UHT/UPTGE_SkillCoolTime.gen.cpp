// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/GameplayEffect/UPTGE_SkillCoolTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPTGE_SkillCoolTime() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
PROJECTPT_API UClass* Z_Construct_UClass_UUPTGE_SkillCoolTime();
PROJECTPT_API UClass* Z_Construct_UClass_UUPTGE_SkillCoolTime_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UUPTGE_SkillCoolTime
void UUPTGE_SkillCoolTime::StaticRegisterNativesUUPTGE_SkillCoolTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPTGE_SkillCoolTime);
UClass* Z_Construct_UClass_UUPTGE_SkillCoolTime_NoRegister()
{
	return UUPTGE_SkillCoolTime::StaticClass();
}
struct Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GameplayEffect/UPTGE_SkillCoolTime.h" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayEffect/UPTGE_SkillCoolTime.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPTGE_SkillCoolTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::ClassParams = {
	&UUPTGE_SkillCoolTime::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPTGE_SkillCoolTime()
{
	if (!Z_Registration_Info_UClass_UUPTGE_SkillCoolTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPTGE_SkillCoolTime.OuterSingleton, Z_Construct_UClass_UUPTGE_SkillCoolTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPTGE_SkillCoolTime.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UUPTGE_SkillCoolTime>()
{
	return UUPTGE_SkillCoolTime::StaticClass();
}
UUPTGE_SkillCoolTime::UUPTGE_SkillCoolTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPTGE_SkillCoolTime);
UUPTGE_SkillCoolTime::~UUPTGE_SkillCoolTime() {}
// End Class UUPTGE_SkillCoolTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_UPTGE_SkillCoolTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPTGE_SkillCoolTime, UUPTGE_SkillCoolTime::StaticClass, TEXT("UUPTGE_SkillCoolTime"), &Z_Registration_Info_UClass_UUPTGE_SkillCoolTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPTGE_SkillCoolTime), 3713041902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_UPTGE_SkillCoolTime_h_1944151295(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_UPTGE_SkillCoolTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_GameplayEffect_UPTGE_SkillCoolTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
