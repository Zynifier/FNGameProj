#include "CustomCharacterPartAnimInstance_CageSaddleBackGadget.h"

UCustomCharacterPartAnimInstance_CageSaddleBackGadget::UCustomCharacterPartAnimInstance_CageSaddleBackGadget() {
    SkeletalMeshComponent = NULL;
    PlayerPawn = NULL;
    RollAlpha = 0.0f;
    bHasTriggeredGCBurstLocal = false;
    InflationBlendWeight = 0.0f;
    MinDurationRemainingForGCBurstLocal = 0.0f;
    InflationCurveLong = NULL;
}
