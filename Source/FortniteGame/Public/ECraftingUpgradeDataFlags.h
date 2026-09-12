#pragma once
#include "CoreMinimal.h"
#include "ECraftingUpgradeDataFlags.generated.h"

UENUM(BlueprintType)
enum class ECraftingUpgradeDataFlags : uint8 {
    None,
    OverrideWrap,
    Durability,
    PhantomAmmo = 0x4,
    LoadedAmmo = 0x8,
    ModSlots = 0x10,
    All = 0xFF,
};
