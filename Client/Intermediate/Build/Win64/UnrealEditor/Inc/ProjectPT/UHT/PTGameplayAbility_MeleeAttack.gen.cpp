// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_MeleeAttack() {}

// Begin Cross Module References
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameplayAbility_MeleeAttack
void UPTGameplayAbility_MeleeAttack::StaticRegisterNativesUPTGameplayAbility_MeleeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_MeleeAttack);
UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_NoRegister()
{
	return UPTGameplayAbility_MeleeAttack::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_MeleeAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::ClassParams = {
	&UPTGameplayAbility_MeleeAttack::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_MeleeAttack>()
{
	return UPTGameplayAbility_MeleeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_MeleeAttack);
UPTGameplayAbility_MeleeAttack::~UPTGameplayAbility_MeleeAttack() {}
// End Class UPTGameplayAbility_MeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_MeleeAttack, UPTGameplayAbility_MeleeAttack::StaticClass, TEXT("UPTGameplayAbility_MeleeAttack"), &Z_Registration_Info_UClass_UPTGameplayAbility_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_MeleeAttack), 2841143272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_1015998545(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_MeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
