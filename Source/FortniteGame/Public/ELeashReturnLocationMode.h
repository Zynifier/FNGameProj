#pragma once
#include "CoreMinimal.h"
#include "ELeashReturnLocationMode.generated.h"

UENUM(BlueprintType)
enum class ELeashReturnLocationMode : uint8 {
    Closest,
    Random,
};
