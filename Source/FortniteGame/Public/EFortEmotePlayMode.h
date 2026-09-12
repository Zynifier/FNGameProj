#pragma once
#include "CoreMinimal.h"
#include "EFortEmotePlayMode.generated.h"

UENUM(BlueprintType)
enum class EFortEmotePlayMode : uint8 {
    CheckIfOwned,
    ForcePlay,
};
