#pragma once
#include "CoreMinimal.h"
#include "ECharacterEncounterType.generated.h"

UENUM(BlueprintType)
enum class ECharacterEncounterType : uint8 {
    Converstation,
    Attack,
    Count,
};
