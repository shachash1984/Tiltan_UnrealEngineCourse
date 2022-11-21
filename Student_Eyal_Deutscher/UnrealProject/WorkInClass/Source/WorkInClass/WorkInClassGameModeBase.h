// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WorkInClassGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class WORKINCLASS_API AWorkInClassGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	DECLARE_LOG_CATEGORY_EXTERN(LogWorkInClass, Log, All);
	AWorkInClassGameModeBase();
public:
};
