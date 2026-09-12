#pragma once
#include "CoreMinimal.h"
#include "EVectorCurveFloat.generated.h"

UENUM(BlueprintType)
enum class EVectorCurveFloat : uint8 {
    VectorCurve_X,
    VectorCurve_Y,
    VectorCurve_Z,
};
