#pragma once
#include "CoreMinimal.h"
#include "EFortPawnComponent_DisguiseRevealReason.generated.h"

UENUM(BlueprintType)
enum class EFortPawnComponent_DisguiseRevealReason : uint8 {
    ByDamage,
    ByConversation,
    ByProximity,
    Unknown,
};
