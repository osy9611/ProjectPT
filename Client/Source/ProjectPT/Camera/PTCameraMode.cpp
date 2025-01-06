// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCameraMode.h"
#include "PTPlayerCameraManager.h"
#include "PTCameraComponent.h"

FPTCameraModeView::FPTCameraModeView()
	:Location(ForceInit)
	, Rotation(ForceInit)
	, ControlRotation(ForceInit)
	, FieldOfView(PT_CAMERA_DEFAULT_FOV)
{
}

void FPTCameraModeView::Blend(const FPTCameraModeView& Other, float OtherWeight)
{
	if (OtherWeight <= 0.0f)
		return;
	else if (OtherWeight >= 1.0f)
	{
		//Weight�� 1.0�̸� Other�� ����� �ȴ�.
		*this = Other;
		return;
	}

	//Location + OtherWeight * (Other.Location - Location)
	Location = FMath::Lerp(Location, Other.Location, OtherWeight);

	//Location�� ���� ��� Lerp (ControlRotation�� FieldOfView�� ����)
	const FRotator DeltaRotation = (Other.Rotation - Rotation).GetNormalized();
	Rotation = Rotation + (OtherWeight * DeltaRotation);

	const FRotator DeltaControlRotation = (Other.ControlRotation - ControlRotation).GetNormalized();
	ControlRotation = ControlRotation + (OtherWeight * DeltaControlRotation);

	FieldOfView = FMath::Lerp(FieldOfView, Other.FieldOfView, OtherWeight);
}

UPTCameraMode::UPTCameraMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FieldOfView = PT_CAMERA_DEFAULT_FOV;
	ViewPitchMin = PT_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = PT_CAMERA_DEFAULT_PITCH_MAX;

	BlendTime = 0.5f;
	BlendFunction = EPTCameraModeBlendFunction::EaseOut;
	BlendExponent = 4.0f;
	BlendAlpha = 1.0f;
	BlendWeight = 1.0f;
}

void UPTCameraMode::UpdateCameraMode(float DeltaTime)
{
	//Actor�� Ȱ���Ͽ�, Pivot[Location|Rotation]�� ����Ͽ�, View�� ������Ʈ
	UpdateView(DeltaTime);

	//BlendWeight�� DeltaTime�� Ȱ���Ͽ�, BlendAlpha ��� ��, BlendFunction�� �°� �� �����Ͽ� ���� ���
	UpdateBlending(DeltaTime);
}

void UPTCameraMode::UpdateView(float DeltaTime)
{
	FVector PivotLocation = GetPivotLocation();
	FRotator PivotRotation = GetPivotRotation();

	PivotRotation.Pitch = FMath::ClampAngle(PivotRotation.Pitch, ViewPitchMin, ViewPitchMax);

	View.Location = PivotLocation;
	View.Rotation = PivotRotation;
	View.ControlRotation = View.Rotation;
	View.FieldOfView = FieldOfView;
}

void UPTCameraMode::UpdateBlending(float DeltaTime)
{
	//BlendAlpha�� DeltaTime�� ���� ���
	if (BlendTime > 0.0f)
	{
		BlendAlpha += (DeltaTime / BlendTime);
		BlendAlpha = FMath::Min(BlendAlpha, 1.0f);
	}	
	else
		BlendAlpha = 1.0f;

	const float Exponent = (BlendExponent > 0.0f) ? BlendExponent : 1.0f;
	switch (BlendFunction)
	{
	case EPTCameraModeBlendFunction::Linear:
		BlendWeight = BlendAlpha;
		break;
	case EPTCameraModeBlendFunction::EaseIn:
		BlendWeight = FMath::InterpEaseIn(0.0f, 1.0f, BlendAlpha, Exponent);
		break;
	case EPTCameraModeBlendFunction::EaseOut:
		BlendWeight = FMath::InterpEaseOut(0.0f, 1.0f, BlendAlpha, Exponent);
		break;
	case EPTCameraModeBlendFunction::EaseInOut:
		BlendWeight = FMath::InterpEaseInOut(0.0f, 1.0f, BlendAlpha, Exponent);
		break;

	default:
		checkf(false, TEXT("UpdateBlending: Ivalid BlendFunction [%d]\n"), (uint8)BlendFunction);
		break;
	}
}

