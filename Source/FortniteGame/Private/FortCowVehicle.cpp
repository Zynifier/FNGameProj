#include "FortCowVehicle.h"

AFortCowVehicle::AFortCowVehicle() {
    PhysicsAudioComponent = NULL;
    SpeedLinesNSComponent = NULL;
    bIsSquashing = false;
    SquashTime = 0.0f;
    MaxSquashTime = 0.0f;
    CurrentSquash = 0.0f;
    TargetSquash = 0.0f;
    ErrorToleranceImpactComparison = 0.0f;
    SquashSpeed = 0.0f;
    CurrentSquashSpeed = 0.0f;
    ImpactPointInterp = 0.0f;
    ForceNormalized = 0.0f;
    ErrorToleranceSpringComparison = 0.0f;
    PreviousSpeed = 0.0f;
    SquashMID = NULL;
}
