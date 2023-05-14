// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CLASS4HW_API AGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AGamePlayerController();

protected:
	void OnShootPressed();
	void OnShoot2Pressed();
	virtual void SetupInputComponent() override;
	
	UPROPERTY(EditAnywhere)
	APlayerCameraManager* CameraManager {nullptr};

};
