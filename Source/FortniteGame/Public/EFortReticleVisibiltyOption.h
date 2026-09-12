#pragma once
#include "CoreMinimal.h"
#include "EFortReticleVisibiltyOption.generated.h"

UENUM(BlueprintType)
enum class EFortReticleVisibiltyOption : uint8 {
    DoNotOverride,
    ShowAlways,
    ShowPickaxeOnly,
    ShowNonPickaxeOnly,
    HideAlways,
};
