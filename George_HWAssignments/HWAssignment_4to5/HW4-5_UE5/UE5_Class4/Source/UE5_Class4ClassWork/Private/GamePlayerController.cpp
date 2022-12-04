// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWork.h"
#include <Arrow.h>
#include <Kismet/GameplayStatics.h>

AGamePlayerController::AGamePlayerController()
{
}

void AGamePlayerController::OnShootPressed()
{
	//UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("OnShootPressed"));

	UWorld* World = GetWorld();
	if (World)
	{
		if (!CameraManager)
		{
			CameraManager = UGameplayStatics::GetPlayerCameraManager(World, 0);
		}

		FVector CurrentLocation = GetPawn()->GetActorLocation();
		FRotator CurrentRotation = GetPawn()->GetActorRotation();
		FVector LookDirection = CameraManager->GetActorForwardVector();
		FRotator ControllerRotation = GetPawn()->GetControlRotation();


		AArrow* Arrow = World->SpawnActor<AArrow>(CurrentLocation + LookDirection * 50, CurrentRotation);
		if (Arrow)
		{
			Arrow->Launch(LookDirection, ControllerRotation, 2000);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
