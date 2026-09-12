#pragma once
#include "CoreMinimal.h"
#include "ECustomFeedFilterParticipantNames.generated.h"

UENUM(BlueprintType)
enum class ECustomFeedFilterParticipantNames : uint8 {
    NoFiltering,
    AllPlayers,
};
