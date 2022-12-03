// Fill out your copyright notice in the Description page of Project Settings.


#include "TiltanPhysics/Public/GamePlayerController.h"

#include "Arrow.h"
#include "Kismet/GameplayStatics.h"
#include "TiltanPhysics/TiltanPhysics.h"

AGamePlayerController::AGamePlayerController()
{
	
}

void AGamePlayerController::OnShootPressed()
{
	

	UWorld* World = GetWorld();
	if (World)
	{
		if (!CameraManager)
		{
			CameraManager = UGameplayStatics::GetPlayerCameraManager(World, 0);
		}

		FVector CurrentLocation = GetPawn()->GetActorLocation();
		FRotator CurrentPawnRotation = GetPawn()->GetActorRotation();
		FVector Direction = CameraManager->GetActorForwardVector();
		FRotator CurrentControllerRotation = GetPawn()->GetControlRotation();

		AArrow* Arrow = World->SpawnActor<AArrow>(CurrentLocation + Direction*100, CurrentControllerRotation);
		if (Arrow)
		{
			Arrow->Launch(Direction, CurrentControllerRotation, 2000.0f);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
