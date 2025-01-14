// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAICharacter() {}

// Begin Cross Module References
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
PROJECTPT_API UClass* Z_Construct_UClass_APTAICharacter();
PROJECTPT_API UClass* Z_Construct_UClass_APTAICharacter_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTAICharacter
void APTAICharacter::StaticRegisterNativesAPTAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTAICharacter);
UClass* Z_Construct_UClass_APTAICharacter_NoRegister()
{
	return APTAICharacter::StaticClass();
}
struct Z_Construct_UClass_APTAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PTAICharacter.h" },
		{ "ModuleRelativePath", "Character/PTAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PTAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTAICharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTAICharacter, PawnExtComponent), Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtComponent_MetaData), NewProp_PawnExtComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTAICharacter_Statics::NewProp_PawnExtComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTAICharacter_Statics::ClassParams = {
	&APTAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APTAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APTAICharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APTAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTAICharacter()
{
	if (!Z_Registration_Info_UClass_APTAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTAICharacter.OuterSingleton, Z_Construct_UClass_APTAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTAICharacter.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTAICharacter>()
{
	return APTAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTAICharacter);
APTAICharacter::~APTAICharacter() {}
// End Class APTAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTAICharacter, APTAICharacter::StaticClass, TEXT("APTAICharacter"), &Z_Registration_Info_UClass_APTAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTAICharacter), 2266504308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAICharacter_h_2941431927(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
