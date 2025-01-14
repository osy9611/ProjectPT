// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/PTObjectSubsystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTObjectSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerStart_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTObjectSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTObjectSubsystem_NoRegister();
PROJECTPT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStartList();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin ScriptStruct FPlayerStartList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStartList;
class UScriptStruct* FPlayerStartList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStartList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStartList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStartList, (UObject*)Z_Construct_UPackage__Script_ProjectPT(), TEXT("PlayerStartList"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStartList.OuterSingleton;
}
template<> PROJECTPT_API UScriptStruct* StaticStruct<FPlayerStartList>()
{
	return FPlayerStartList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerStartList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartList_MetaData[] = {
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStartList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStartList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStartList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStartList_Statics::NewProp_PlayerStartList_Inner = { "PlayerStartList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APTPlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStartList_Statics::NewProp_PlayerStartList = { "PlayerStartList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStartList, PlayerStartList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStartList_MetaData), NewProp_PlayerStartList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStartList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStartList_Statics::NewProp_PlayerStartList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStartList_Statics::NewProp_PlayerStartList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStartList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStartList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
	nullptr,
	&NewStructOps,
	"PlayerStartList",
	Z_Construct_UScriptStruct_FPlayerStartList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStartList_Statics::PropPointers),
	sizeof(FPlayerStartList),
	alignof(FPlayerStartList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStartList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStartList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStartList()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStartList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStartList.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStartList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerStartList.InnerSingleton;
}
// End ScriptStruct FPlayerStartList

// Begin Class UPTObjectSubsystem
void UPTObjectSubsystem::StaticRegisterNativesUPTObjectSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTObjectSubsystem);
UClass* Z_Construct_UClass_UPTObjectSubsystem_NoRegister()
{
	return UPTObjectSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTObjectSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/PTObjectSubsystem.h" },
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachePlayerStarts_MetaData[] = {
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDatas_MetaData[] = {
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachePlayerStarts_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachePlayerStarts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachePlayerStarts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectDatas_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectDatas_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectDatas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTObjectSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts_ValueProp = { "CachePlayerStarts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerStartList, METADATA_PARAMS(0, nullptr) }; // 2808894622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts_Key_KeyProp = { "CachePlayerStarts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts = { "CachePlayerStarts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTObjectSubsystem, CachePlayerStarts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachePlayerStarts_MetaData), NewProp_CachePlayerStarts_MetaData) }; // 1298103297 2808894622
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_ValueProp = { "ObjectDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_Key_KeyProp = { "ObjectDatas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas = { "ObjectDatas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTObjectSubsystem, ObjectDatas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDatas_MetaData), NewProp_ObjectDatas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_CachePlayerStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTObjectSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTObjectSubsystem_Statics::ClassParams = {
	&UPTObjectSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTObjectSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTObjectSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton, Z_Construct_UClass_UPTObjectSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTObjectSubsystem>()
{
	return UPTObjectSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTObjectSubsystem);
UPTObjectSubsystem::~UPTObjectSubsystem() {}
// End Class UPTObjectSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerStartList::StaticStruct, Z_Construct_UScriptStruct_FPlayerStartList_Statics::NewStructOps, TEXT("PlayerStartList"), &Z_Registration_Info_UScriptStruct_PlayerStartList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStartList), 2808894622U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTObjectSubsystem, UPTObjectSubsystem::StaticClass, TEXT("UPTObjectSubsystem"), &Z_Registration_Info_UClass_UPTObjectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTObjectSubsystem), 218233841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_2952363780(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
