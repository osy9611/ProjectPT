// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/PTWidgetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTWidgetData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PROJECTPT_API UClass* Z_Construct_UClass_UPTWidgetData();
PROJECTPT_API UClass* Z_Construct_UClass_UPTWidgetData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTWidgetData
void UPTWidgetData::StaticRegisterNativesUPTWidgetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTWidgetData);
UClass* Z_Construct_UClass_UPTWidgetData_NoRegister()
{
	return UPTWidgetData::StaticClass();
}
struct Z_Construct_UClass_UPTWidgetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PTWidgetData.h" },
		{ "ModuleRelativePath", "UI/PTWidgetData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTWidgetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTWidgetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTWidgetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTWidgetData_Statics::ClassParams = {
	&UPTWidgetData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTWidgetData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTWidgetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTWidgetData()
{
	if (!Z_Registration_Info_UClass_UPTWidgetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTWidgetData.OuterSingleton, Z_Construct_UClass_UPTWidgetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTWidgetData.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTWidgetData>()
{
	return UPTWidgetData::StaticClass();
}
UPTWidgetData::UPTWidgetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTWidgetData);
UPTWidgetData::~UPTWidgetData() {}
// End Class UPTWidgetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTWidgetData, UPTWidgetData::StaticClass, TEXT("UPTWidgetData"), &Z_Registration_Info_UClass_UPTWidgetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTWidgetData), 3390295864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_845232859(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
