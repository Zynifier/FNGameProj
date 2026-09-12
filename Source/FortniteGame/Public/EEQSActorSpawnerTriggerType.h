#pragma once
#include "CoreMinimal.h"
#include "EEQSActorSpawnerTriggerType.generated.h"

UENUM(BlueprintType)
enum class EEQSActorSpawnerTriggerType : uint8 {
    Manual,
    SafeZoneState,
};
