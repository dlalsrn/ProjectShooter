// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Camera/CameraComponent.h>
#include "ProjectShooterCharacter.generated.h"

UENUM(BlueprintType)
enum class StateOfCharacterCpp : uint8
{
	Idle,
	Aiming,
	Reloading,
	Swapping,
	Running,
};

UCLASS()
class AProjectShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AProjectShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	StateOfCharacterCpp StateCpp;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USoundBase> FootStepLeftSoundCpp;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USoundBase> FootStepRightSoundCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	bool IsRunPressedCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite)
	float MoveForwardValueCpp;

private:
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> ShadowBodyCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UChildActorComponent> WeaponInBackCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> LowerBodyCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> CameraCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> FirstPersonCpp;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UChildActorComponent> WeaponInHandCpp;
};