UPTCameraComponent* UPTCameraMode::GetPTCameraComponent() const
{
	//UPTCameraModeStack::GetCameraModeInstacne()Ȯ��
	return CastChecked<UPTCameraComponent>(GetOuter());
}

AActor* UPTCameraMode::GetTargetActor() const
{
	const UPTCameraComponent* PTCameraComponent = GetPTCameraComponent();
	return PTCameraComponent->GetTargetActor();
}

FVector UPTCameraMode::GetPivotLocation() const
{
	const AActor* TargetActor = GetTargetActor();
	check(TargetActor);

	//BaseEyeHeight�� ����Ͽ�, ViewLocation�� ��ȯ
	if (const APawn* TargetPawn = Cast<APawn>(TargetActor))
		return TargetPawn->GetPawnViewLocation();

	return TargetActor->GetActorLocation();
}

FVector UPTCameraMode::GetPivotForward() const
{
	const AActor* TargetActor = GetTargetActor();
	check(TargetActor);

	return TargetActor->GetActorForwardVector();
}

FRotator UPTCameraMode::GetPivotRotation() const
{
	const AActor* TargetActor = GetTargetActor();
	check(TargetActor);

	//GetViewRotation() Ȯ��, ���� Pawn�� ControlRotation�� ��ȯ
	if (const APawn* TargetPawn = Cast<APawn>(TargetActor))
		return TargetPawn->GetViewRotation();

	return TargetActor->GetActorRotation();
}

void UPTCameraMode::SetBlendWeight(float Weight)
{
	BlendWeight = FMath::Clamp(Weight, 0.0f, 1.0f);

	const float InvExponent = (BlendExponent > 0.0f) ? (1.0f / BlendExponent) : 1.0f;

	switch (BlendFunction)
	{
	case EPTCameraModeBlendFunction::Linear:
		BlendAlpha = BlendWeight;
		break;

	case EPTCameraModeBlendFunction::EaseIn:
		BlendAlpha = FMath::InterpEaseIn(0.0f, 1.0f, BlendWeight, InvExponent);
		break;

	case EPTCameraModeBlendFunction::EaseOut:
		BlendAlpha = FMath::InterpEaseOut(0.0f, 1.0f, BlendWeight, InvExponent);
		break;

	case EPTCameraModeBlendFunction::EaseInOut:
		BlendAlpha = FMath::InterpEaseInOut(0.0f, 1.0f, BlendWeight, InvExponent);
		break;

	default:
		checkf(false, TEXT("SetBlendWeight: Invalid BlendFunction [%d]\n"), (uint8)BlendFunction);
		break;
	}

}

UPTCameraModeStack::UPTCameraModeStack(const FObjectInitializer& ObjectInitializer)
{
}

UPTCameraMode* UPTCameraModeStack::GetCameraModeInstance(TSubclassOf<UPTCameraMode>& CameraModeClass)
{
	check(CameraModeClass);

	//CameraModeInstance���� ���� �����Ǿ��ִ��� Ȯ�� �� ��ȯ�Ѵ�.
	for (UPTCameraMode* CameraMode : CameraModeInstance)
	{
		//CameraMode�� UClass�� ���Ѵ� -> CameraMode�� Ŭ���� Ÿ�Կ� �ϳ��� ���Ⱑ��
		if ((CameraMode != nullptr) && (CameraMode->GetClass() == CameraModeClass))
			return CameraMode;
	}

	//CameraModeClass�� �˸´� CameraMode�� �ν��Ͻ��� ���ٸ� �����Ѵ�.
	UPTCameraMode* NewCameraMode = NewObject<UPTCameraMode>(GetOuter(), CameraModeClass, NAME_None, RF_NoFlags);
	check(NewCameraMode);

	CameraModeInstance.Add(NewCameraMode);

	return NewCameraMode;
}

