#pragma once
#include "CoreMinimal.h"
#include "EDialogMarkerInteractionState.generated.h"

UENUM(BlueprintType)
enum class EDialogMarkerInteractionState : uint8 {
    Conversation,
    InteractionRange,
    IndicatorRange,
    None,
};
