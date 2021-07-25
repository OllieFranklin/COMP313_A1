// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BlankProjectCPPGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BLANKPROJECTCPP_API ABlankProjectCPPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
};