void UPTCameraModeStack::PushCameraMode(TSubclassOf<UPTCameraMode>& CameraModeClass)
{
	if (!CameraModeClass)
		return;

	UPTCameraMode* CameraMode = GetCameraModeInstance(CameraModeClass);
	check(CameraMode);

	int32 StackSize = CameraModeStack.Num();
	//���� �ֱٿ� �̹� CameraMode�� Stacking �Ǿ����Ƿ� �׳� ����
	if ((StackSize > 0) && (CameraModeStack[0] == CameraMode))
		return;

	int32 ExistingStackIndex = INDEX_NONE;
	float ExistingStackContribution = 1.0f;

	/**
	 * BlendWeight    |    ExistingStackCOntribution    |    ExistingStackCOntribution (accumulated)
	 * 0.1f           |    (1.0f) * 0.1f = 0.1f         |    (1.0f - 0.1f) = 0.9f
	 * 0.3f           |    (0.9f) * 0.3f = 0.27f        |    (1.0f - 0.3f) * 0.9f = 0.63f
	 * 0.6f           |    (0.63f) * 0.6f = 0.378f      |    (1.0f - 0.6f) * 0.63f = 0.252f
	 * 1.0f           |    (0.252f) * 1.0f = 0.252f     |
	 *                |    0.1f + 0.27f + 0.378f + 0.252f = 1.0f!
	 */
	for (int32 StackIndex = 0; StackIndex < StackSize; ++StackIndex)
	{
		if (CameraModeStack[StackIndex] == CameraMode)
		{
			ExistingStackIndex = StackIndex;
			ExistingStackContribution *= CameraMode->GetBlendWeight();
			break;
		}
		else
		{
			//���ϴ� CameraMode�� �ƴϴϱ�, InvBlendWeight = (1.0 - BlendWeight)�� �������, ���� �����ȴ�
			ExistingStackContribution *= (1.0f - CameraModeStack[StackIndex]->GetBlendWeight());
		}
	}

	if (ExistingStackIndex != INDEX_NONE)
	{
		CameraModeStack.RemoveAt(ExistingStackIndex);
		StackSize--;
	}
	else
	{
		ExistingStackContribution = 0;
	}

	//BlendTime�� 0���� ũ�ٴ� ���� Blend�� �� �ð����� �������� �ǹ�, ���� ExistingStackContribution�� ����
	const bool bShouldBlend = ((CameraMode->GetBlendTime() > 0.0f) && (StackSize > 0));

	const float BlendWeight = (bShouldBlend ? ExistingStackContribution : 1.0f);
	CameraMode->SetBlendWeight(BlendWeight);

	CameraModeStack.Insert(CameraMode, 0);
	CameraModeStack.Last()->SetBlendWeight(1.0f);
}

void UPTCameraModeStack::EvaluateStack(float DeltaTime, FPTCameraModeView& OutCameraModeView)
{
	//Top -> Bottom [0 -> Num]���� ���������� Stack�� �ִ� CameraMode ������Ʈ
	UpdateStack(DeltaTime);

	//Bottom -> Top ���� CameraModeStack�� ���� Blending ����
	BlendStack(OutCameraModeView);
}

void UPTCameraModeStack::UpdateStack(float DeltaTime)
{
	const int32 StackSize = CameraModeStack.Num();
	if (StackSize <= 0)
		return;

	int32 RemoveCount = 0;
	int32 RemoveIndex = INDEX_NONE;

	for (int32 StackIndex = 0; StackIndex < StackSize; ++StackIndex)
	{
		UPTCameraMode* CameraMode = CameraModeStack[StackIndex];
		check(CameraMode);

		CameraMode->UpdateCameraMode(DeltaTime);

		if (CameraMode->GetBlendWeight() >= 1.0f)
		{
			RemoveIndex = (StackIndex + 1);
			RemoveCount = (StackSize - RemoveIndex);
			break;
		}
	}

	if (RemoveIndex > 0)
	{
		CameraModeStack.RemoveAt(RemoveIndex, RemoveCount);
	}
}

void UPTCameraModeStack::BlendStack(FPTCameraModeView& OutCameraModeView) const
{
	const int32 StackSize = CameraModeStack.Num();
	if (StackSize <= 0)
		return;

	//CameraModeStack�� Botton->Top ������ Blend�� �����Ѵ�
	const UPTCameraMode* CameraMode = CameraModeStack[StackSize - 1];
	check(CameraMode);

	OutCameraModeView = CameraMode->GetCameraModeView();

	//�̹� Index = [StackSize-1] �� OutCameraModeView�� ���������Ƿ�, StackSize - 2 ���� ��ȸ�ϸ� �ȴ�.
	for (int32 StackIndex = (StackSize - 2); StackIndex >= 0; --StackIndex)
	{
		CameraMode = CameraModeStack[StackIndex];
		check(CameraMode);

		OutCameraModeView.Blend(CameraMode->GetCameraModeView(), CameraMode->GetBlendWeight());
	}
}
