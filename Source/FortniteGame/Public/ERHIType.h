#pragma once
#include "CoreMinimal.h"
#include "ERHIType.generated.h"

UENUM(BlueprintType)
enum class ERHIType : uint8 {
    D3D11,
    D3D12,
    Performance,
};
