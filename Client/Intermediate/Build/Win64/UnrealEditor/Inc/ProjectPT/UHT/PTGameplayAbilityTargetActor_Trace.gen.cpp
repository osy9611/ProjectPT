// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/PTGameplayAbilityTargetActor_Trace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbilityTargetActor_Trace() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace();
PROJECTPT_API UClass* Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTGameplayAbilityTargetActor_Trace
void APTGameplayAbilityTargetActor_Trace::StaticRegisterNativesAPTGameplayAbilityTargetActor_Trace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTGameplayAbilityTargetActor_Trace);
UClass* Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_NoRegister()
{
	return APTGameplayAbilityTargetActor_Trace::StaticClass();
}
struct Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/PTGameplayAbilityTargetActor_Trace.h" },
		{ "ModuleRelativePath", "AbilitySystem/PTGameplayAbilityTargetActor_Trace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTGameplayAbilityTargetActor_Trace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::ClassParams = {
	&APTGameplayAbilityTargetActor_Trace::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams), Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace()
{
	if (!Z_Registration_Info_UClass_APTGameplayAbilityTargetActor_Trace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTGameplayAbilityTargetActor_Trace.OuterSingleton, Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTGameplayAbilityTargetActor_Trace.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTGameplayAbilityTargetActor_Trace>()
{
	return APTGameplayAbilityTargetActor_Trace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTGameplayAbilityTargetActor_Trace);
APTGameplayAbilityTargetActor_Trace::~APTGameplayAbilityTargetActor_Trace() {}
// End Class APTGameplayAbilityTargetActor_Trace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetActor_Trace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTGameplayAbilityTargetActor_Trace, APTGameplayAbilityTargetActor_Trace::StaticClass, TEXT("APTGameplayAbilityTargetActor_Trace"), &Z_Registration_Info_UClass_APTGameplayAbilityTargetActor_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTGameplayAbilityTargetActor_Trace), 3165055048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetActor_Trace_h_841304759(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetActor_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_PTGameplayAbilityTargetActor_Trace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
