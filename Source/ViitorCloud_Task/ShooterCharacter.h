// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;

UCLASS()
class VIITORCLOUD_TASK_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	UFUNCTION(BlueprintCallable)
	void Shoot();

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void LookUp(float AxisValue);
	void LookRight(float AxisValue);

public:



	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AGun> GunClass; // by this user can only choose AGun class, this allow user to select AGun class only

	UPROPERTY(EditDefaultsOnly)
		class UAnimMontage* PlayerShootAnimMontage;

	UPROPERTY()
		AGun* Gun; 


};
