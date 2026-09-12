#pragma once
#include "CoreMinimal.h"
#include "ESupplyDropSpawnLocationPolicy.generated.h"

UENUM(BlueprintType)
enum class ESupplyDropSpawnLocationPolicy : uint8 {
    RadiusAroundLocation,
    SafeZone,
};
