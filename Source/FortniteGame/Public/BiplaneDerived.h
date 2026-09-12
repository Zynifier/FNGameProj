#pragma once
#include "CoreMinimal.h"
#include "FortVehicleDerived.h"
#include "BiplaneDerived.generated.h"

USTRUCT(BlueprintType)
struct FBiplaneDerived : public FFortVehicleDerived {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FBiplaneDerived();
};
