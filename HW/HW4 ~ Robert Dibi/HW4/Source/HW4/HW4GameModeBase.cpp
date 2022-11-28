// Copyright Epic Games, Inc. All Rights Reserved.


#include "HW4GameModeBase.h"
#include "Public/GamePlayerController.h"
AHW4GameModeBase::AHW4GameModeBase()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
	
}
