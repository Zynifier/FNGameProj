#pragma once
#include "CoreMinimal.h"
#include "EMinigameStatSavePolicy.generated.h"

UENUM(BlueprintType)
enum class EMinigameStatSavePolicy : uint8 {
    Never,
    Always,
    OnlyIfLower,
    OnlyIfHigher,
};
