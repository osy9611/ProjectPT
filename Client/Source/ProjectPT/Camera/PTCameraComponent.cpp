// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCameraComponent.h"
#include "ProjectPT/Camera/PTCameraMode.h"

UPTCameraComponent::UPTCameraComponent(const FObjectInitializer& ObjectInitializer)
{
	FieldOfViewOffset = 0;
}

void UPTCameraComponent::OnRegister()
{
	Super::OnRegister();
	if (!CameraModeStack)
		CameraModeStack = NewObject<UPTCameraModeStack>(this);
}

void UPTCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView)
{
	check(CameraModeStack);

	UpdateCameraModes();

	//EvaluateStack�� CameraModeStack�� �ִ� CameraMode�� ������Ʈ(+����)�ϰ� CameraModeStack�� Bottom-Top���� ������Ʈ�� CameraMode
	//���� Lerp�� �����Ѵ�.
	FPTCameraModeView CameraModeView;
	CameraModeStack->EvaluateStack(DeltaTime, CameraModeView);

	if (APawn* TargetPawn = Cast<APawn>(GetTargetActor()))
	{
		if (APlayerController* PC = TargetPawn->GetController<APlayerController>())
		{
			//PlayerController�� ControlRotation�� ���� CameraModeView�� ControlRotation���� ������Ʈ
			PC->SetControlRotation(CameraModeView.ControlRotation);
		}
	}

	//CameraComponent�� ���� Parent�� SceneGraph ���踦 ����� ������Ʈ�� ����
	SetWorldLocationAndRotation(CameraModeView.Location, CameraModeView.Rotation);

	CameraModeView.FieldOfView += FieldOfViewOffset;

	if (bResetFieldOfViewOffSet)
		FieldOfViewOffset = 0.0f;

	//FOV ������Ʈ 
	FieldOfView = CameraModeView.FieldOfView;

	//FMinimalViewInfo�� ������Ʈ 
	//CameraComponent�� ��ȭ ������ �ݿ��ؼ� ���� ���������� �ݿ��ϰ� ��
	DesiredView.Location = CameraModeView.Location;
	DesiredView.Rotation = CameraModeView.Rotation;
	DesiredView.FOV = CameraModeView.FieldOfView;
	DesiredView.OrthoWidth = OrthoWidth;
	DesiredView.OrthoNearClipPlane = OrthoNearClipPlane;
	DesiredView.OrthoFarClipPlane = OrthoFarClipPlane;
	DesiredView.AspectRatio = AspectRatio;
	DesiredView.bConstrainAspectRatio = bConstrainAspectRatio;
	DesiredView.bUseFieldOfViewForLOD = bUseFieldOfViewForLOD;
	DesiredView.ProjectionMode = ProjectionMode;
	DesiredView.PostProcessBlendWeight = PostProcessBlendWeight;
	if (PostProcessBlendWeight > 0.0f)
		DesiredView.PostProcessSettings = PostProcessSettings;
}

void UPTCameraComponent::UpdateCameraModes()
{
	check(CameraModeStack);

	if (DetermineCameraModeDelegate.IsBound())
	{
		if (TSubclassOf<UPTCameraMode> CameraMode = DetermineCameraModeDelegate.Execute())
			CameraModeStack->PushCameraMode(CameraMode);
	}
}

