#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GravityCharacterMovementComp.generated.h"
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
UCLASS()
class GAME02_2_API UGravityCharacterMovementComp : public UCharacterMovementComponent
{
    GENERATED_BODY()

public:
    // Function to set a new gravity direction
    UFUNCTION(BlueprintCallable, Category = "Gravity")
    void SetGravityDirection(const FVector& NewGravityDir);

protected:
    // Override this function to apply custom gravity behavior
    virtual FVector ComputeGravityDirection() const override;

private:
    // Stores the current gravity direction (default is down)
    FVector GravityDirection = FVector(0.0f, 0.0f, -1.0f);
};
