// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectShooterLaserPointer.h"

// Sets default values
AProjectShooterLaserPointer::AProjectShooterLaserPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectShooterLaserPointer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectShooterLaserPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

