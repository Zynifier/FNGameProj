#pragma once
#include "CoreMinimal.h"
#include "EFortHUDElementVisibiltyOption.generated.h"

UENUM(BlueprintType)
enum class EFortHUDElementVisibiltyOption : uint8 {
    DoNotOverride,
    ShowElement,
    HideElement,
};
