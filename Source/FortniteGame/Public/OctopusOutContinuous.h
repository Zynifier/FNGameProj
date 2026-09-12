#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "OctopusOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FOctopusOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FOctopusOutContinuous();
};
