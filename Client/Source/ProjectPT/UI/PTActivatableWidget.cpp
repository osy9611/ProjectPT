// Fill out your copyright notice in the Description page of Project Settings.


#include "PTActivatableWidget.h"

UPTActivatableWidget::UPTActivatableWidget()
{

}

TOptional<FUIInputConfig> UPTActivatableWidget::GetDesiredInputConfig() const
{
	return  FUIInputConfig(InputMode, MouseCaptureMode);
}
