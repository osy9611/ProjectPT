// Fill out your copyright notice in the Description page of Project Settings.


#include "PTInputConfig.h"
#include "ProjectPT/PTLogChannels.h"

UPTInputConfig::UPTInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

const UInputAction* UPTInputConfig::FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FPTInputAction& Action : NativeInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
			return Action.InputAction;
	}

	if(bLogNotFound)
		UE_LOG(PTLog, Error, TEXT("can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));

	return nullptr;
}

const UInputAction* UPTInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FPTInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
			return Action.InputAction;
	}

	if (bLogNotFound)
		UE_LOG(PTLog, Error, TEXT("Can't find AbilityInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	return nullptr;
}

const UInputAction* UPTInputConfig::FindNativeInputActionForTag(const FString& InputTag, bool bLogNotFound) const
{
	if (InputTag.IsEmpty())
		return nullptr;

	FName TagName = FName(InputTag);
	FGameplayTag GameplayTag = FGameplayTag::RequestGameplayTag(TagName);

	return FindNativeInputActionForTag(GameplayTag, bLogNotFound);
}
