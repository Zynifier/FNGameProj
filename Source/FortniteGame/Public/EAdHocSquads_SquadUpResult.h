#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_SquadUpResult.generated.h"

UENUM(BlueprintType)
enum class EAdHocSquads_SquadUpResult : uint8 {
    Success,
    Failure_OneOrMorePlayersWereNull,
    Failure_BothPlayersAreInAdHocSquads,
    Failure_BothPlayersAreAlreadyInTheSameAdHocSquad,
    Failure_CouldNotCreateAdHocSquad,
    Failure_CalledOnClient,
    Failure_SquadIsAlreadyFull,
    Failure_TooManyPlayersToMergeSquads,
    Failure_MutatorIsDisabled,
    Failure_Unknown,
    Failure_Custom,
};
