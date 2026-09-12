#pragma once
#include "CoreMinimal.h"
#include "EKeepPlayingTogetherAnalyticEventPhase.generated.h"

UENUM(BlueprintType)
enum class EKeepPlayingTogetherAnalyticEventPhase : uint8 {
    PrePostGamePhase,
    Countdown,
    TimedOut,
    AllSquadMembersVoted,
};
