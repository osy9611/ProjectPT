// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Camera/PTCameraMode_ThirdPerson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCameraMode_ThirdPerson() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_ThirdPerson();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_ThirdPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTCameraMode_ThirdPerson
void UPTCameraMode_ThirdPerson::StaticRegisterNativesUPTCameraMode_ThirdPerson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCameraMode_ThirdPerson);
UClass* Z_Construct_UClass_UPTCameraMode_ThirdPerson_NoRegister()
{
	return UPTCameraMode_ThirdPerson::StaticClass();
}
struct Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Camera/PTCameraMode_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/PTCameraMode_ThirdPerson.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetCurve_MetaData[] = {
		{ "Category", "Third Person" },
		{ "ModuleRelativePath", "Camera/PTCameraMode_ThirdPerson.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/PTCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/PTCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionRadius_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/PTCameraMode_ThirdPerson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOffsetCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraCollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCameraMode_ThirdPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve = { "TargetOffsetCurve", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode_ThirdPerson, TargetOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetCurve_MetaData), NewProp_TargetOffsetCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_DefaultCameraDistance = { "DefaultCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode_ThirdPerson, DefaultCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraDistance_MetaData), NewProp_DefaultCameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode_ThirdPerson, MinCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCameraDistance_MetaData), NewProp_MinCameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_CameraCollisionRadius = { "CameraCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode_ThirdPerson, CameraCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCollisionRadius_MetaData), NewProp_CameraCollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_DefaultCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_MinCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::NewProp_CameraCollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::ClassParams = {
	&UPTCameraMode_ThirdPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCameraMode_ThirdPerson()
{
	if (!Z_Registration_Info_UClass_UPTCameraMode_ThirdPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCameraMode_ThirdPerson.OuterSingleton, Z_Construct_UClass_UPTCameraMode_ThirdPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCameraMode_ThirdPerson.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCameraMode_ThirdPerson>()
{
	return UPTCameraMode_ThirdPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCameraMode_ThirdPerson);
UPTCameraMode_ThirdPerson::~UPTCameraMode_ThirdPerson() {}
// End Class UPTCameraMode_ThirdPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTCameraMode_ThirdPerson_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTCameraMode_ThirdPerson, UPTCameraMode_ThirdPerson::StaticClass, TEXT("UPTCameraMode_ThirdPerson"), &Z_Registration_Info_UClass_UPTCameraMode_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCameraMode_ThirdPerson), 781288614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTCameraMode_ThirdPerson_h_176746869(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTCameraMode_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Camera_PTCameraMode_ThirdPerson_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
