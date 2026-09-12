#pragma once
#include "CoreMinimal.h"
#include "EBuildingAsPropSetting.generated.h"

UENUM(BlueprintType)
enum class EBuildingAsPropSetting : uint8 {
    None,
    SnapToEdge,
    SnapToCenter,
};
