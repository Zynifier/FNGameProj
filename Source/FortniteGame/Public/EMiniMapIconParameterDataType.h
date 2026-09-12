#pragma once
#include "CoreMinimal.h"
#include "EMiniMapIconParameterDataType.generated.h"

UENUM(BlueprintType)
enum class EMiniMapIconParameterDataType : uint8 {
    None,
    Scalar,
    Vector,
    Texture,
};
