#pragma once
#include "CoreMinimal.h"
#include "EFortOctopusSimEvent.generated.h"

UENUM(BlueprintType)
enum class EFortOctopusSimEvent : uint8 {
    BeginBoostCooldown,
};
