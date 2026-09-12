#include "FortVehicleInPersistent.h"

FFortVehicleInPersistent::FFortVehicleInPersistent() {
    FortPhysicsVehicleConfigs = NULL;
    bUseForceHeading = false;
    bHasDriver = false;
    bHasPassengers = false;
    bIsTouchingAnything = false;
    bAttemptAsyncOrientationCorrection = false;
    bUseGravity = false;
    WaterLevel = 0.0f;
    FrontMassRatio = 0.0f;
    RearMassRatio = 0.0f;
}
