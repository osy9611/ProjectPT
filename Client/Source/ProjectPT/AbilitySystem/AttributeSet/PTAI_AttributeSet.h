// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTAttributeSet.h"
#include "PTAI_AttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTAI_AttributeSet : public UPTAttributeSet
{
	GENERATED_BODY()
public:
	UPTAI_AttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void InitAttributeSet(FString RowName) override;

};
