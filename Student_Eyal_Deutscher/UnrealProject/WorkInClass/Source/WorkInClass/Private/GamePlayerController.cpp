// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"


AGamePlayerController::AGamePlayerController()
{
	UE_LOG(LogWorkInClass, Log, TEXT("AGamePlayerController constructor is woorking"));
}

void AGamePlayerController::OnShootPressed()
{
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
