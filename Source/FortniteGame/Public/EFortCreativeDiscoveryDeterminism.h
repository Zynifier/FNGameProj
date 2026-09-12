#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeDiscoveryDeterminism.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeDiscoveryDeterminism : uint8 {
    Always,
    Random,
    PlayerDeterministic,
    PartyDeterministic,
    EpicEmployee,
    Never,
};
