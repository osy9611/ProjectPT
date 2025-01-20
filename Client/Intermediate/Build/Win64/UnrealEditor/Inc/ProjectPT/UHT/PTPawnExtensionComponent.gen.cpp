// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPawnExtensionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAbilitySystemComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnData_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnExtensionComponent();
PROJECTPT_API UClass* Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTPawnExtensionComponent Function GetSkeletonMeshSocketPos
struct Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics
{
	struct PTPawnExtensionComponent_eventGetSkeletonMeshSocketPos_Parms
	{
		FName SocketName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTPawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPawnExtensionComponent_eventGetSkeletonMeshSocketPos_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPawnExtensionComponent_eventGetSkeletonMeshSocketPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTPawnExtensionComponent, nullptr, "GetSkeletonMeshSocketPos", nullptr, nullptr, Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PTPawnExtensionComponent_eventGetSkeletonMeshSocketPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::PTPawnExtensionComponent_eventGetSkeletonMeshSocketPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTPawnExtensionComponent::execGetSkeletonMeshSocketPos)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSkeletonMeshSocketPos(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UPTPawnExtensionComponent Function GetSkeletonMeshSocketPos

// Begin Class UPTPawnExtensionComponent Function GetSkeletonMeshSocketTransform
struct Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics
{
	struct PTPawnExtensionComponent_eventGetSkeletonMeshSocketTransform_Parms
	{
		FName SocketName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PTPawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPawnExtensionComponent_eventGetSkeletonMeshSocketTransform_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTPawnExtensionComponent_eventGetSkeletonMeshSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTPawnExtensionComponent, nullptr, "GetSkeletonMeshSocketTransform", nullptr, nullptr, Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PTPawnExtensionComponent_eventGetSkeletonMeshSocketTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::PTPawnExtensionComponent_eventGetSkeletonMeshSocketTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTPawnExtensionComponent::execGetSkeletonMeshSocketTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetSkeletonMeshSocketTransform(Z_Param_SocketName);
	P_NATIVE_END;
}
// End Class UPTPawnExtensionComponent Function GetSkeletonMeshSocketTransform

// Begin Class UPTPawnExtensionComponent
void UPTPawnExtensionComponent::StaticRegisterNativesUPTPawnExtensionComponent()
{
	UClass* Class = UPTPawnExtensionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSkeletonMeshSocketPos", &UPTPawnExtensionComponent::execGetSkeletonMeshSocketPos },
		{ "GetSkeletonMeshSocketTransform", &UPTPawnExtensionComponent::execGetSkeletonMeshSocketTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTPawnExtensionComponent);
UClass* Z_Construct_UClass_UPTPawnExtensionComponent_NoRegister()
{
	return UPTPawnExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_UPTPawnExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/PTPawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/PTPawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "PT|Pawn" },
		{ "ModuleRelativePath", "Character/PTPawnExtensionComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PTPawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketPos, "GetSkeletonMeshSocketPos" }, // 3937981448
		{ &Z_Construct_UFunction_UPTPawnExtensionComponent_GetSkeletonMeshSocketTransform, "GetSkeletonMeshSocketTransform" }, // 1791851684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTPawnExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTPawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnExtensionComponent, PawnData), Z_Construct_UClass_UPTPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTPawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_UPTAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnExtensionComponent_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnExtensionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTPawnExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPTPawnExtensionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UPTPawnExtensionComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTPawnExtensionComponent_Statics::ClassParams = {
	&UPTPawnExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTPawnExtensionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnExtensionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTPawnExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTPawnExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTPawnExtensionComponent()
{
	if (!Z_Registration_Info_UClass_UPTPawnExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_UPTPawnExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTPawnExtensionComponent.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTPawnExtensionComponent>()
{
	return UPTPawnExtensionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTPawnExtensionComponent);
UPTPawnExtensionComponent::~UPTPawnExtensionComponent() {}
// End Class UPTPawnExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTPawnExtensionComponent, UPTPawnExtensionComponent::StaticClass, TEXT("UPTPawnExtensionComponent"), &Z_Registration_Info_UClass_UPTPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTPawnExtensionComponent), 1516339912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_1789524877(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
