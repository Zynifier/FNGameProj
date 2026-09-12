#pragma once
#include "CoreMinimal.h"
#include "EAthenaRoundsMutatorPhase.generated.h"

UENUM(BlueprintType)
enum class EAthenaRoundsMutatorPhase : uint8 {
    GamePhase_Setup,
    GamePhase_Warmup,
    FadeOutToNextRound,
    RoundSetup,
    RoundPlay,
    RoundEnd,
    RoundEndUI,
    MatchEndUI,
    MatchEndedPrematurely,
};
