// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "S05x_TestingGrounds.h"
#include "S05x_TestingGroundsGameMode.h"
#include "S05x_TestingGroundsHUD.h"
#include "S05x_TestingGroundsCharacter.h"

AS05x_TestingGroundsGameMode::AS05x_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05x_TestingGroundsHUD::StaticClass();
}
