#include "FortCurieSpatialManagerConfig.h"

UFortCurieSpatialManagerConfig::UFortCurieSpatialManagerConfig() {
    TickInterval = 0.0f;
    OverlapFireApplicationMagnitude = 0.0f;
    OverlapElectricityApplicationMagnitude = 0.0f;
    ElementOverlapMaximumTestActorsPerFrame = 0;
    ElementOverlapMaximumDelayBetweenChecks = 0.0f;
    ElementOverlapDefaultExpansion = 0.0f;
    GrassWaterContentDecayRate = 0.0f;
    FireLandscapePropagationApplicationMagnitude = 0.0f;
    ElementSubgridVoxelOverlapThreshold = 0.0f;
    ElementGridOverlapVolumeThreshold = 0.0f;
    NavRelevantObjectPoolCap = 0;
    AccurateCollisionGridCellMinimum = 0;
    MaxNumStormFireConsiderationsPerFrame = 0;
    StormFireInteractionTickCheckFreq = 0;
    MaxTimeForStormFireInteractionsPerFrame = 0.0f;
    StormFireInteractionConsiderationDelay = 0.0f;
    StormFireInteractionMagnitude = 0.0f;
    MovableActorFireInteractionMagnitude = 0.0f;
    AccurateActorOverlapVolumeThreshold = 0.0f;
    AccurateActorBoxOverlapVolumeThreshold = 0.0f;
    bUseAccurateCollisionVoxelization = false;
    bAllowStormFireInteractions = false;
    bCreateFireInteractsForMovableActors = false;
    bAllowBuildingsToInterruptElementGridOverlaps = false;
}
