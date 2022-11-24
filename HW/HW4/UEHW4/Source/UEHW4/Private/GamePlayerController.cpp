// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "UEHW4\UEHW4.h"

AGamePlayerController::AGamePlayerController()
{
	UE_LOG(logHW4, Log, TEXT("AGamePlayerController Constructor"));
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(logHW4, Log, TEXT("PewPew"));
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
