// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlatformerCPPGameMode.h"
#include "PlatformerCPPHUD.h"
#include "PlatformerCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatformerCPPGameMode::APlatformerCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/BP_PlatformerCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APlatformerCPPHUD::StaticClass();
}

void APlatformerCPPGameMode::StartPlay() {

	Super::StartPlay();

	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is the gamemode!"));

}
