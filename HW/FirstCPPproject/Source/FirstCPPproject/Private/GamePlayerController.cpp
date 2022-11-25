// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "FirstCPPproject/FirstCPPproject.h"

AGamePlayerController::AGamePlayerController()
{
	//UE_LOG(LogFirstCPPproject, Log, TEXT("AGamePlayerController Constructor"));
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogFirstCPPproject, Log, TEXT("Shooting yay"));
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
