// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Notify/PTAnimNotify_AttackHitCheck.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAnimNotify_AttackHitCheck() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimNotify_AttackHitCheck();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAnimNotify_AttackHitCheck
void UPTAnimNotify_AttackHitCheck::StaticRegisterNativesUPTAnimNotify_AttackHitCheck()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAnimNotify_AttackHitCheck);
UClass* Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_NoRegister()
{
	return UPTAnimNotify_AttackHitCheck::StaticClass();
}
struct Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AbilitySystem/Notify/PTAnimNotify_AttackHitCheck.h" },
		{ "ModuleRelativePath", "AbilitySystem/Notify/PTAnimNotify_AttackHitCheck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerGameplayTag_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "AbilitySystem/Notify/PTAnimNotify_AttackHitCheck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerGameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAnimNotify_AttackHitCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::NewProp_TriggerGameplayTag = { "TriggerGameplayTag", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTAnimNotify_AttackHitCheck, TriggerGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerGameplayTag_MetaData), NewProp_TriggerGameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::NewProp_TriggerGameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::ClassParams = {
	&UPTAnimNotify_AttackHitCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAnimNotify_AttackHitCheck()
{
	if (!Z_Registration_Info_UClass_UPTAnimNotify_AttackHitCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAnimNotify_AttackHitCheck.OuterSingleton, Z_Construct_UClass_UPTAnimNotify_AttackHitCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAnimNotify_AttackHitCheck.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAnimNotify_AttackHitCheck>()
{
	return UPTAnimNotify_AttackHitCheck::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAnimNotify_AttackHitCheck);
UPTAnimNotify_AttackHitCheck::~UPTAnimNotify_AttackHitCheck() {}
// End Class UPTAnimNotify_AttackHitCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Notify_PTAnimNotify_AttackHitCheck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAnimNotify_AttackHitCheck, UPTAnimNotify_AttackHitCheck::StaticClass, TEXT("UPTAnimNotify_AttackHitCheck"), &Z_Registration_Info_UClass_UPTAnimNotify_AttackHitCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAnimNotify_AttackHitCheck), 1518448475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Notify_PTAnimNotify_AttackHitCheck_h_4053885070(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Notify_PTAnimNotify_AttackHitCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Notify_PTAnimNotify_AttackHitCheck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
