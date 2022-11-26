// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWork.h"

AGamePlayerController::AGamePlayerController()
{
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("OnShootPressed"));
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
