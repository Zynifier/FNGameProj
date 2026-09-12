#pragma once
#include "CoreMinimal.h"
#include "EPreventAbilityUseReason.generated.h"

UENUM(BlueprintType)
enum class EPreventAbilityUseReason : uint8 {
    CannotAfford,
    AlreadyActive,
    AbilityActivationBlocked,
    None,
    Count,
};
