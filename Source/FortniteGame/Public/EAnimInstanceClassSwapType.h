#pragma once
#include "CoreMinimal.h"
#include "EAnimInstanceClassSwapType.generated.h"

UENUM(BlueprintType)
enum class EAnimInstanceClassSwapType : uint8 {
    None,
    SwapOnMatch,
};
