// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ProjectShooterWeapon.h"
#include "ProjectShooterBullet.h"
#include <Kismet/KismetSystemLibrary.h>
#include <GamePlay/ProjectShooterCharacter.h>
#include <Kismet/GameplayStatics.h>

// Sets default values
AProjectShooterWeapon::AProjectShooterWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AProjectShooterWeapon::FireCpp(UClass* BulletClass, FTransform Transform)
{
	AProjectShooterBullet* Bullet = Cast<AProjectShooterBullet>(GetWorld()->SpawnActor<AActor>(BulletClass, Transform));
	if (Bullet)
	{
		Bullet->SetSpeedCpp(BulletSpeedCpp);
	}
}

void AProjectShooterWeapon::RegisterNextFireCpp(float Duration)
{
	TimerFireCpp = UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fire"), Duration, false);
}

void AProjectShooterWeapon::FireReleasedCpp()
{
	IsFirePressedCpp = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerFireCpp);
}

bool AProjectShooterWeapon::IsFiringCpp() const
{
	return (IsFirePressedCpp) && (GetWorld()->GetTimerManager().IsTimerActive(TimerFireCpp));
}

void AProjectShooterWeapon::MakeRecoilCpp()
{
	AProjectShooterCharacter* Character = Cast<AProjectShooterCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character)
	{
		float Pitch = FMath::FRandRange(-.2f, -.1f);
		float Yaw = FMath::FRandRange(-.2f, .2f);
		Character->AddControllerPitchInput(Pitch);
		Character->AddControllerYawInput(Yaw);
	}
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

