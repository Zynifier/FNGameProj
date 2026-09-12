#pragma once
#include "CoreMinimal.h"
#include "EFortCosmeticSwapRequirementPart.generated.h"

UENUM(BlueprintType)
enum class EFortCosmeticSwapRequirementPart : uint8 {
    None,
    Glider,
    Pickaxe,
    Backpack,
    Character,
    FullLoadout,
    MAX,
};
