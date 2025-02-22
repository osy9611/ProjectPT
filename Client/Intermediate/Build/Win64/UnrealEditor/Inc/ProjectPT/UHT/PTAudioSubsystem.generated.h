// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/PTAudioSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
enum class ESoundType : uint8;
struct FSoftObjectPath;
#ifdef PROJECTPT_PTAudioSubsystem_generated_h
#error "PTAudioSubsystem.generated.h already included, missing '#pragma once' in PTAudioSubsystem.h"
#endif
#define PROJECTPT_PTAudioSubsystem_generated_h

#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundOptionData_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FSoundOptionData>();

#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFadeOutSound); \
	DECLARE_FUNCTION(execFadeInSound); \
	DECLARE_FUNCTION(execPlaySound2D_BySound); \
	DECLARE_FUNCTION(execPlaySound2D_ByPath); \
	DECLARE_FUNCTION(execPlaySound3D_BySound); \
	DECLARE_FUNCTION(execPlaySound3D_ByPath); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetMainVolume); \
	DECLARE_FUNCTION(execSaveSoundOptionData); \
	DECLARE_FUNCTION(execUpdateSoundOption);


#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAudioSubsystem(); \
	friend struct Z_Construct_UClass_UPTAudioSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPTAudioSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAudioSubsystem)


#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTAudioSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAudioSubsystem(UPTAudioSubsystem&&); \
	UPTAudioSubsystem(const UPTAudioSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAudioSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAudioSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTAudioSubsystem) \
	NO_API virtual ~UPTAudioSubsystem();


#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_52_PROLOG
#define FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAudioSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Sound_PTAudioSubsystem_h


#define FOREACH_ENUM_ESOUNDTYPE(op) \
	op(ESoundType::BGM) \
	op(ESoundType::SFX) \
	op(ESoundType::Voice) \
	op(ESoundType::Max) 

enum class ESoundType : uint8;
template<> struct TIsUEnumClass<ESoundType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<ESoundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
