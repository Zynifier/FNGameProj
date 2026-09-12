#pragma once
#include "CoreMinimal.h"
#include "EUnableToLoadReason.generated.h"

UENUM(BlueprintType)
enum class EUnableToLoadReason : uint8 {
    None,
    PackageDoesNotExist,
};
