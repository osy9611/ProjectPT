// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAI_AttributeSet() {}

// Begin Cross Module References
PROJECTPT_API UClass* Z_Construct_UClass_UPTAI_AttributeSet();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAI_AttributeSet_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAttributeSet();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAI_AttributeSet
void UPTAI_AttributeSet::StaticRegisterNativesUPTAI_AttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAI_AttributeSet);
UClass* Z_Construct_UClass_UPTAI_AttributeSet_NoRegister()
{
	return UPTAI_AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UPTAI_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AttributeSet/PTAI_AttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTAI_AttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAI_AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTAI_AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAI_AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAI_AttributeSet_Statics::ClassParams = {
	&UPTAI_AttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAI_AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAI_AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAI_AttributeSet()
{
	if (!Z_Registration_Info_UClass_UPTAI_AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAI_AttributeSet.OuterSingleton, Z_Construct_UClass_UPTAI_AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAI_AttributeSet.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAI_AttributeSet>()
{
	return UPTAI_AttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAI_AttributeSet);
UPTAI_AttributeSet::~UPTAI_AttributeSet() {}
// End Class UPTAI_AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAI_AttributeSet, UPTAI_AttributeSet::StaticClass, TEXT("UPTAI_AttributeSet"), &Z_Registration_Info_UClass_UPTAI_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAI_AttributeSet), 1080216774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_1560679865(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTAI_AttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
