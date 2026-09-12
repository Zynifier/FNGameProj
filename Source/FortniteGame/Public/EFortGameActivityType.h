#pragma once
#include "CoreMinimal.h"
#include "EFortGameActivityType.generated.h"

UENUM(BlueprintType)
enum class EFortGameActivityType : uint8 {
    Undefined,
    STW,
    BR,
    LTM,
    CreativePublishedIsland,
    CreativePersonalIsland,
    Dummy,
};
