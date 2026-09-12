#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInPersistent.h"
#include "FortSphericalVehicleInPersistent.generated.h"

USTRUCT(BlueprintType)
struct FFortSphericalVehicleInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortSphericalVehicleInPersistent();
};
