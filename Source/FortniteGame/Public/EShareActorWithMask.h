#pragma once
#include "CoreMinimal.h"
#include "EShareActorWithMask.generated.h"

UENUM(BlueprintType)
enum class EShareActorWithMask : uint8 {
    None,
    SquadOnTeam,
    AllTeam,
    Target = 0x4,
};
