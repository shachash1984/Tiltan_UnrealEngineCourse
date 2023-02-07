// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "CharacterController/CharacterController.h"
#include "CharacterController/Public/Arrow.h"
#include "CharacterController/Public/Spear.h"
#include <Kismet/GameplayStatics.h>

AGamePlayerController::AGamePlayerController()
{

}

void AGamePlayerController::OnShootArrowPressed()
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

		AArrow* Arrow = World->SpawnActor<AArrow>(CurrentLocation + Direction *100, CurrentControllerRotation);
		if (Arrow)
		{
			Arrow->Launch(Direction, CurrentControllerRotation, 2000);
		}
	}
}

void AGamePlayerController::OnShootSpearPressed()
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

		ASpear* Spear = World->SpawnActor<ASpear>(CurrentLocation + Direction * 100, CurrentControllerRotation);
		
		if (Spear)
		{
			Spear->Launch(Direction, CurrentControllerRotation, 2000);
		}
	}
}

void AGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("ShootF", IE_Pressed, this, &AGamePlayerController::OnShootArrowPressed);
	InputComponent->BindAction("ShootE", IE_Pressed, this, &AGamePlayerController::OnShootSpearPressed);
}
