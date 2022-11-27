// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "CharacterController/CharacterController.h"

AGamePlayerController::AGamePlayerController()
{
	
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogCharacterController, Log, TEXT("OnShootPressed"))
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
