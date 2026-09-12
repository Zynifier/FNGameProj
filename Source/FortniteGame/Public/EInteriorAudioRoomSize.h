#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioRoomSize.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioRoomSize : uint8 {
    Small,
    Medium,
    Large,
    Max_None,
};
