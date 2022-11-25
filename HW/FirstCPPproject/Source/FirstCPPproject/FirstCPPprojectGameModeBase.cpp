// Copyright Epic Games, Inc. All Rights Reserved.


#include "FirstCPPprojectGameModeBase.h"

#include "Public/GamePlayerController.h"

AFirstCPPprojectGameModeBase::AFirstCPPprojectGameModeBase() 
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
