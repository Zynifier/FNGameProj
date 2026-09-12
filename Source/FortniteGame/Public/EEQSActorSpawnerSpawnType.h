#pragma once
#include "CoreMinimal.h"
#include "EEQSActorSpawnerSpawnType.generated.h"

UENUM(BlueprintType)
enum class EEQSActorSpawnerSpawnType : uint8 {
    Actor,
    AIPawn,
    Pickup,
};
