#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingTags.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingTags : uint8 {
    None,
    HasDoors,
    RotationDependant,
    UseConditionalEvaluation,
};
