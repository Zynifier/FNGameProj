#include "FortGameplayAbility_AITurnTransition.h"

void UFortGameplayAbility_AITurnTransition::GetTurnTransitionMontageSectionNameAndYawRotationRate(FName& MontageSectionName, float& TurnYawRotationRate, float& DesiredRotationYawDelta, float& TurnTime, bool& bTurnTransitionUsesMontage) const {
}

UFortGameplayAbility_AITurnTransition::UFortGameplayAbility_AITurnTransition() {
    MinTurnTransitionYawAngle = 1;
    PickedTurnYawRotationRate = 1;
    bPickedTurnTransitionUsesMontage = false;
    StartingDesiredRotationYawDelta = 0.0f;
    PickedTurnTime = 0.0f;
}

