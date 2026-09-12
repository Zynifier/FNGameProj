#pragma once
#include "CoreMinimal.h"
#include "EVehicleFuelState.generated.h"

UENUM(BlueprintType)
enum class EVehicleFuelState : uint8 {
    Uninitialized,
    UsingVehicleFuel,
    NotUsingVehicleFuel,
};
