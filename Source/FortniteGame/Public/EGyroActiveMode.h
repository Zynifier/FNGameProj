#pragma once
#include "CoreMinimal.h"
#include "EGyroActiveMode.generated.h"

UENUM(BlueprintType)
enum class EGyroActiveMode : uint8 {
    ScopeOnly,
    AimDownSightsOrFiring,
    ADSOrFiring,
    ADSOrFiringOrHarvestEquipped,
    All,
};
