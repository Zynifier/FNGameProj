#pragma once
#include "CoreMinimal.h"
#include "ESpecialRelevancyMode.generated.h"

UENUM(BlueprintType)
enum class ESpecialRelevancyMode : uint8 {
    NormalRelevancy,
    SoloRelevancy,
    SquadRelevancy,
    MultiSquad,
    Custom,
    MAX,
};
