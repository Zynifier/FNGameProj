#pragma once
#include "CoreMinimal.h"
#include "EGyroAcceleration.generated.h"

UENUM(BlueprintType)
enum class EGyroAcceleration : uint8 {
    Off,
    Low,
    Medium,
    High,
    Custom,
    Legacy,
};
