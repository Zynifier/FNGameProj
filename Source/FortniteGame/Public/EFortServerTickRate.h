#pragma once
#include "CoreMinimal.h"
#include "EFortServerTickRate.generated.h"

UENUM(BlueprintType)
enum class EFortServerTickRate : uint8 {
    UseDefault,
    Twenty,
    Thirty,
};
