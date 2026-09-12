#pragma once
#include "CoreMinimal.h"
#include "EFortXPPropagationRule.generated.h"

UENUM(BlueprintType)
enum class EFortXPPropagationRule : uint8 {
    Self,
    Party,
    Squad,
};
