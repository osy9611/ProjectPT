// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Player/PTLocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTLocalPlayer() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
PROJECTPT_API UClass* Z_Construct_UClass_UPTLocalPlayer();
PROJECTPT_API UClass* Z_Construct_UClass_UPTLocalPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTLocalPlayer
void UPTLocalPlayer::StaticRegisterNativesUPTLocalPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTLocalPlayer);
UClass* Z_Construct_UClass_UPTLocalPlayer_NoRegister()
{
	return UPTLocalPlayer::StaticClass();
}
struct Z_Construct_UClass_UPTLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/PTLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/PTLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTLocalPlayer_Statics::ClassParams = {
	&UPTLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UPTLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTLocalPlayer.OuterSingleton, Z_Construct_UClass_UPTLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTLocalPlayer.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTLocalPlayer>()
{
	return UPTLocalPlayer::StaticClass();
}
UPTLocalPlayer::UPTLocalPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTLocalPlayer);
UPTLocalPlayer::~UPTLocalPlayer() {}
// End Class UPTLocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTLocalPlayer, UPTLocalPlayer::StaticClass, TEXT("UPTLocalPlayer"), &Z_Registration_Info_UClass_UPTLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTLocalPlayer), 567001468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_1804756764(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
