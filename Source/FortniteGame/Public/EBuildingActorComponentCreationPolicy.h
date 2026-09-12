#pragma once
#include "CoreMinimal.h"
#include "EBuildingActorComponentCreationPolicy.generated.h"

UENUM(BlueprintType)
enum class EBuildingActorComponentCreationPolicy : uint8 {
    Never,
    Lazy,
    Always,
};
