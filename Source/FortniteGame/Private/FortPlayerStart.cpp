#include "FortPlayerStart.h"

AFortPlayerStart::AFortPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    StartParticleComponent = NULL;
    ClaimingController = NULL;
    ExpirationCheckInterval = 0.0f;
}

