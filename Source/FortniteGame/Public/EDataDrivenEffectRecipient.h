#pragma once
#include "CoreMinimal.h"
#include "EDataDrivenEffectRecipient.generated.h"

UENUM(BlueprintType)
enum class EDataDrivenEffectRecipient : uint8 {
    Player,
    NPC,
};
