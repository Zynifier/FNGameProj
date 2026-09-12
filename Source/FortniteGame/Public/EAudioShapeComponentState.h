#pragma once
#include "CoreMinimal.h"
#include "EAudioShapeComponentState.generated.h"

UENUM(BlueprintType)
enum class EAudioShapeComponentState : uint8 {
    Inactive,
    Active,
    Count,
};
