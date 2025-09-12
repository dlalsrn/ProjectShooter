// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectShooterGameMode.h"
#include "ProjectShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectShooterGameMode::AProjectShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
