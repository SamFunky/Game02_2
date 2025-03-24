#include "GravityCharacterMovementComp.h"

// Set a new gravity direction (ensures it's normalized)
void UGravityCharacterMovementComp::SetGravityDirection(const FVector& NewGravityDir)
{
    GravityDirection = NewGravityDir.GetSafeNormal(); // Normalize to prevent issues
}

// Override the gravity direction calculation
FVector UGravityCharacterMovementComp::ComputeGravityDirection() const
{
    return GravityDirection * FMath::Abs(GetGravityZ()); // Keeps gravity strength the same
}
