// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlaygroundGameMode.h"
#include "PlaygroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlaygroundGameMode::APlaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
