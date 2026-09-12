#pragma once
#include "CoreMinimal.h"
#include "EThresholdRequirement.generated.h"

UENUM(BlueprintType)
enum class EThresholdRequirement : uint8 {
    LessThan,
    LessThanOrEqual,
    Equal,
    GreaterThan,
    GreaterThanOrEqual,
};
