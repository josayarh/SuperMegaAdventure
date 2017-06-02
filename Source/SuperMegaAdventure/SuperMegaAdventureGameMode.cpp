// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SuperMegaAdventure.h"
#include "SuperMegaAdventureGameMode.h"
#include "SuperMegaAdventureHUD.h"
#include "SuperMegaAdventureCharacter.h"

ASuperMegaAdventureGameMode::ASuperMegaAdventureGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASuperMegaAdventureHUD::StaticClass();
}
