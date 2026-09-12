#pragma once
#include "CoreMinimal.h"
#include "ETeamPerformanceMessageReplicationType.generated.h"

UENUM(BlueprintType)
enum class ETeamPerformanceMessageReplicationType : uint8 {
    VariableReplication,
    MulticastFunction_Unreliable,
    MulticastFunction_Reliable,
};
