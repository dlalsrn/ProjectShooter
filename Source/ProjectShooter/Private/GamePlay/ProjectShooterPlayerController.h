// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include <InputMappingContext.h>
#include "ProjectShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AProjectShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	void OnEndGameCpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UInputMappingContext> ProjectShooterInputMappingContextCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> GamePlayWidgetCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ResultWidgetCpp;
};
