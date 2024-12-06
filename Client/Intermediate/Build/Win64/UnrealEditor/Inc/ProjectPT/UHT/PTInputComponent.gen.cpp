// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Input/PTInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTInputComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTInputComponent
void UPTInputComponent::StaticRegisterNativesUPTInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTInputComponent);
UClass* Z_Construct_UClass_UPTInputComponent_NoRegister()
{
	return UPTInputComponent::StaticClass();
}
struct Z_Construct_UClass_UPTInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/PTInputComponent.h" },
		{ "ModuleRelativePath", "Input/PTInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTInputComponent_Statics::ClassParams = {
	&UPTInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTInputComponent()
{
	if (!Z_Registration_Info_UClass_UPTInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTInputComponent.OuterSingleton, Z_Construct_UClass_UPTInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTInputComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTInputComponent>()
{
	return UPTInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTInputComponent);
UPTInputComponent::~UPTInputComponent() {}
// End Class UPTInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTInputComponent, UPTInputComponent::StaticClass, TEXT("UPTInputComponent"), &Z_Registration_Info_UClass_UPTInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTInputComponent), 3050318910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_84677737(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Input_PTInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
