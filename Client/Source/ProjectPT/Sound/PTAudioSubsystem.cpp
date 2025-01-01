// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAudioSubsystem.h"
#include "Components/AudioComponent.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/System/PTAssetManager.h"

void UPTAudioSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
}

void UPTAudioSubsystem::Deinitialize()
{
	AudioComponents.Empty();
}

void UPTAudioSubsystem::RegisterData()
{
	int32 MaxCount = static_cast<int32>(ESoundType::Max);
	for (int32 i = 0; i < MaxCount; ++i)
	{
		ESoundType SoundType = static_cast<ESoundType>(i);
		UAudioComponent* AudioComponent = GetAudioComponent(SoundType);
		if (!AudioComponent)
		{
			AudioComponent = NewObject<UAudioComponent>(this);
			AudioComponents.Add(SoundType, AudioComponent);
		}
		AudioComponent->RegisterComponentWithWorld(GetWorld());
		AudioComponent->RegisterComponent();
	}
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

void UPTAudioSubsystem::SetVolume(ESoundType Type, float Volume)
{
	if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
	{
		AudioComponent->SetVolumeMultiplier(Volume);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UPTAudioSubsystem::PlaySound3D_ByPath(ESoundType Type, const FSoftObjectPath& BGMPath, FVector Location)
{
	UPTAssetManager& AssetManager = UPTAssetManager::Get();
	AssetManager.AsynchronusLoadAsset(BGMPath, [&,Type](UObject* result)
		{
			if (USoundBase* Sound = Cast<USoundBase>(result))
			{
 				if (UAudioComponent* AudioComponent = GetAudioComponent(Type))
				{
					AudioComponent->SetSound(Sound);
					AudioComponent->SetWorldLocation(Location);
					AudioComponent->Play();
				}
			}
		});
}
PRAGMA_ENABLE_OPTIMIZATION

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
		AssetManager.AsynchronusLoadAsset(Path, [&](UObject* result)
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
