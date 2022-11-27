// Copyright Epic Games, Inc. All Rights Reserved.


#include "CharacterControllerGameModeBase.h"
#include "Public/GamePlayerController.h"

ACharacterControllerGameModeBase::ACharacterControllerGameModeBase() 
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}