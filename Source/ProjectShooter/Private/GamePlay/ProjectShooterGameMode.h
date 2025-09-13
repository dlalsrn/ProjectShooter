// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectShooterGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FProjectShooterGameModeEndGame, AProjectShooterGameMode, OnEndGameCpp);

UENUM(BlueprintType)
enum class StateOfGameCpp : uint8
{
	Ready,
	Running,
	End,
};

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

	UFUNCTION(BlueprintCallable)
	StateOfGameCpp GetStateCpp() const;

	FDateTime GetStartTimeCpp() const;

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FProjectShooterGameModeEndGame OnEndGameCpp;

protected:
	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	FDateTime StartTimeCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	FDateTime EndTimeCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	TArray<float> RankingScoresCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> RankingTimesCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	int32 RankingCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	float ScoreCpp;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	StateOfGameCpp StateCpp;
};
