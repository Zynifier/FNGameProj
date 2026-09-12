#pragma once
#include "CoreMinimal.h"
#include "EMatchConditionMutatorTeamStatus.generated.h"

UENUM(BlueprintType)
enum class EMatchConditionMutatorTeamStatus : uint8 {
    None,
    Won,
    Lost,
    Placed,
};
