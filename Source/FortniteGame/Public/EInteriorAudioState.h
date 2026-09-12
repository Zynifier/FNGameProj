#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioState.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioState : uint8 {
    Indoors,
    Outdoors,
    PartialOutdoors,
    Max_None,
};
