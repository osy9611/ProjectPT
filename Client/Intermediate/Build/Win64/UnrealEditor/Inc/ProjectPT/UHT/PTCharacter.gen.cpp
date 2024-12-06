// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCharacter() {}

// Begin Cross Module References
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
PROJECTPT_API UClass* Z_Construct_UClass_APTCharacter();
PROJECTPT_API UClass* Z_Construct_UClass_APTCharacter_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTCharacter
void APTCharacter::StaticRegisterNativesAPTCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTCharacter);
UClass* Z_Construct_UClass_APTCharacter_NoRegister()
{
	return APTCharacter::StaticClass();
}
struct Z_Construct_UClass_APTCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PTCharacter.h" },
		{ "ModuleRelativePath", "Character/PTCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PTCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCoponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PTCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCoponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTCharacter, PawnExtComponent), Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtComponent_MetaData), NewProp_PawnExtComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTCharacter_Statics::NewProp_CameraCoponent = { "CameraCoponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTCharacter, CameraCoponent), Z_Construct_UClass_UPTCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCoponent_MetaData), NewProp_CameraCoponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTCharacter_Statics::NewProp_PawnExtComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTCharacter_Statics::NewProp_CameraCoponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTCharacter_Statics::ClassParams = {
	&APTCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APTCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APTCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APTCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTCharacter()
{
	if (!Z_Registration_Info_UClass_APTCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTCharacter.OuterSingleton, Z_Construct_UClass_APTCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTCharacter.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTCharacter>()
{
	return APTCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTCharacter);
APTCharacter::~APTCharacter() {}
// End Class APTCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTCharacter, APTCharacter::StaticClass, TEXT("APTCharacter"), &Z_Registration_Info_UClass_APTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTCharacter), 1954423658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTCharacter_h_605287754(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Character_PTCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
