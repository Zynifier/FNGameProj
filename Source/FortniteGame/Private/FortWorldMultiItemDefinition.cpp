#include "FortWorldMultiItemDefinition.h"

UFortWorldMultiItemDefinition::UFortWorldMultiItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    bSwitchItemOnTimer = false;
    bSwitchItemAfterFiringEnds = false;
    bSwitchItemInSequenceByPoweringUp = false;
    bPreventSwitchingWhileFiring = false;
    bPreventSwitchingWhileCharging = false;
    bPreventSwitchingWhileReloading = false;
    bPreventSwitchingWhileAiming = false;
    bPreventSwitchingWhileHidden = false;
    TimeBetweenSwitchingItems = 0.0f;
    TellDuration = 0.0f;
}
