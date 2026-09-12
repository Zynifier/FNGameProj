#pragma once
#include "CoreMinimal.h"
#include "EFortRichColorConflictResolutionRules.generated.h"

UENUM(BlueprintType)
enum class EFortRichColorConflictResolutionRules : uint8 {
    NoConflictsAllowed,
    BlackOrWhiteCannotConflict,
};
