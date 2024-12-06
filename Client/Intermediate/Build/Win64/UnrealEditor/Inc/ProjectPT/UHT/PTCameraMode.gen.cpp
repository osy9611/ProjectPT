// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Camera/PTCameraMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTCameraMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraMode_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraModeStack();
PROJECTPT_API UClass* Z_Construct_UClass_UPTCameraModeStack_NoRegister();
PROJECTPT_API UEnum* Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Enum EPTCameraModeBlendFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPTCameraModeBlendFunction;
static UEnum* EPTCameraModeBlendFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("EPTCameraModeBlendFunction"));
	}
	return Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.OuterSingleton;
}
template<> PROJECTPT_API UEnum* StaticEnum<EPTCameraModeBlendFunction>()
{
	return EPTCameraModeBlendFunction_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* [0,1]\xef\xbf\xbd\xef\xbf\xbd BlendFunction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n*/" },
#endif
		{ "COUNT.Name", "EPTCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Name", "EPTCameraModeBlendFunction::EaseIn" },
		{ "EaseInOut.Name", "EPTCameraModeBlendFunction::EaseInOut" },
		{ "EaseOut.Name", "EPTCameraModeBlendFunction::EaseOut" },
		{ "Linear.Name", "EPTCameraModeBlendFunction::Linear" },
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* [0,1]\xef\xbf\xbd\xef\xbf\xbd BlendFunction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPTCameraModeBlendFunction::Linear", (int64)EPTCameraModeBlendFunction::Linear },
		{ "EPTCameraModeBlendFunction::EaseIn", (int64)EPTCameraModeBlendFunction::EaseIn },
		{ "EPTCameraModeBlendFunction::EaseOut", (int64)EPTCameraModeBlendFunction::EaseOut },
		{ "EPTCameraModeBlendFunction::EaseInOut", (int64)EPTCameraModeBlendFunction::EaseInOut },
		{ "EPTCameraModeBlendFunction::COUNT", (int64)EPTCameraModeBlendFunction::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	"EPTCameraModeBlendFunction",
	"EPTCameraModeBlendFunction",
	Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction()
{
	if (!Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_ProjectPT_EPTCameraModeBlendFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPTCameraModeBlendFunction.InnerSingleton;
}
// End Enum EPTCameraModeBlendFunction

// Begin Class UPTCameraMode
void UPTCameraMode::StaticRegisterNativesUPTCameraMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCameraMode);
UClass* Z_Construct_UClass_UPTCameraMode_NoRegister()
{
	return UPTCameraMode::StaticClass();
}
struct Z_Construct_UClass_UPTCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Camera Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "IncludePath", "Camera/PTCameraMode.h" },
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "170.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//View\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch [Min, Max]\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch [Min, Max]" },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xf3\xb8\xb6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blend\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf3\xb8\xb6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blend\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Exponent\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Exponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode, ViewPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMin_MetaData), NewProp_ViewPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode, ViewPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMax_MetaData), NewProp_ViewPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraMode, BlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExponent_MetaData), NewProp_BlendExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_Statics::NewProp_ViewPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_Statics::NewProp_ViewPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraMode_Statics::NewProp_BlendExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCameraMode_Statics::ClassParams = {
	&UPTCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCameraMode()
{
	if (!Z_Registration_Info_UClass_UPTCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCameraMode.OuterSingleton, Z_Construct_UClass_UPTCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCameraMode.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCameraMode>()
{
	return UPTCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCameraMode);
UPTCameraMode::~UPTCameraMode() {}
// End Class UPTCameraMode

// Begin Class UPTCameraModeStack
void UPTCameraModeStack::StaticRegisterNativesUPTCameraModeStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTCameraModeStack);
UClass* Z_Construct_UClass_UPTCameraModeStack_NoRegister()
{
	return UPTCameraModeStack::StaticClass();
}
struct Z_Construct_UClass_UPTCameraModeStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Camera Blending\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc*/" },
#endif
		{ "IncludePath", "Camera/PTCameraMode.h" },
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Blending\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraMode\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraMode\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Matrix Blend \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa5\n" },
#endif
		{ "ModuleRelativePath", "Camera/PTCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Matrix Blend \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTCameraModeStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeInstance_Inner = { "CameraModeInstance", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeInstance = { "CameraModeInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraModeStack, CameraModeInstance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstance_MetaData), NewProp_CameraModeInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPTCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTCameraModeStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeInstance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTCameraModeStack_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraModeStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTCameraModeStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraModeStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTCameraModeStack_Statics::ClassParams = {
	&UPTCameraModeStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTCameraModeStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraModeStack_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTCameraModeStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTCameraModeStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTCameraModeStack()
{
	if (!Z_Registration_Info_UClass_UPTCameraModeStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTCameraModeStack.OuterSingleton, Z_Construct_UClass_UPTCameraModeStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTCameraModeStack.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTCameraModeStack>()
{
	return UPTCameraModeStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTCameraModeStack);
UPTCameraModeStack::~UPTCameraModeStack() {}
// End Class UPTCameraModeStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPTCameraModeBlendFunction_StaticEnum, TEXT("EPTCameraModeBlendFunction"), &Z_Registration_Info_UEnum_EPTCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3905394854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTCameraMode, UPTCameraMode::StaticClass, TEXT("UPTCameraMode"), &Z_Registration_Info_UClass_UPTCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCameraMode), 4121051198U) },
		{ Z_Construct_UClass_UPTCameraModeStack, UPTCameraModeStack::StaticClass, TEXT("UPTCameraModeStack"), &Z_Registration_Info_UClass_UPTCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTCameraModeStack), 1169239955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_1826263524(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectPT_Source_ProjectPT_Camera_PTCameraMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
