#include "SKPushVehicleInPersistent.h"

FSKPushVehicleInPersistent::FSKPushVehicleInPersistent() {
    SKPushVehicleConfigs = NULL;
    bIsDriverTargetting = false;
    bPedalForceCooldown = false;
    bConstrainedRotation = false;
    bIsCoastingOrDismounting = false;
    CurrentPhysicsCoastState = ECoastState::Idle;
    CurrentAnimCoastState = ECoastState::Idle;
    BrakeAboveTopSpeedDelta = 0.0f;
    ForwardForceTractionScale = 0.0f;
    TopSpeedCurrentMultiplier = 0.0f;
}
