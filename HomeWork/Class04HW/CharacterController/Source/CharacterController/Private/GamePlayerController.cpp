// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "CharacterController/CharacterController.h"
#include "CharacterController/Public/Arrow.h"

AGamePlayerController::AGamePlayerController()
{

}

void AGamePlayerController::OnShootPressed()
{

	UWorld* World = GetWorld();
	if (World)
	{
		AArrow* Arrow = World->SpawnActor<AArrow>(FVector::ZeroVector, FRotator::ZeroRotator);
		if (Arrow)
		{
			Arrow->Launch(FVector::ZeroVector, FRotator::ZeroRotator, 500);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
