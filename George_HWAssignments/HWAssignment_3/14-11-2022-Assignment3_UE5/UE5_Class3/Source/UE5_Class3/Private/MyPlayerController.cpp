// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"


void AMyPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	InputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayerController::SomeInputMethod);
}

