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


USTRUCT(BlueprintType)
struct FSoundOptionData
{
	GENERATED_BODY()

public:
	FSoundOptionData()
	{
		VolumeMutes.Init(false, static_cast<int32>(ESoundType::Max));
		VolumeRatios.Init(1.0f, static_cast<int32>(ESoundType::Max));
	}

	UPROPERTY()
	bool MainVolumeMute;

	UPROPERTY()
	TArray<bool> VolumeMutes;

	UPROPERTY()
	float MainVolumeRatio;

	UPROPERTY()
	TArray<float> VolumeRatios;
};



DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlaySoundAfterSceneLoading, const FString);

UCLASS(Blueprintable)
class PROJECTPT_API UPTAudioSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RegisterData();
	void UnRegisterData();

	void RegisterSoundOptionData(const FSoundOptionData& OptionData);

	void UpdateSoundOptionData(const FSoundOptionData& OptionData);

	void RegisterPlaySoundAfterSceneLoading(const FString SoundPath);
	void PlaySoundAfterSceneLoading();

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
	void FadeInSound(ESoundType Type, float FadeDuration, float TargetVolume = 1.0f);

	UFUNCTION(BlueprintCallable)
	void FadeOutSound(ESoundType Type, float FadeDuration, float TargetVolume = 0.0f);

private:

	FSoundOptionData SoundOptionData;

	UPROPERTY()
	FString RegisterBGMSound;

	UPROPERTY()
	TMap<ESoundType, UAudioComponent*> AudioComponents;
};
