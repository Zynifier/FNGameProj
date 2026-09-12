#pragma once
#include "CoreMinimal.h"
#include "EAIScalableFloatScalingType.generated.h"

UENUM()
enum class EAIScalableFloatScalingType : int32 {
    Disabled,
    ReceivedDamageByTarget,
};
