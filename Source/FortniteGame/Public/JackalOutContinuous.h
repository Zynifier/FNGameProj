#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "JackalOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FJackalOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FJackalOutContinuous();
};
