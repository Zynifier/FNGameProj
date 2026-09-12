#pragma once
#include "CoreMinimal.h"
#include "EFortMutatorOverridePriority.generated.h"

UENUM(BlueprintType)
enum class EFortMutatorOverridePriority : uint8 {
    None,
    Low,
    Medium,
    High,
};
