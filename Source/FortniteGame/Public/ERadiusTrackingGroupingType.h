#pragma once
#include "CoreMinimal.h"
#include "ERadiusTrackingGroupingType.generated.h"

UENUM(BlueprintType)
enum class ERadiusTrackingGroupingType : uint8 {
    Global,
    Team,
    Squad,
};
