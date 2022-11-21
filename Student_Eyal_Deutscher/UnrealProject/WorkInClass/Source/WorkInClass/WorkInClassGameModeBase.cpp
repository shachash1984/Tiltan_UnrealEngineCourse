// Copyright Epic Games, Inc. All Rights Reserved.


#include "WorkInClassGameModeBase.h"
#include "Modules/ModuleManager.h"
#include "Public/GamePlayerController.h"

AWorkInClassGameModeBase::AWorkInClassGameModeBase()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, WorkInClass, "WorkInClass")

DEFINE_LOG_CATEGORY(LogWorkInClass)

