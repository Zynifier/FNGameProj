#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_LeaveSquadReason.generated.h"

UENUM(BlueprintType)
enum class EAdHocSquads_LeaveSquadReason : uint8 {
    ManualLeave,
    MutatorDisabled,
    JoinedADifferentSquad,
    PlayerDiedAndCannotBeRevived,
    PlayerHasWonGame,
};
