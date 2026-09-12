#pragma once
#include "CoreMinimal.h"
#include "EFortPhysicsSimSize.generated.h"

UENUM(BlueprintType)
enum class EFortPhysicsSimSize : uint8 {
    Small,
    Average,
    Medium,
    Large,
    Invalid,
};
