#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeDiscoveryPanelType.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeDiscoveryPanelType : uint8 {
    CuratedList,
    MetricDriven,
    Recommendations,
};
