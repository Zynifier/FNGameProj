#pragma once
#include "CoreMinimal.h"
#include "EFortPhysicsObjectAwakeState.generated.h"

UENUM(BlueprintType)
enum class EFortPhysicsObjectAwakeState : uint8 {
    Invalid,
    Awake,
    Asleep,
};
