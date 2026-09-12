#pragma once
#include "CoreMinimal.h"
#include "EPlayerBountyThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EPlayerBountyThreatLevel : uint8 {
    Low,
    Medium,
    High,
    MAX,
};
