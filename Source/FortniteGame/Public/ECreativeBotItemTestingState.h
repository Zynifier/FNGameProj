#pragma once
#include "CoreMinimal.h"
#include "ECreativeBotItemTestingState.generated.h"

UENUM(BlueprintType)
enum class ECreativeBotItemTestingState : uint8 {
    ITS_NONE,
    ITS_Teleporting,
    ITS_Landing,
    ITS_Grant,
    ITS_Equip,
    ITS_Place,
    ITS_Cleanup,
    ITS_MAX UMETA(Hidden),
    ITS_Throw,
    ITS_Throwing,
};

