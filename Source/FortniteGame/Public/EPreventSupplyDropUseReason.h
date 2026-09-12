#pragma once
#include "CoreMinimal.h"
#include "EPreventSupplyDropUseReason.generated.h"

UENUM(BlueprintType)
enum class EPreventSupplyDropUseReason : uint8 {
    CannotAfford,
    OutOfStock,
    None,
    Count,
};
