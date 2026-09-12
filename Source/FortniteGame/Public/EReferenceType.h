#pragma once
#include "CoreMinimal.h"
#include "EReferenceType.generated.h"

UENUM(BlueprintType)
enum class EReferenceType : uint8 {
    Hard,
    Soft,
    Dynamic,
};
