#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "FortSphericalVehicleOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FFortSphericalVehicleOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortSphericalVehicleOutContinuous();
};
