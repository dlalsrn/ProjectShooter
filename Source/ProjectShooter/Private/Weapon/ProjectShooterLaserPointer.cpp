// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectShooterLaserPointer.h"

// Sets default values
AProjectShooterLaserPointer::AProjectShooterLaserPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

float AProjectShooterLaserPointer::GetEndPointOfLaserCpp(FVector Start, FVector End) const
{
	float Distance;

	FHitResult HitResult;
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility))
	{
		Distance = HitResult.Distance;
	}
	else
	{
		Distance = (End - Start).Length();
	}

	return Distance;
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

