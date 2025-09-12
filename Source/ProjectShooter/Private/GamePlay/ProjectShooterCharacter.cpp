// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/ProjectShooterCharacter.h"

// Sets default values
AProjectShooterCharacter::AProjectShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShadowBodyCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShadowBodyCpp"));
	ShadowBodyCpp->SetupAttachment(RootComponent);

	WeaponInBackCpp = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInBackCpp"));
	WeaponInBackCpp->SetupAttachment(ShadowBodyCpp);

	LowerBodyCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBodyCpp"));
	LowerBodyCpp->SetupAttachment(RootComponent);

	CameraCpp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraCpp"));
	CameraCpp->SetupAttachment(RootComponent);

	FirstPersonCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonCpp"));
	FirstPersonCpp->SetupAttachment(CameraCpp);

	WeaponInHandCpp = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInHandCpp"));
	WeaponInHandCpp->SetupAttachment(FirstPersonCpp);
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

