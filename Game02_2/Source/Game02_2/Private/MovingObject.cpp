// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingObject.h"

// Sets default values
AMovingObject::AMovingObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingObject::BeginPlay()
{
	Super::BeginPlay();

  MoveStartLocation = GetActorLocation();
}

// Called every frame
void AMovingObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

  if (ObjectVelocity.IsZero() == false)
  {
    MoveObject(DeltaTime);
  }

  if (RotationVelocity.IsZero() == false)
  {
    RotateObject(DeltaTime);
  }

}

void AMovingObject::RotateObject(float DeltaTime)
{
  // Rotate objects
  // This calculates the step of rotation based on the velocity and delta time.
  // This is based on the computer capable frame rate.
  FRotator RotationStep = RotationVelocity * DeltaTime;

  AddActorLocalRotation(RotationStep);

  float hasYaw = RotationStep.Yaw != 0.0f;
  float hasRoll = RotationStep.Roll != 0.0f;
  float hasPitch = RotationStep.Pitch != 0.0f;
  float noYaw = RotationStep.Yaw == 0.0f;
  float noRoll = RotationStep.Roll == 0.0f;
  float noPitch = RotationStep.Pitch == 0.0f;

  // Keep track of total rotation based on current rotation axis.
  if (hasYaw)
  {
    TotalRotation += FMath::Abs(RotationStep.Yaw);
  }
  else if (hasRoll)
  {
    TotalRotation += FMath::Abs(RotationStep.Roll);
  }
  else if (hasPitch)
  {
    TotalRotation += FMath::Abs(RotationStep.Pitch);
  }

  // Check if the object has moved too far. If total rotation is greater than max rotation. the object has moved too far.
  if (RotateShouldReturn && FMath::Abs(TotalRotation) > MaxRotation)
  {
    if (hasYaw && noRoll && noPitch)
    {
      // Reverse the rotation direction. And update RotationStartLocation
      // to the current location. Get current rotation and add the velocity to it.
      // RotationStartLocation = RotationStartLocation + FRotator(0.0f, MaxRotation, 0.0f);
      // SetActorRotation(RotationStartLocation);

      RotationStartLocation.Yaw = RotationStartLocation.Yaw + MaxRotation;

      RotationStartLocation.Normalize();

      // if step has yaw reset velocity and total rotation.
      // This will reverse the rotation direction.
      RotationVelocity.Yaw = -RotationVelocity.Yaw;
      TotalRotation = 0.0f;
    }
    else if (noYaw && hasRoll && noPitch)
    {
      // RotationStartLocation = RotationStartLocation + FRotator(MaxRotation, 0.0f, 0.0f);
      // SetActorRotation(RotationStartLocation);

      RotationStartLocation.Roll = RotationStartLocation.Roll + MaxRotation;

      RotationStartLocation.Normalize();

      SetActorRotation(RotationStartLocation);

      RotationVelocity.Roll = -RotationVelocity.Roll;
      TotalRotation = 0.0f;
    }
    else if (noYaw && noRoll && hasPitch)
    {
      RotationStartLocation.Pitch = RotationStartLocation.Pitch + MaxRotation;

      RotationStartLocation.Normalize();

      SetActorRotation(RotationStartLocation);

      RotationVelocity.Pitch = -RotationVelocity.Pitch;
      TotalRotation = 0.0f;
    }
  }
}

float AMovingObject::GetDistanceMoved() const
{
  return FVector::Dist(MoveStartLocation, GetActorLocation());
}

bool AMovingObject::ShouldObjectReturn() const
{
  // Check how far we moved.
  return GetDistanceMoved() > MoveDistance;
}

void AMovingObject::MoveObject(float DeltaTime)
{
  // Move platforms forwards

  if (MoveShouldReturn && ShouldObjectReturn())
  {
    // Send platform back.
      // Reverse direction of motion if gone too far.
    FVector MoveDirection = ObjectVelocity.GetSafeNormal();
    MoveStartLocation = MoveStartLocation + MoveDirection * MoveDistance;
    SetActorLocation(MoveStartLocation);

    // When setting ObjectVelocity to its negative will reverse the movment on that axis X or Y or Z.
    ObjectVelocity = -ObjectVelocity;
  }
  else
  {
    // Get current location
    FVector CurrentLocation = GetActorLocation();
    // Add vector to that location.
    // Take the current location and the velocity (100) every game tick.
    // Multiply your velocity by your deltatime(framerate duration) to get stable speeds on all platforms.
    CurrentLocation = CurrentLocation + (ObjectVelocity * DeltaTime);
    // Set the location.
    SetActorLocation(CurrentLocation);
  }
}
