#pragma once
#include "CoreMinimal.h"
#include "ESmartBuildMode.generated.h"

UENUM(BlueprintType)
enum class ESmartBuildMode : uint8 {
    None,
    Auto,
    Box,
    Bridge,
    Tower,
};
