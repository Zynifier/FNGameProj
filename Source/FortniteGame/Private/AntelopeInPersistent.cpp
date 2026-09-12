#include "AntelopeInPersistent.h"

FAntelopeInPersistent::FAntelopeInPersistent() {
    FortAntelopeVehicleConfigs = NULL;
    bIsBoosting = false;
    NaturalSlideState = ENaturalSlideState::None;
    TopSpeedCurrentMultiplier = 0.0f;
    PushForceCurrentMultiplier = 0.0f;
    LeanImpulseScaleBack = 0.0f;
    BounceForceBack = 0.0f;
}
