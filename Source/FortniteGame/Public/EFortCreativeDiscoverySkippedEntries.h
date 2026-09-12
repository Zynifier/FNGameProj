#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeDiscoverySkippedEntries.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeDiscoverySkippedEntries : uint8 {
    None,
    ByCount,
    ByPercent,
};
