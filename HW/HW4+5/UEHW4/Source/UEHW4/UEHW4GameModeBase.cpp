// Copyright Epic Games, Inc. All Rights Reserved.


#include "UEHW4GameModeBase.h"
#include "Public/GamePlayerController.h"

AUEHW4GameModeBase::AUEHW4GameModeBase()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
