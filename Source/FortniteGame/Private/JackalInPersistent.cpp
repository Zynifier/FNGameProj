#include "JackalInPersistent.h"

FJackalInPersistent::FJackalInPersistent() {
    FortJackalVehicleConfigs = NULL;
    bBoosting = false;
    PendingJumpCharge = 0.0f;
    FrontLateralFrictionRuntimeMultiplier = 0.0f;
    TopSpeedCurrentMultiplier = 0.0f;
    PushForceCurrentMultiplier = 0.0f;
}
