#pragma once
#include "CoreMinimal.h"
#include "EGyroButtonResponse.generated.h"

UENUM(BlueprintType)
enum class EGyroButtonResponse : uint8 {
    NoChange,
    Disable,
    Trackball,
    Invert,
};
