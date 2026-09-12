#pragma once
#include "CoreMinimal.h"
#include "EFortPhysicsObjectMovementState.generated.h"

UENUM(BlueprintType)
enum class EFortPhysicsObjectMovementState : uint8 {
    None,
    Flying,
    Rolling,
    Sliding,
    Floating,
};
