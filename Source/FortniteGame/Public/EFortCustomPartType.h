#pragma once
#include "CoreMinimal.h"
#include "EFortCustomPartType.generated.h"

UENUM(BlueprintType)
enum class EFortCustomPartType : uint8 {
        Head,
        Body,
        Hat,
        Backpack,
        MiscOrTail,
        Face,
        Gameplay,
        NumTypes,
        Charm,
    };


