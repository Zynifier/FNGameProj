#pragma once
#include "CoreMinimal.h"
#include "EFortPreferredItemSlotItemType.generated.h"

UENUM(BlueprintType)
enum class EFortPreferredItemSlotItemType : uint8 {
    Unassigned,
    AssaultRifle,
    Shotgun,
    SMG,
    Pistol,
    SniperAndBow,
    Launcher,
    Utility,
    Consumable,
    Num,
};
