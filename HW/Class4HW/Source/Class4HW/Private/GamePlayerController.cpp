// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "Class4HW\Class4HW.h"

AGamePlayerController::AGamePlayerController()
{
	UE_LOG(LogClass4HW, Log, TEXT("CHECK Constructor"));
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogClass4HW, Log, TEXT("Pew"));
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
