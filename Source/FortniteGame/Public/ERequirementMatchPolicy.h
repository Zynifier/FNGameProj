#pragma once
#include "CoreMinimal.h"
#include "ERequirementMatchPolicy.generated.h"

UENUM(BlueprintType)
enum class ERequirementMatchPolicy : uint8 {
    RequireAll,
    RequireAny,
};
