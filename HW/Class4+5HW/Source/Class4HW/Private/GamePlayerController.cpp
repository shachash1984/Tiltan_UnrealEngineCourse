// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "Class4HW\Class4HW.h"
#include "Arrow.h"
#include "Kismet/GameplayStatics.h"

AGamePlayerController::AGamePlayerController()
{
	UE_LOG(LogClass4HW, Log, TEXT("CHECK Constructor"));
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogClass4HW, Log, TEXT("Pew"));
	UWorld* world = GetWorld();
	if (world)
	{

		if (!CameraManager)
		{
			CameraManager = UGameplayStatics::GetPlayerCameraManager(world, 0);
		}

		FVector currentLocation = GetPawn()->GetActorLocation();
		FRotator currentPawnRotation = GetPawn()->GetActorRotation();
		FVector direction = CameraManager->GetActorForwardVector();
		FRotator controllerRotation = GetPawn()->GetControlRotation();


		AArrow* Arrow = world->SpawnActor<AArrow>(currentLocation + direction * 100, currentPawnRotation);
		if (Arrow)
		{
			Arrow->Launch(direction, controllerRotation, 1000);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
