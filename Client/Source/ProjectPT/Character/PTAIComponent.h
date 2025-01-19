// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "PTAIComponent.generated.h"

class UPTAbilitySystemComponent;
class UPTAI_AttributeSet;
/**
 * AI 관련 초기화를 처리하는 컴포넌트
 * HeroCompoent는 플레이어가 제어하는 시스템의 초기화를 처리하는 컴포넌트 이지만
 * AIComponent는 GAS 및 AttributSet도 관리하기 위해서 만듬
 */
UCLASS(Blueprintable, Meta = (BlueprintSpawnableComponent))
class PROJECTPT_API UPTAIComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()
public:
	UPTAIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	static UPTAIComponent* FindAIComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UPTAIComponent>() : nullptr); }

	static const FName NAME_ActorFeatureName;

	virtual void OnRegister() final;	//컴포넌트가 생성되는 완전 초기에 호출되는 함수
	virtual void BeginPlay() final;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) final;

	virtual FName GetFeatureName() const final { return NAME_ActorFeatureName; } //특정 Feature를 가진 엑터로 처리하도록 식별하는 중요한 부분
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) final;
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const final;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) final;
	virtual void CheckDefaultInitialization() final;

	void SetMonsterID(int32 NewTableId) { this->TableId = NewTableId; }
	int32 GetMonsterTableID() { return TableId; }

	/*PTPlayerStart*/
	void RegisterPTPlayerStart(APTPlayerStart* InPlayerStart) { this->PlayerStart = InPlayerStart; }
	APTPlayerStart* GetPlayerStart() { return PlayerStart.Get(); }

	/*AI Perception*/
	void SendDamageEvent(AActor* Instigator,float DamageAmount);

	/*AI Contents*/
	UFUNCTION(BlueprintCallable)
	bool IsTargetVisible(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	bool IsAttackRange(AActor* TargetActor, float DefaultAttackRange);


	UFUNCTION(BlueprintCallable)
	FTransform GetSkeletonMeshSocketTransform(FName SocketName);

	UFUNCTION(BlueprintCallable)
	FVector GetSkeletonMeshSocketPos(FName SocketName);

private:
	UPROPERTY()
	TWeakObjectPtr<APTPlayerStart> PlayerStart;
	int32 TableId;
};
