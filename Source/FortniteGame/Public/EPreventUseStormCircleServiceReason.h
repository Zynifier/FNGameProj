#pragma once
#include "CoreMinimal.h"
#include "EPreventUseStormCircleServiceReason.generated.h"

UENUM(BlueprintType)
enum class EPreventUseStormCircleServiceReason : uint8 {
    CannotAfford,
    AlreadyActive,
    StormLocationsAlreadyRevealed,
    None,
};
