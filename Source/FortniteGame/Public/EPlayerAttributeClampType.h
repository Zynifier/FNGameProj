#pragma once
#include "CoreMinimal.h"
#include "EPlayerAttributeClampType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAttributeClampType : uint8 {
    Minimum,
    Maximum,
};
