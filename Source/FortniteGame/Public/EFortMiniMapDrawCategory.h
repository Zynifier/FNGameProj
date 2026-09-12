#pragma once
#include "CoreMinimal.h"
#include "EFortMiniMapDrawCategory.generated.h"

UENUM(BlueprintType)
enum class EFortMiniMapDrawCategory : uint8 {
    AthenaBackground,
    MapLocation,
    SafeZone,
    BusPath,
    SpecialActorIcon,
    SquadPin,
    MapIndicator,
    MapCursor,
    Elimination,
    MAX,
};
