#pragma once
#include "CoreMinimal.h"
#include "EFortLockDeviceVisibilityDuringGames.generated.h"

UENUM(BlueprintType)
enum class EFortLockDeviceVisibilityDuringGames : uint8 {
    No,
    Yes,
    HologramOnly,
};
