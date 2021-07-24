// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlatformerCPPGameMode.h"
#include "PlatformerCPPHUD.h"
#include "PlatformerCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatformerCPPGameMode::APlatformerCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APlatformerCPPHUD::StaticClass();
}
