#pragma once
#include "CoreMinimal.h"
#include "EPlayerControllerFollow.generated.h"

UENUM(BlueprintType)
enum class EPlayerControllerFollow : uint8 {
    NextTeammate,
    PreviousTeammate,
    NextPlayer,
    PreviousPlayer,
    SpecialActor,
};
