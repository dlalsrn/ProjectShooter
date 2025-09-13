// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/ProjectShooterPlayerController.h"
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "ProjectShooterGameMode.h"
#include <Widget/ProjectShooterResultWidget.h>
#include <Widget/ProjectShooterGamePlayWidget.h>

void AProjectShooterPlayerController::OnEndGameCpp()
{
	UUserWidget* Widget = CreateWidget(this, ResultWidgetCpp);
	if (Widget)
	{
		Widget->AddToViewport();
	}
}

void AProjectShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(ProjectShooterInputMappingContextCpp, 0);
	}

	UUserWidget* Widget = CreateWidget(this, GamePlayWidgetCpp);
	if (Widget)
	{
		Widget->AddToViewport();
	}

	AProjectShooterGameMode* GameMode = Cast<AProjectShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->OnEndGameCpp.AddUniqueDynamic(this, &AProjectShooterPlayerController::OnEndGameCpp);
	}
}
