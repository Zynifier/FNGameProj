#pragma once
#include "CoreMinimal.h"
#include "EFCRP_LoopBehavior.generated.h"

UENUM(BlueprintType)
enum class EFCRP_LoopBehavior : uint8 {
    StopAtEnd,
    PingPong,
    WrapAround,
};
