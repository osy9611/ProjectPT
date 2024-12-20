#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "PTGameplayAbilityTargetActor_Trace.generated.h"

class UPTAttributeSet;
UCLASS()
class PROJECTPT_API APTGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
    GENERATED_BODY()

public:
    APTGameplayAbilityTargetActor_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    virtual void StartTargeting(UGameplayAbility* Ability) override;
    virtual void ConfirmTargetingAndContinue() override;
    void SetShowDebug(bool InShowDebug) { bShowDebug = InShowDebug; }
    
protected:
    virtual FGameplayAbilityTargetDataHandle MakeTargetData();
    bool CheckCollisionData();
    bool bShowDebug = false;
private:
    TWeakObjectPtr<UPTAttributeSet> AttributeSet;
};