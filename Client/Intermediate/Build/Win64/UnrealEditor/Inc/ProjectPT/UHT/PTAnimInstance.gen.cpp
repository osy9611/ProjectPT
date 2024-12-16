// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Animation/PTAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAnimInstance
void UPTAnimInstance::StaticRegisterNativesUPTAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAnimInstance);
UClass* Z_Construct_UClass_UPTAnimInstance_NoRegister()
{
	return UPTAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPTAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/PTAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/PTAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAnimInstance_Statics::ClassParams = {
	&UPTAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton, Z_Construct_UClass_UPTAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAnimInstance>()
{
	return UPTAnimInstance::StaticClass();
}
UPTAnimInstance::UPTAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAnimInstance);
UPTAnimInstance::~UPTAnimInstance() {}
// End Class UPTAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAnimInstance, UPTAnimInstance::StaticClass, TEXT("UPTAnimInstance"), &Z_Registration_Info_UClass_UPTAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAnimInstance), 1856457494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_3169390451(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
