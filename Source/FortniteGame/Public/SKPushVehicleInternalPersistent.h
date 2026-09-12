#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInternalPersistent.h"
#include "SKPushVehicleInternalPersistent.generated.h"

USTRUCT(BlueprintType)
struct FSKPushVehicleInternalPersistent : public FFortVehicleInternalPersistent {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FSKPushVehicleInternalPersistent();
};
