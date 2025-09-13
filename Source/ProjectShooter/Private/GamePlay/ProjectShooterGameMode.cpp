// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/ProjectShooterGameMode.h"

void AProjectShooterGameMode::UpdateRankingCpp()
{
	int32 RankingIndex = 0;
	for (int32 Index = 0; Index < RankingScoresCpp.Num(); Index++)
	{
		float Element = RankingScoresCpp[Index];
		if (Element >= ScoreCpp)
		{
			RankingIndex++;
		}
		else
		{
			break;
		}
	}

	RankingCpp = RankingIndex + 1;
	RankingScoresCpp.Insert(ScoreCpp, RankingIndex);
	RankingTimesCpp.Insert(EndTimeCpp.ToString(), RankingIndex);

	if (RankingTimesCpp.Num() > 10)
	{
		RankingScoresCpp.RemoveAt(RankingScoresCpp.Num() - 1);
		RankingTimesCpp.RemoveAt(RankingTimesCpp.Num() - 1);
	}
}

StateOfGameCpp AProjectShooterGameMode::GetStateCpp() const
{
	return StateCpp;
}

FDateTime AProjectShooterGameMode::GetStartTimeCpp() const
{
	return StartTimeCpp;
}

int32 AProjectShooterGameMode::GetRankingCpp() const
{
	return RankingCpp;
}

TArray<float> AProjectShooterGameMode::GetRankingScoresCpp() const
{
	return RankingScoresCpp;
}

TArray<FString> AProjectShooterGameMode::GetRankingTimesCpp() const
{
	return RankingTimesCpp;
}
