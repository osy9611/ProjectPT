// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAbilitySystemComponent.h"
#include "Abilities/PTGameplayAbility.h"

UPTAbilitySystemComponent::UPTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();
	check(ActorInfo);
	check(InOwnerActor);

	const bool bHasNewPawnActor = Cast<APawn>(InAvatarActor) && (InAvatarActor != ActorInfo->AvatarActor);

	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);
}

void UPTAbilitySystemComponent::AbilitySpecInputPressed(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);

	if (Spec.IsActive())
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
}

void UPTAbilitySystemComponent::AbilitySpecInputReleased(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);

	if(Spec.IsActive())
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
}

void UPTAbilitySystemComponent::AbilityInputTagPressed(const FGameplayTag& InputTag)
{
	if (InputTag.IsValid())
	{
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			InputPressedSpecHandles.AddUnique(AbilitySpec.Handle);
			InputHeldSpecHandles.AddUnique(AbilitySpec.Handle);
		}
	}
}

void UPTAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (InputTag.IsValid())
	{
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			InputReleasedSpecHandles.AddUnique(AbilitySpec.Handle);
			InputHeldSpecHandles.Remove(AbilitySpec.Handle);
		}
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UPTAbilitySystemComponent::ProcessAbilityInput(float DeltaTime, bool bGamePaused)
{
	TArray<FGameplayAbilitySpecHandle> ExecuteHandles;

	for (const FGameplayAbilitySpecHandle& Handle: InputHeldSpecHandles)
	{
		if (const FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(Handle))
		{ 
			if (AbilitySpec->Ability && !AbilitySpec->IsActive())
			{
				const UPTGameplayAbility* AbilityCDO = CastChecked<UPTGameplayAbility>(AbilitySpec->Ability);

				if (AbilityCDO->ActivationPolicy == EPTAbilityActivationPolicy::WhileInputActive)
					ExecuteHandles.AddUnique(AbilitySpec->Handle);
			}
		}
	}

	for (const FGameplayAbilitySpecHandle& Handle : InputPressedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(Handle))
		{
			if (AbilitySpec->Ability)
			{
				AbilitySpec->InputPressed = true;
				if (AbilitySpec->IsActive())
				{
					AbilitySpecInputPressed(*AbilitySpec);
				}
				else
				{
					const UPTGameplayAbility* AbilityCDO = CastChecked<UPTGameplayAbility>(AbilitySpec->Ability);

					if (AbilityCDO->ActivationPolicy == EPTAbilityActivationPolicy::OnInputTirggered)
						ExecuteHandles.AddUnique(AbilitySpec->Handle);
				}
			}
		}
	}

	//Handle 등록시작
	for (const FGameplayAbilitySpecHandle& Handle : ExecuteHandles)
	{ 
		TryActivateAbility(Handle);
	}

	//이번 프레임에 Release되었다면, 관련 GameplayAbility 처리
	for (const FGameplayAbilitySpecHandle& Handle : InputReleasedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(Handle))
		{
			if (AbilitySpec->Ability)
			{
				AbilitySpec->Ability.GetName();
				AbilitySpec->InputPressed = false;
				if (AbilitySpec->IsActive())
					AbilitySpecInputReleased(*AbilitySpec);
			}
		}
	}

	//InputHeldSpecHandles는 InputReleaseSpecHandles가 추가될때 제거된다
	InputPressedSpecHandles.Reset();
	InputReleasedSpecHandles.Reset();
}
PRAGMA_ENABLE_OPTIMIZATION