// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayTagsManager.h"
#include "PTGameModeBase.generated.h"

class UPTPawnData;
class UPTExperienceDefinition;
UCLASS()
class PROJECTPT_API APTGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	APTGameModeBase();

	//���� �� �ʹ� ����
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;

	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) final;

	/*
	* HandleStartingNewPlayer
	*  - ���ο� �÷��̾ ���ӿ� ������ �� �ʱ� ������ �����ϴ� �Լ�
	*  - �÷��̾ ���ӿ� ������ ��� �⺻ ���� �����ϰ�, ���� ��ġ�� ��ġ�ϸ� �ʱ�ȭ �۾��� �����ϴ� �߿��� ������ �Ѵ�.
	*  - Unity�� OnSceneLoaded�� ������
	*/
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) final;

	/*
	* SpawnDefaultPawnAtTransform
	* ���ӿ� ������ �� ����� �⺻ ���� �����ϴ� �Լ�. �ַ� �÷��̾ ������ ó�� ������ �� ȣ��Ǹ�, �⺻ ���� Ư�� ��ġ�� ȸ������ ������ ��ȯ��
	* �����ϱ� ���ؼ� ���ȴ�.
	*/
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) final;

	/*
	* ChoosePlayerStart_Implementation
	* ���ӿ� ������ �� ��� �������� ���������� �����ϱ� ���� ���ȴ�.
	*/
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) final;

	void HandleMatchAssignmentIfNotExceptingOne();
	void OnMatchAssignmentGiven(FPrimaryAssetId ExperienceId);
	bool IsExperienceLoaded() const;
	void OnExperienceLoaded(const UPTExperienceDefinition* CurrentExperience);
	const UPTPawnData* GetPawnDataForController(const AController* InController) const;
};