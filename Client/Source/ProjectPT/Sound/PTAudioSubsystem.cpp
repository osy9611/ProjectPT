// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAudioSubsystem.h"
#include "Components/AudioComponent.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/System/PTAssetManager.h"
#include "ProjectPT/Data//ClientLocalStorageSubsystem.h"
#include "MetasoundSource.h"
#include "ProjectPT/Data/ClientLocalStorage/OptionStorage.h"

void UPTAudioSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

}

void UPTAudioSubsystem::Deinitialize()
{
	AudioComponents.Empty();
	Super::Deinitialize();
}

void UPTAudioSubsystem::RegisterData()
{
	bool IsUpdateSoundOption = false;
	int32 MaxCount = static_cast<int32>(ESoundType::Max);
	for (int32 i = 0; i < MaxCount; ++i)
	{
		ESoundType SoundType = static_cast<ESoundType>(i);
		UAudioComponent* AudioComponent = GetAudioComponent(SoundType);
		if (!AudioComponent)
		{
			AudioComponent = NewObject<UAudioComponent>(this);
			AudioComponents.Add(SoundType, AudioComponent);
			IsUpdateSoundOption = true;
		}

		if (SoundType == ESoundType::BGM)
		{
			AudioComponent->bAutoActivate = true;
		}
		AudioComponent->RegisterComponentWithWorld(GetWorld());
		//AudioComponent->RegisterComponent();
	}

	if (IsUpdateSoundOption)
	{
		UpdateSoundOption();
	}
}
void UPTAudioSubsystem::UnRegisterData()
{
	int32 MaxCount = static_cast<int32>(ESoundType::Max);

	for (int32 i = 0; i < MaxCount; ++i)
	{
		ESoundType SoundType = static_cast<ESoundType>(i);
		UAudioComponent* AudioComponent = GetAudioComponent(SoundType);
		if (!AudioComponent)
		{
			continue;
		}
		AudioComponent->UnregisterComponent();
	}
}
void UPTAudioSubsystem::RegisterSoundOptionData(const FSoundOptionData& OptionData)
{
	SoundOptionData = OptionData;
	UpdateSoundOption();
}

void UPTAudioSubsystem::UpdateSoundOption()
{
	for (auto& AudioComponent : AudioComponents)
	{
		ESoundType SoundType = AudioComponent.Key;

		bool MuteOption = SoundOptionData.VolumeMutes[static_cast<int32>(SoundType)];
		if (SoundOptionData.MainVolumeMute || MuteOption)
		{
			AudioComponent.Value->SetVolumeMultiplier(0.0f);
		}
		else
		{
			float VolumeRatio = SoundOptionData.VolumeRatios[static_cast<int32>(SoundType)] * SoundOptionData.MainVolumeRatio;
			AudioComponent.Value->SetVolumeMultiplier(VolumeRatio);
		}
	}
}

void UPTAudioSubsystem::SaveSoundOptionData()
{
	if (UClientLocalStorageSubsystem* LocalStorageSubsystem = GetWorld()->GetGameInstance()->GetSubsystem< UClientLocalStorageSubsystem>())
	{
		UOptionStorage* OptionStorage = LocalStorageSubsystem->CreateStorageType<UOptionStorage>(ELocalStorageType::Option, UOptionStorage::StaticClass());
		if (!OptionStorage)
		{
			UE_LOG(PTLog, Error, TEXT("[PTAudioSubsystem] Fail Save SoundOption"));
			return;
		}
		OptionStorage->SoundData = SoundOptionData;
		OptionStorage->SaveData();


		UE_LOG(PTLog, Log, TEXT("[PTAudioSubsystem]  Success Save SoundOption"));
	}
}

void UPTAudioSubsystem::RegisterPlaySoundAfterSceneLoading(const FString SoundPath)
{
	RegisterBGMSound = SoundPath;
}

void UPTAudioSubsystem::PlaySoundAfterSceneLoading()
{
	if (RegisterBGMSound.IsEmpty())
		return;

	PlaySound2D_ByPath(ESoundType::BGM, RegisterBGMSound);
}

UAudioComponent* UPTAudioSubsystem::GetAudioComponent(ESoundType Type)
{
	if (UAudioComponent** AudioComponentPtr = AudioComponents.Find(Type))
	{
		if (UAudioComponent* AudioComponent = *AudioComponentPtr)
		{
			return AudioComponent;
		}
	}
	else
	{
		const UEnum* Enum = FindObject<UEnum>(ANY_PACKAGE, TEXT("ESoundType"), true);
		FString TypeStr = Enum->GetNameStringByValue((int32)Type);
		UE_LOG(PTLog, Log, TEXT("This Sound Type Not Have Component : %s"), *TypeStr);
	}

	return nullptr;
}

void UPTAudioSubsystem::SetMainVolume(float Volume)
{
	SoundOptionData.MainVolumeRatio = Volume;
	UpdateSoundOption();
}

void UPTAudioSubsystem::SetVolume(ESoundType Type, float Volume)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->SetVolumeMultiplier(Volume);
		SoundOptionData.VolumeRatios[static_cast<int32>(Type)] = Volume;
		UpdateSoundOption();
	}
}

void UPTAudioSubsystem::PlaySound3D_ByPath(ESoundType Type, const FSoftObjectPath& BGMPath, FVector Location)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		UPTAssetManager& AssetManager = UPTAssetManager::Get();
		AssetManager.AsynchronusLoadAsset(BGMPath, [&, AudioComponent](UObject* result)
			{
				if (USoundBase* Sound = Cast<USoundBase>(result))
				{
					AudioComponent->SetSound(Sound);
					AudioComponent->SetWorldLocation(Location);
					AudioComponent->Play();
				}
			});
	}
}

void UPTAudioSubsystem::PlaySound3D_BySound(ESoundType Type, USoundBase* Sound, FVector Location)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->SetSound(Sound);
		AudioComponent->SetWorldLocation(Location);
		AudioComponent->Play();
	}
}

void UPTAudioSubsystem::PlaySound2D_ByPath(ESoundType Type, const FSoftObjectPath& Path)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		UPTAssetManager& AssetManager = UPTAssetManager::Get();
		AssetManager.AsynchronusLoadAsset(Path, [&, AudioComponent](UObject* result)
			{
				if (USoundBase* Sound = Cast<USoundBase>(result))
				{
					AudioComponent->SetSound(Sound);
					AudioComponent->Play();
				}
			});
	}
}

void UPTAudioSubsystem::PlaySound2D_BySound(ESoundType Type, USoundBase* Sound)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->SetSound(Sound);
		AudioComponent->Play();
	}
}

void UPTAudioSubsystem::FadeInSound(ESoundType Type, float FadeDuration, float TargetVolume)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->FadeIn(FadeDuration, TargetVolume);
	}
}

void UPTAudioSubsystem::FadeOutSound(ESoundType Type, float FadeDuration, float TargetVolume)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->FadeOut(FadeDuration, TargetVolume);
	}
}