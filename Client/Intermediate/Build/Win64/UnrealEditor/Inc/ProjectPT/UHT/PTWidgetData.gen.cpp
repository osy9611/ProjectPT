// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/PTWidgetData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTWidgetData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_UPTActivatableWidget_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTWidgetData();
PROJECTPT_API UClass* Z_Construct_UClass_UPTWidgetData_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetData();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FWidgetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetData;
class UScriptStruct* FWidgetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetData, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("WidgetData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetData.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FWidgetData>()
{
	return FWidgetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/PTWidgetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddWidgetType_MetaData[] = {
		{ "Category", "AddWidgetType" },
		{ "ModuleRelativePath", "UI/PTWidgetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[] = {
		{ "Category", "ActiveWidget" },
		{ "ModuleRelativePath", "UI/PTWidgetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddWidgetType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActiveWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetData_Statics::NewProp_AddWidgetType = { "AddWidgetType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetData, AddWidgetType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddWidgetType_MetaData), NewProp_AddWidgetType_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWidgetData_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetData, ActiveWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UPTActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidget_MetaData), NewProp_ActiveWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetData_Statics::NewProp_AddWidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetData_Statics::NewProp_ActiveWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"WidgetData",
	Z_Construct_UScriptStruct_FWidgetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetData_Statics::PropPointers),
	sizeof(FWidgetData),
	alignof(FWidgetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetData()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetData.InnerSingleton;
}
// End ScriptStruct FWidgetData

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
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "UI/PTWidgetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Widgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTWidgetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTWidgetData_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWidgetData, METADATA_PARAMS(0, nullptr) }; // 847332187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTWidgetData_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTWidgetData, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widgets_MetaData), NewProp_Widgets_MetaData) }; // 847332187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTWidgetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTWidgetData_Statics::NewProp_Widgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTWidgetData_Statics::NewProp_Widgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTWidgetData_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPTWidgetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTWidgetData_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTWidgetData);
UPTWidgetData::~UPTWidgetData() {}
// End Class UPTWidgetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetData::StaticStruct, Z_Construct_UScriptStruct_FWidgetData_Statics::NewStructOps, TEXT("WidgetData"), &Z_Registration_Info_UScriptStruct_WidgetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetData), 847332187U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTWidgetData, UPTWidgetData::StaticClass, TEXT("UPTWidgetData"), &Z_Registration_Info_UClass_UPTWidgetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTWidgetData), 1487051648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_3922006979(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTWidgetData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
