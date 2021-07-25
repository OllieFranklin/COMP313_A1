// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerCharacter.h"

// Sets default values
APlatformerCharacter::APlatformerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlatformerCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));
	
}

// Called every frame
void APlatformerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlatformerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlatformerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlatformerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APlatformerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlatformerCharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlatformerCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlatformerCharacter::StopJump);
}

void APlatformerCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void APlatformerCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void APlatformerCharacter::StartJump()
{
	bPressedJump = true;
}

void APlatformerCharacter::StopJump()
{
	bPressedJump = false;
}