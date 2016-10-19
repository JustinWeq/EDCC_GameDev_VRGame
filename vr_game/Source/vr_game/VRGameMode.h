// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "VRGameMode.generated.h"

/**
 * 
 */
UCLASS()
class VR_GAME_API AVRGameMode : public AGameMode
{
	GENERATED_BODY()

		UFUNCTION()
	void	BeginPlay() override;
	
	
	
};
