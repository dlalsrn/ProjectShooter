// Fill out your copyright notice in the Description page of Project Settings.

#include <GameFramework/CharacterMovementComponent.h>
#include <Kismet/GameplayStatics.h>
#include <EnhancedInputComponent.h>
#include "GamePlay/ProjectShooterCharacter.h"

// Sets default values
AProjectShooterCharacter::AProjectShooterCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShadowBodyCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShadowBodyCpp"));
	if (ShadowBodyCpp)
	{
		ShadowBodyCpp->SetupAttachment(RootComponent);

		WeaponInBackCpp = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInBackCpp"));
		if (WeaponInBackCpp)
		{
			WeaponInBackCpp->SetupAttachment(ShadowBodyCpp);
		}
	}


	LowerBodyCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBodyCpp"));
	if (LowerBodyCpp)
	{
		LowerBodyCpp->SetupAttachment(RootComponent);
	}

	CameraCpp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraCpp"));
	if (CameraCpp)
	{
		CameraCpp->SetupAttachment(RootComponent);

		FirstPersonCpp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonCpp"));
		if (FirstPersonCpp)
		{
			FirstPersonCpp->SetupAttachment(CameraCpp);

			WeaponInHandCpp = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInHandCpp"));
			if (WeaponInHandCpp)
			{
				WeaponInHandCpp->SetupAttachment(FirstPersonCpp);
			}
		}
	}
}

// Called when the game starts or when spawned
void AProjectShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void AProjectShooterCharacter::OnTriggerRun(const FInputActionValue& Value)
{
	IsRunPressedCpp = Value.Get<bool>();
}

void AProjectShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(RunInputActionCpp, ETriggerEvent::Triggered, this, &AProjectShooterCharacter::OnTriggerRun);
	}
}

// Called every frame
void AProjectShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AProjectShooterCharacter::GetSpeedCpp() const
{
	return GetVelocity().Length();
}

bool AProjectShooterCharacter::CanRunCpp() const
{
	return (MoveForwardValueCpp > 0.0) && IsRunPressedCpp;
}

void AProjectShooterCharacter::TickRunCpp()
{
	if (CanRunCpp())
	{
		switch (StateCpp)
		{
		case StateOfCharacterCpp::Idle:
			StateCpp = StateOfCharacterCpp::Running;
			GetCharacterMovement()->MaxWalkSpeed *= 2.0f;
			break;
		}
	}
	else
	{
		switch (StateCpp)
		{
		case StateOfCharacterCpp::Running:
			StateCpp = StateOfCharacterCpp::Idle;
			GetCharacterMovement()->MaxWalkSpeed *= 0.5f;
			break;
		}
	}
}

void AProjectShooterCharacter::OnFootStepLeftCpp()
{
	UGameplayStatics::PlaySoundAtLocation(this, FootStepLeftSoundCpp, LowerBodyCpp->GetSocketLocation("foot_l"));
}

void AProjectShooterCharacter::OnFootStepRightCpp()
{
	UGameplayStatics::PlaySoundAtLocation(this, FootStepRightSoundCpp, LowerBodyCpp->GetSocketLocation("foot_r"));
}
