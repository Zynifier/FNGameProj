#pragma once
#include "CoreMinimal.h"
#include "EContextRequirementMatchPolicy.generated.h"

UENUM(BlueprintType)
enum class EContextRequirementMatchPolicy : uint8 {
    RequireAll,
    RequireAny,
};
