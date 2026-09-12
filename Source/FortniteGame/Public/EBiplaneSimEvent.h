#pragma once
#include "CoreMinimal.h"
#include "EBiplaneSimEvent.generated.h"

UENUM(BlueprintType)
enum class EBiplaneSimEvent : uint8 {
    EngineStart,
    EngineStop,
    Takeoff,
    Landing,
    BoostBegin,
    BoostEnd,
    BoostChargeAboveThreshold,
    AileronRoll,
    ControlContextChange,
};
