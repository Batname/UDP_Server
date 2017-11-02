// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UDP_ServerGameMode.h"
#include "UDP_ServerHUD.h"
#include "UDP_ServerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUDP_ServerGameMode::AUDP_ServerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUDP_ServerHUD::StaticClass();
}
