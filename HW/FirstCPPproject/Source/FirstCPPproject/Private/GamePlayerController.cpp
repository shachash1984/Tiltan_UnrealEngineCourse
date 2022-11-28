// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "FirstCPPproject/FirstCPPproject.h"
#include "Kismet/GameplayStatics.h"
#include "Arrow.h"

AGamePlayerController::AGamePlayerController()
{
	//UE_LOG(LogFirstCPPproject, Log, TEXT("AGamePlayerController Constructor"));
}

void AGamePlayerController::OnShootPressed()
{
	UE_LOG(LogFirstCPPproject, Log, TEXT("Shooting yay"));

	UWorld* World = GetWorld();
	if (World) 
	{
		if (!CameraManager) 
		{
			CameraManager = UGameplayStatics::GetPlayerCameraManager(World,0);
		}

		FVector CurrentLocation = GetPawn()->GetActorLocation();
		//FRotator CurrentPawnRotation = GetPawn()->GetActorRotation();
		FVector Direction = CameraManager->GetActorForwardVector();
		FRotator CurrentControllerRotation = GetPawn()->GetControlRotation();

		//FVector pos = this->GetRelativeLocation();
		AArrow* Arrow = World->SpawnActor<AArrow>(CurrentLocation + Direction *100, CurrentControllerRotation);
		if (Arrow) {
			Arrow->Launch(Direction, CurrentControllerRotation, 3000);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Shoot", IE_Pressed, this, &AGamePlayerController::OnShootPressed);
}
