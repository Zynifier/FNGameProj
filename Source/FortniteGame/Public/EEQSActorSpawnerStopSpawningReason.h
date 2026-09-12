#pragma once
#include "CoreMinimal.h"
#include "EEQSActorSpawnerStopSpawningReason.generated.h"

UENUM(BlueprintType)
enum class EEQSActorSpawnerStopSpawningReason : uint8 {
    Success,
    ManualStop,
    Requeued,
    RanOutOfRetries,
};
