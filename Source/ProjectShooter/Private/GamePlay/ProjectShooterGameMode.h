// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectShooterGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FProjectShooterGameModeEndGame, AProjectShooterGameMode, OnEndGameCpp);

/**
 * 
 */
UCLASS()
class AProjectShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void UpdateRankingCpp();

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FProjectShooterGameModeEndGame OnEndGameCpp;

protected:
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	FDateTime StartTimeCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	FDateTime EndTimeCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	TArray<float> RankingScoresCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> RankingTimesCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	int32 RankingCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	float ScoreCpp;
};
