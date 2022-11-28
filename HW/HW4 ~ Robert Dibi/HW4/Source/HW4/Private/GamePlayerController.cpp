// Fill out your copyright notice in the Description page of Project Settings.


#include "HW4/Public/GamePlayerController.h"
#include "HW4/HW4.h"

AGamePlayerController::AGamePlayerController()
{
	
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogHW4, Log, TEXT("OnShootPressed"))
}

void AGamePlayerController::SetupInputComponent()
{

	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
