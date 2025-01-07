// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/Weapon/CircumferenceMarkerWidget.h"
#include "ProjectPT/UI/Weapon/SCircumferenceMarkerWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircumferenceMarkerWidget() {}

// Begin Cross Module References
PROJECTPT_API UClass* Z_Construct_UClass_UCircumferenceMarkerWidget();
PROJECTPT_API UClass* Z_Construct_UClass_UCircumferenceMarkerWidget_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UCircumferenceMarkerWidget
void UCircumferenceMarkerWidget::StaticRegisterNativesUCircumferenceMarkerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircumferenceMarkerWidget);
UClass* Z_Construct_UClass_UCircumferenceMarkerWidget_NoRegister()
{
	return UCircumferenceMarkerWidget::StaticClass();
}
struct Z_Construct_UClass_UCircumferenceMarkerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
		{ "ModuleRelativePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerList_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerImage_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReticleCornerOutsizeSpreadRadius_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "UI/Weapon/CircumferenceMarkerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerImage;
	static void NewProp_bReticleCornerOutsizeSpreadRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReticleCornerOutsizeSpreadRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircumferenceMarkerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_Inner = { "MarkerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry, METADATA_PARAMS(0, nullptr) }; // 532194447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList = { "MarkerList", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCircumferenceMarkerWidget, MarkerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerList_MetaData), NewProp_MarkerList_MetaData) }; // 532194447
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCircumferenceMarkerWidget, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage = { "MarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCircumferenceMarkerWidget, MarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerImage_MetaData), NewProp_MarkerImage_MetaData) }; // 1704263518
void Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsizeSpreadRadius_SetBit(void* Obj)
{
	((UCircumferenceMarkerWidget*)Obj)->bReticleCornerOutsizeSpreadRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsizeSpreadRadius = { "bReticleCornerOutsizeSpreadRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCircumferenceMarkerWidget), &Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsizeSpreadRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReticleCornerOutsizeSpreadRadius_MetaData), NewProp_bReticleCornerOutsizeSpreadRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_MarkerImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::NewProp_bReticleCornerOutsizeSpreadRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::ClassParams = {
	&UCircumferenceMarkerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCircumferenceMarkerWidget()
{
	if (!Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton, Z_Construct_UClass_UCircumferenceMarkerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCircumferenceMarkerWidget.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UCircumferenceMarkerWidget>()
{
	return UCircumferenceMarkerWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCircumferenceMarkerWidget);
UCircumferenceMarkerWidget::~UCircumferenceMarkerWidget() {}
// End Class UCircumferenceMarkerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_Weapon_CircumferenceMarkerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCircumferenceMarkerWidget, UCircumferenceMarkerWidget::StaticClass, TEXT("UCircumferenceMarkerWidget"), &Z_Registration_Info_UClass_UCircumferenceMarkerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircumferenceMarkerWidget), 713931218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_Weapon_CircumferenceMarkerWidget_h_1608770006(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_Weapon_CircumferenceMarkerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_Weapon_CircumferenceMarkerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
