#include "DAD_IslandQuerier.h"

FString UDAD_IslandQuerier::GetIslandCodeByWellKnownName(const FString& WellKnownIslandName) const {
    return TEXT("");
}

UDAD_IslandQuerier::UDAD_IslandQuerier() {
    WellKnownIslands = NULL;
    bResolveMetrics = false;
    UpdateMetricsInterval = 0.0f;
}
