// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/PTActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTActivatableWidget() {}

// Begin Cross Module References
COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
PROJECTPT_API UClass* Z_Construct_UClass_UPTActivatableWidget();
PROJECTPT_API UClass* Z_Construct_UClass_UPTActivatableWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTActivatableWidget Function HideMouseCursor
struct Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PTActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTActivatableWidget, nullptr, "HideMouseCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTActivatableWidget::execHideMouseCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideMouseCursor();
	P_NATIVE_END;
}
// End Class UPTActivatableWidget Function HideMouseCursor

// Begin Class UPTActivatableWidget Function ShowMouseCursor
struct Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PTActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTActivatableWidget, nullptr, "ShowMouseCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTActivatableWidget::execShowMouseCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMouseCursor();
	P_NATIVE_END;
}
// End Class UPTActivatableWidget Function ShowMouseCursor

// Begin Class UPTActivatableWidget
void UPTActivatableWidget::StaticRegisterNativesUPTActivatableWidget()
{
	UClass* Class = UPTActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideMouseCursor", &UPTActivatableWidget::execHideMouseCursor },
		{ "ShowMouseCursor", &UPTActivatableWidget::execShowMouseCursor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTActivatableWidget);
UClass* Z_Construct_UClass_UPTActivatableWidget_NoRegister()
{
	return UPTActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UPTActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd\n * 1. Widget Layout\xef\xbf\xbd\xef\xbf\xbd Widget Instance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd Layour \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd :\n *\x09  - \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Activate/Deactivate\n *    - WidgetTree\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd(== Activatable/Deactivatable)\n * 2. Input(Mouse or Keyboard \xef\xbf\xbd\xef\xbf\xbd) \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "UI/PTActivatableWidget.h" },
		{ "ModuleRelativePath", "UI/PTActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd\n1. Widget Layout\xef\xbf\xbd\xef\xbf\xbd Widget Instance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd Layour \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd :\n      - \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Activate/Deactivate\n   - WidgetTree\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd(== Activatable/Deactivatable)\n2. Input(Mouse or Keyboard \xef\xbf\xbd\xef\xbf\xbd) \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "UI/PTActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mouse \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "UI/PTActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTActivatableWidget_HideMouseCursor, "HideMouseCursor" }, // 3949274669
		{ &Z_Construct_UFunction_UPTActivatableWidget_ShowMouseCursor, "ShowMouseCursor" }, // 1117348232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTActivatableWidget, InputMode), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 4013108250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTActivatableWidget, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseCaptureMode_MetaData), NewProp_MouseCaptureMode_MetaData) }; // 2576598572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_MouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTActivatableWidget_Statics::NewProp_MouseCaptureMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTActivatableWidget_Statics::ClassParams = {
	&UPTActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTActivatableWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UPTActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTActivatableWidget.OuterSingleton, Z_Construct_UClass_UPTActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTActivatableWidget.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTActivatableWidget>()
{
	return UPTActivatableWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTActivatableWidget);
UPTActivatableWidget::~UPTActivatableWidget() {}
// End Class UPTActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTActivatableWidget, UPTActivatableWidget::StaticClass, TEXT("UPTActivatableWidget"), &Z_Registration_Info_UClass_UPTActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTActivatableWidget), 729978260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_1435351506(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
