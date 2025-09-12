// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/ProjectShooterCharacter.h"

// Sets default values
AProjectShooterCharacter::AProjectShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AProjectShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

