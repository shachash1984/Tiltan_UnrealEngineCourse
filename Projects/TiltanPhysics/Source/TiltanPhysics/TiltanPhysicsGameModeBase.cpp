// Copyright Epic Games, Inc. All Rights Reserved.


#include "TiltanPhysicsGameModeBase.h"

#include "Public/GamePlayerController.h"

ATiltanPhysicsGameModeBase::ATiltanPhysicsGameModeBase()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
