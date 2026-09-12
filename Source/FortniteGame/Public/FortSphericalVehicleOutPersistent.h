#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutPersistent.h"
#include "FortSphericalVehicleOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FFortSphericalVehicleOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortSphericalVehicleOutPersistent();
};
