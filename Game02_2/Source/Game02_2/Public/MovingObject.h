// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingObject.generated.h"

UCLASS()
class GAME02_2_API AMovingObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

  // Use this to move an object in a certain direction
  UPROPERTY(EditAnywhere, Category="Moving")
  FVector ObjectVelocity = FVector(100, 0, 0);

  // Use this to set a distance for the object to move.
  UPROPERTY(EditAnywhere, Category="Moving")
  float MoveDistance = 100;

  FVector MoveStartLocation;

  // The object it will return to its original position. then back again.
  UPROPERTY(EditAnywhere, Category="Moving")
  bool MoveShouldReturn = false;

  // Use this to rotate an object.
  UPROPERTY(EditAnywhere, Category="Rotation")
  FRotator RotationVelocity;

  UPROPERTY(EditAnywhere, Category="Rotation")
  bool RotateShouldReturn = false;

  UPROPERTY(EditAnywhere, Category="Rotation")
  float MaxRotation = 90.0f;

  FRotator RotationStartLocation;

  float TotalRotation = 0.0f;

  void MoveObject(float DeltaTime);
  void RotateObject(float DeltaTime);
  bool ShouldObjectReturn() const;
  float GetDistanceMoved() const;
};
