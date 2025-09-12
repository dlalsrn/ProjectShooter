// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectShooterWeapon.h"

// Sets default values
AProjectShooterWeapon::AProjectShooterWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectShooterWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectShooterWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

