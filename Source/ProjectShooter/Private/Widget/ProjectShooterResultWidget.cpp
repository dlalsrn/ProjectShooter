// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/ProjectShooterResultWidget.h"
#include <GamePlay/ProjectShooterGameMode.h>
#include <Kismet/GameplayStatics.h>
#include <Blueprint/WidgetTree.h>
#include <Components/GridSlot.h>

void UProjectShooterResultWidget::NativeConstruct()
{
	Super::NativeConstruct();

	InitRankingCpp();
}

void UProjectShooterResultWidget::InitRankingCpp()
{
	AProjectShooterGameMode* GameMode = Cast<AProjectShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		int32 Ranking = GameMode->GetRankingCpp();
		TArray<float> Scores = GameMode->GetRankingScoresCpp();
		TArray<FString> Times = GameMode->GetRankingTimesCpp();

		FString Text = TEXT("Your Ranking = #") + FString::FromInt(Ranking);
		YourRankingText->SetText(FText::FromString(Text));

		for (int32 Index = 0; Index < Scores.Num(); Index++)
		{
			int32 Row = Index + 1;

			UTextBlock* Rank = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
			if (Rank)
			{
				Rank->SetText(FText::AsNumber(Row));
				UGridSlot* ChildSlot = Rankingtable->AddChildToGrid(Rank, Row, 0);
				ChildSlot->SetNudge(FVector2D(150.0f, Row * 20.0f));
			}

			UTextBlock* Score = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
			if (Score)
			{
				Score->SetText(FText::AsNumber(Scores[Index]));
				UGridSlot* ChildSlot = Rankingtable->AddChildToGrid(Score, Row, 1);
				ChildSlot->SetNudge(FVector2D(350.0f, Row * 20.0f));
			}

			UTextBlock* Time = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
			if (Time)
			{
				Time->SetText(FText::FromString(Times[Index]));
				UGridSlot* ChildSlot = Rankingtable->AddChildToGrid(Time, Row, 2);
				ChildSlot->SetNudge(FVector2D(550.0f, Row * 20.0f));
			}
		}
	}
}
