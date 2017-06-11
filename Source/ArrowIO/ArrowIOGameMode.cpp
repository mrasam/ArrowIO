// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ArrowIOGameMode.h"
#include "ArrowIOPlayerController.h"
#include "ArrowIOCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArrowIOGameMode::AArrowIOGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArrowIOPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}