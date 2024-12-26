// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTCharacter_AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCharacter_AttributeSet() {}

// Begin Cross Module References
PROJECTPT_API UClass* Z_Construct_UClass_UPTAttributeSet();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCharacter_AttributeSet();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCharacter_AttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTCharacter_AttributeSet
void UPTCharacter_AttributeSet::StaticRegisterNativesUPTCharacter_AttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCharacter_AttributeSet);
UClass* Z_Construct_UClass_UPTCharacter_AttributeSet_NoRegister()
{
	return UPTCharacter_AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UPTCharacter_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AttributeSet/PTCharacter_AttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSet/PTCharacter_AttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCharacter_AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::ClassParams = {
	&UPTCharacter_AttributeSet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCharacter_AttributeSet()
{
	if (!Z_Registration_Info_UClass_UPTCharacter_AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCharacter_AttributeSet.OuterSingleton, Z_Construct_UClass_UPTCharacter_AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCharacter_AttributeSet.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCharacter_AttributeSet>()
{
	return UPTCharacter_AttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCharacter_AttributeSet);
UPTCharacter_AttributeSet::~UPTCharacter_AttributeSet() {}
// End Class UPTCharacter_AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTCharacter_AttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTCharacter_AttributeSet, UPTCharacter_AttributeSet::StaticClass, TEXT("UPTCharacter_AttributeSet"), &Z_Registration_Info_UClass_UPTCharacter_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCharacter_AttributeSet), 3405697569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTCharacter_AttributeSet_h_3808724680(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTCharacter_AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_AttributeSet_PTCharacter_AttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
