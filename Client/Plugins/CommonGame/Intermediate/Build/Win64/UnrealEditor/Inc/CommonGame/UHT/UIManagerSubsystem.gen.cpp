// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/UIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUserWidgetBase_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem();
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UUIManagerSubsystem
void UUIManagerSubsystem::StaticRegisterNativesUUIManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManagerSubsystem);
UClass* Z_Construct_UClass_UUIManagerSubsystem_NoRegister()
{
	return UUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UIManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefualtWidget_MetaData[] = {
		{ "Category", "UIManagerSubsystem" },
		{ "ModuleRelativePath", "Public/UIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefualtWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidgetClass = { "CurrentWidgetClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, CurrentWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidgetClass_MetaData), NewProp_CurrentWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, CurrentWidget), Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_DefualtWidget = { "DefualtWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIManagerSubsystem, DefualtWidget), Z_Construct_UClass_UCommonUserWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefualtWidget_MetaData), NewProp_DefualtWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIManagerSubsystem_Statics::NewProp_DefualtWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManagerSubsystem_Statics::ClassParams = {
	&UUIManagerSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManagerSubsystem.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UUIManagerSubsystem>()
{
	return UUIManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManagerSubsystem);
UUIManagerSubsystem::~UUIManagerSubsystem() {}
// End Class UUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManagerSubsystem, UUIManagerSubsystem::StaticClass, TEXT("UUIManagerSubsystem"), &Z_Registration_Info_UClass_UUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManagerSubsystem), 1236545723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_2871271886(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
