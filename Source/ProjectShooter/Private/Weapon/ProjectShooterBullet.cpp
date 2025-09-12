// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectShooterBullet.h"

// Sets default values
AProjectShooterBullet::AProjectShooterBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectShooterBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectShooterBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

