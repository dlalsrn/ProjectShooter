// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/ProjectShooterGamePlayWidget.h"
#include <Kismet/GameplayStatics.h>
#include <GamePlay/ProjectShooterGameMode.h>

void UProjectShooterGamePlayWidget::TickTimeCpp()
{
	AProjectShooterGameMode* GameMode = Cast<AProjectShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		StateOfGameCpp State = GameMode->GetStateCpp();
		FDateTime StartTime = GameMode->GetStartTimeCpp();
		FDateTime NowTime = FDateTime::Now();
		FTimespan PlayTime = NowTime - StartTime;

		switch (State)
		{
		case StateOfGameCpp::Ready:
			PlayTimeText->SetText(FText::FromString(TEXT("")));
			break;
		case StateOfGameCpp::Running:
			FString Minute = FString::FromInt(PlayTime.GetMinutes());
			FString Second = FString::FromInt(PlayTime.GetSeconds());
			FString MilliSecond = FString::FromInt(PlayTime.GetFractionMilli());
			FString Text = Minute + TEXT(":") + Second + TEXT(":") + MilliSecond;
			PlayTimeText->SetText(FText::FromString(Text));
			break;
		}
	}
}
