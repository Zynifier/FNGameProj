#include "BiplaneSimAux.h"

FBiplaneSimAux::FBiplaneSimAux() {
    bIsEngineOn = false;
    bIsFlying = false;
    bAutoStartEngineInAir = false;
    bEngineStartIsBeingHeld = false;
    PitchAlphaNoPilot = 0.0f;
    TurnAlphaNoPilot = 0.0f;
    RollAlphaNoPilot = 0.0f;
    AileronRollAlphaStart = 0.0f;
    bHadPassengers = false;
    NoPassengerStallTimerStart = 0.0f;
    StuckTimerStart = 0.0f;
    bRollRight = false;
    bRollLeft = false;
    AileronRollDoubleClickTimerStart = 0.0f;
    VehicleFuelPercent = 0.0f;
    bIsStallingFromAltitude = false;
}
