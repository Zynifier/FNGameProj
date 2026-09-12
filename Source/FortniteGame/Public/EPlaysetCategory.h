#pragma once
#include "CoreMinimal.h"
#include "EPlaysetCategory.generated.h"

UENUM(BlueprintType)
enum class EPlaysetCategory : uint8 {
    Unset,
    Prefab,
    Gallery,
    Device,
};
