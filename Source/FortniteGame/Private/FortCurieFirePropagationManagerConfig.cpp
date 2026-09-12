#include "FortCurieFirePropagationManagerConfig.h"

UFortCurieFirePropagationManagerConfig::UFortCurieFirePropagationManagerConfig() {
    TickInterval = 0.0f;
    FirePropagationDelay = 0.0f;
    MinPropagationFuel = 0.0f;
    DefaultPropagationFuel = 0.0f;
    MaxPropagationFuel = 0.0f;
    DefaultPropagationFuelCost = 0.0f;
    IncompletePropagationRefundFuelMultiplier = 0.0f;
    InactiveFireFailsafeRemovalTime = 0.0f;
    MaximumPendingInteractTimePerTick = 0.0f;
    PropagationApplicationMagnitude = 0.0f;
    HalfAngleForUpwardMobilityCalculation = 0.0f;
    PropagationLimit = 0;
    MinimumPendingInteractsToProcessPerTick = 0;
    DefaultConnectivityPoints = 0;
    bAllowPropagationFuelOverrides = false;
    FireElementSubgridOverlapThreshold = 0.0f;
    BuildingFirePropagationTickInterval = 0.0f;
    GrassFirePropagationInterval = 0.0f;
    GrassFireBurnoutInterval = 0.0f;
    GrassFireInitialPropagationDelay = 0.0f;
    GrassFireMinPropagationDelay = 0.0f;
    GrassFireMaxPropagationDelay = 0.0f;
    GrassFireBurnoutTime = 0.0f;
    GrassMaxWaterContent = 0.0f;
    GrassWaterContentChangeOnFireApplication = 0.0f;
    GrassWaterContentChangeOnWaterApplication = 0.0f;
    GrassFirePropagationCostPerLocation = 0.0f;
    GrassTraceLandscapeOffset = 0.0f;
    FireFoundationGrassDefaultExpansion = 0.0f;
    GrassFirePropagationRate = 0;
    GrassGridCellsPerAxisManagedByGrassFireReplicator = 0;
    GrassGridFireMinimumTraceOptimization = 0;
    GrassFirePropagationFuelConsumptionLimit = 0;
    bUseLandscapeMapForGrassGrid = false;
    bUseIFACacheForGrassGrid = false;
}
