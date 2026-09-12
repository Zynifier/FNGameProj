#include "GoaFInPersistent.h"

FGoaFInPersistent::FGoaFInPersistent() {
    FortGoatVehicleConfigs = NULL;
    PowerSlideState = EPowerSlideState::None;
    AccumulatedPowerSlideBoostDiscrete = 0.0f;
    TopSpeedCurrentMultiplier = 0.0f;
    PushForceCurrentMultiplier = 0.0f;
    AngularSpeedEnterPowerSlide = 0.0f;
    LeanImpulseScaleFR = 0.0f;
    LeanImpulseScaleBR = 0.0f;
    LeanImpulseScaleBL = 0.0f;
    BounceForceFR = 0.0f;
    BounceForceBR = 0.0f;
    BounceForceBL = 0.0f;
}
