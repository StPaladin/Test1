// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test1GameMode.h"
#include "Test1HUD.h"
#include "Test1Character.h"
#include "UObject/ConstructorHelpers.h"

ATest1GameMode::ATest1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest1HUD::StaticClass();
}
