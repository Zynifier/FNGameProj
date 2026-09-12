#pragma once
#include "CoreMinimal.h"
#include "FLightOverrideLevel.generated.h"

UENUM(BlueprintType)
enum class FLightOverrideLevel : uint8 {
    Default,
    High,
    Count,
};
