#pragma once
#include "CoreMinimal.h"
#include "EGravityGunHolderRotationAxis.generated.h"

UENUM(BlueprintType)
enum class EGravityGunHolderRotationAxis : uint8 {
    XZ,
    YZ,
    ZX,
    MAX,
};
