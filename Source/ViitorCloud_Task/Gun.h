// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "Gun.generated.h"

UCLASS()
class VIITORCLOUD_TASK_API AGun : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGun();

	UPROPERTY(BlueprintReadWrite)
		USoundBase* GunFireSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USkeletalMeshComponent* SkeletalMesh;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite)
		class UParticleSystem* MuzzleFlash;

	UPROPERTY(BlueprintReadWrite)
		class UParticleSystem* HitParticles;

	//UPROPERTY(BlueprintReadWrite)
	//	float MaxRange = 1000;

	//UPROPERTY(BlueprintReadWrite)
	//	float Damage = 10;
private:


	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root; 


	
};
