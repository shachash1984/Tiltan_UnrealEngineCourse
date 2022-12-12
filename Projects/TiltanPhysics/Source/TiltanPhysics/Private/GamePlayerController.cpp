// Fill out your copyright notice in the Description page of Project Settings.


#include "TiltanPhysics/Public/GamePlayerController.h"
#include "TiltanPhysics/TiltanPhysics.h"

AGamePlayerController::AGamePlayerController()
{
	
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogTiltanPhysics, Log, TEXT("OnShootPressed"));
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
