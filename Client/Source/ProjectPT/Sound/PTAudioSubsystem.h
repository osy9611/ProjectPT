// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PTAudioSubsystem.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class ESoundType : uint8
{
	BGM,
	SFX,
	Voice,
	Max
};

UCLASS(Blueprintable)
class PROJECTPT_API UPTAudioSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RegisterData();

	UAudioComponent* GetAudioComponent(ESoundType Type);
	void SetVolume(ESoundType Type, float Volume);

	UFUNCTION(BlueprintCallable)
	void PlaySound3D_ByPath(ESoundType Type, const FSoftObjectPath& BGMPath, FVector Location);

	UFUNCTION(BlueprintCallable)
	void PlaySound3D_BySound(ESoundType Type, USoundBase* Sound, FVector Location);

	UFUNCTION(BlueprintCallable)
	void PlaySound2D_ByPath(ESoundType Type, const FSoftObjectPath& Path);

	UFUNCTION(BlueprintCallable)
	void PlaySound2D_BySound(ESoundType Type, USoundBase* Sound);

	UFUNCTION(BlueprintCallable)
	void FadeInSound(ESoundType Type, float FadeDuration, float TargetVolume= 1.0f);

	UFUNCTION(BlueprintCallable)
	void FadeOutSound(ESoundType Type, float FadeDuration, float TargetVolume = 0.0f);

private:

	//Volume
	float BGMVolume = 1.0f;
	float SFXVolume = 1.0f;
	float VoiceVolume = 1.0f;

	UPROPERTY()
	TMap<ESoundType, UAudioComponent*> AudioComponents;
};
