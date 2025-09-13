// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProjectShooterSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class UProjectShooterSaveGame : public USaveGame
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ScoresCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> TimesCpp;
};
