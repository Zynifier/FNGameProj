#pragma once
#include "CoreMinimal.h"
#include "ESlotEnvironmentExposure.generated.h"

UENUM(BlueprintType)
enum class ESlotEnvironmentExposure : uint8 {
    Unknown,
    Exposed,
    Protected,
};
