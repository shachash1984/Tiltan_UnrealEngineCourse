// Copyright Epic Games, Inc. All Rights Reserved.


#include "Class4HWGameModeBase.h"
#include "public/GamePlayerController.h"

AClass4HWGameModeBase::AClass4HWGameModeBase()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
