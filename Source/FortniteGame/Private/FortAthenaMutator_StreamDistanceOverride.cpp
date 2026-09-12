#include "FortAthenaMutator_StreamDistanceOverride.h"

void AFortAthenaMutator_StreamDistanceOverride::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

AFortAthenaMutator_StreamDistanceOverride::AFortAthenaMutator_StreamDistanceOverride() {
    bApplyScalability = false;
    bApplyAfterWarmup = false;
    bForceOverride = false;
}
