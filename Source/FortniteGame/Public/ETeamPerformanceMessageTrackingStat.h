#pragma once
#include "CoreMinimal.h"
#include "ETeamPerformanceMessageTrackingStat.generated.h"

UENUM(BlueprintType)
enum class ETeamPerformanceMessageTrackingStat : uint8 {
    TeamScore,
    TeamScorePercent,
};
