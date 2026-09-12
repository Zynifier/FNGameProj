#pragma once
#include "CoreMinimal.h"
#include "ESceneQueryShape.generated.h"

UENUM(BlueprintType)
enum class ESceneQueryShape : uint8 {
    Sphere,
    Box,
    Capsule,
    VolumeBounds,
};
