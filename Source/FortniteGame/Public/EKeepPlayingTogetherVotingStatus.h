#pragma once
#include "CoreMinimal.h"
#include "EKeepPlayingTogetherVotingStatus.generated.h"

UENUM(BlueprintType)
enum class EKeepPlayingTogetherVotingStatus : uint8 {
    Undecided,
    OptedIn,
    OptedOut_Manual,
    OptedOut_Forced,
    OptedOut_TimedOut,
};
