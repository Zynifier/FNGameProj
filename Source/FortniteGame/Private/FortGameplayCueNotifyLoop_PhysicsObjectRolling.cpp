#include "FortGameplayCueNotifyLoop_PhysicsObjectRolling.h"

FVector AFortGameplayCueNotifyLoop_PhysicsObjectRolling::GetHitLocation() const {
    return FVector{};
}

AFortGameplayCueNotifyLoop_PhysicsObjectRolling::AFortGameplayCueNotifyLoop_PhysicsObjectRolling() {
    LayeredAudioComp = NULL;
    MaxRollSpeed = 0.0f;
    PhysicsObject = NULL;
}
