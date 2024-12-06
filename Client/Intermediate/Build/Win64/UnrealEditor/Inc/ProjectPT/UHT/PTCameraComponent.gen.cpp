// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Camera/PTCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCameraComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraModeStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTCameraComponent
void UPTCameraComponent::StaticRegisterNativesUPTCameraComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCameraComponent);
UClass* Z_Construct_UClass_UPTCameraComponent_NoRegister()
{
	return UPTCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UPTCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/PTCameraComponent.h" },
		{ "ModuleRelativePath", "Camera/PTCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Stack\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Stack" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraComponent, CameraModeStack), Z_Construct_UClass_UPTCameraModeStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraComponent_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCameraComponent_Statics::ClassParams = {
	&UPTCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCameraComponent()
{
	if (!Z_Registration_Info_UClass_UPTCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCameraComponent.OuterSingleton, Z_Construct_UClass_UPTCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCameraComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCameraComponent>()
{
	return UPTCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCameraComponent);
UPTCameraComponent::~UPTCameraComponent() {}
// End Class UPTCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTCameraComponent, UPTCameraComponent::StaticClass, TEXT("UPTCameraComponent"), &Z_Registration_Info_UClass_UPTCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCameraComponent), 65258561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_3437058257(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
