#pragma once
#include "CoreMinimal.h"
#include "EMatchConditionMutatorTimingType.generated.h"

UENUM(BlueprintType)
enum class EMatchConditionMutatorTimingType : uint8 {
    Round,
    MatchAtEndOfRound,
    MatchImmediate,
    COUNT,
};
