#pragma once
#include "CoreMinimal.h"
#include "FTowhookExtensionState.generated.h"

UENUM(BlueprintType)
enum class FTowhookExtensionState : uint8 {
    Hold,
    Extend,
    Contract,
};
