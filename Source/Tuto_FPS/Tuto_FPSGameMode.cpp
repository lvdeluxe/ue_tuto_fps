// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Tuto_FPSGameMode.h"
#include "Tuto_FPSHUD.h"
#include "Tuto_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATuto_FPSGameMode::ATuto_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATuto_FPSHUD::StaticClass();
}
