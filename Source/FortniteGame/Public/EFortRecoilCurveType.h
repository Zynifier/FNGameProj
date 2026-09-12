#pragma once
#include "CoreMinimal.h"
#include "EFortRecoilCurveType.generated.h"

UENUM(BlueprintType)
enum class EFortRecoilCurveType : uint8 {
    WithTime,
    WithOverheat,
};
