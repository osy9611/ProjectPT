// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTAIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAIComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAIComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAIComponent Function GetSkeletonMeshSocketPos
struct Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics
{
	struct PTAIComponent_eventGetSkeletonMeshSocketPos_Parms
	{
		FName SocketName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventGetSkeletonMeshSocketPos_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventGetSkeletonMeshSocketPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAIComponent, nullptr, "GetSkeletonMeshSocketPos", nullptr, nullptr, Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PTAIComponent_eventGetSkeletonMeshSocketPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::PTAIComponent_eventGetSkeletonMeshSocketPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAIComponent::execGetSkeletonMeshSocketPos)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSkeletonMeshSocketPos(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UPTAIComponent Function GetSkeletonMeshSocketPos

// Begin Class UPTAIComponent Function GetSkeletonMeshSocketTransform
struct Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics
{
	struct PTAIComponent_eventGetSkeletonMeshSocketTransform_Parms
	{
		FName SocketName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventGetSkeletonMeshSocketTransform_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTAIComponent_eventGetSkeletonMeshSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAIComponent, nullptr, "GetSkeletonMeshSocketTransform", nullptr, nullptr, Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PTAIComponent_eventGetSkeletonMeshSocketTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::PTAIComponent_eventGetSkeletonMeshSocketTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTAIComponent::execGetSkeletonMeshSocketTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetSkeletonMeshSocketTransform(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UPTAIComponent Function GetSkeletonMeshSocketTransform

// Begin Class UPTAIComponent
void UPTAIComponent::StaticRegisterNativesUPTAIComponent()
{
	UClass* Class = UPTAIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSkeletonMeshSocketPos", &UPTAIComponent::execGetSkeletonMeshSocketPos },
		{ "GetSkeletonMeshSocketTransform", &UPTAIComponent::execGetSkeletonMeshSocketTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAIComponent);
UClass* Z_Construct_UClass_UPTAIComponent_NoRegister()
{
	return UPTAIComponent::StaticClass();
}
struct Z_Construct_UClass_UPTAIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n * HeroCompoent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * AIComponent\xef\xbf\xbd\xef\xbf\xbd GAS \xef\xbf\xbd\xef\xbf\xbd AttributSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/PTAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/PTAIComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\nHeroCompoent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nAIComponent\xef\xbf\xbd\xef\xbf\xbd GAS \xef\xbf\xbd\xef\xbf\xbd AttributSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketPos, "GetSkeletonMeshSocketPos" }, // 2791546633
		{ &Z_Construct_UFunction_UPTAIComponent_GetSkeletonMeshSocketTransform, "GetSkeletonMeshSocketTransform" }, // 2313109826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTAIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPTAIComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UPTAIComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAIComponent_Statics::ClassParams = {
	&UPTAIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAIComponent()
{
	if (!Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton, Z_Construct_UClass_UPTAIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAIComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAIComponent>()
{
	return UPTAIComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAIComponent);
UPTAIComponent::~UPTAIComponent() {}
// End Class UPTAIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAIComponent, UPTAIComponent::StaticClass, TEXT("UPTAIComponent"), &Z_Registration_Info_UClass_UPTAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAIComponent), 2737924397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_1529414196(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTAIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
