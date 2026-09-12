#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingUtilityFlows.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingUtilityFlows : uint8 {
    Automatic,
    JoinMatchInProgress,
    SpectateMatch,
    Legacy,
    LinkCode,
    JoinEditingSession,
    Internal_Unselected,
};
