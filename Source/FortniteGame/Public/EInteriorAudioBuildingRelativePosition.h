#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingRelativePosition.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingRelativePosition : uint8 {
    SameCell,
    SameCellQuadrantTestFailed,
    OtherCellParallelToForward,
    OtherCellParallelToRight,
    OtherCellParallelToUp,
    Max_None,
};
