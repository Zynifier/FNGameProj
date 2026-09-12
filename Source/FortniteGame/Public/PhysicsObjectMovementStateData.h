#pragma once
#include "CoreMinimal.h"
#include "EFortPhysicsObjectMovementState.h"
#include "Engine/EngineTypes.h"
#include "PhysicsObjectMovementStateData.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsObjectMovementStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPhysicsObjectMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPhysicsObjectMovementState PreviousMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LastMovingHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeMovementStateUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingStopTime;
    
    FORTNITEGAME_API FPhysicsObjectMovementStateData();
};
