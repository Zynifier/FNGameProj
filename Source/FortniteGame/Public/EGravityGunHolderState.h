#pragma once
#include "CoreMinimal.h"
#include "EGravityGunHolderState.generated.h"

UENUM(BlueprintType)
enum class EGravityGunHolderState : uint8 {
    Invalid,
    Unrooting,
    Catching,
    Holding,
    Detached,
};
