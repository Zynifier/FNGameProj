#pragma once
#include "CoreMinimal.h"
#include "ESpatialLoadingState.generated.h"

UENUM(BlueprintType)
enum class ESpatialLoadingState : uint8 {
    Uninitialized,
    ReadOnly,
    Initializing,
    Ready,
};
