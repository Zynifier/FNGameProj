#include "EQSActorSpawnerData.h"

FEQSActorSpawnerData::FEQSActorSpawnerData() {
    bEnabled = false;
    SpawningTrigger = EEQSActorSpawnerTriggerType::Manual;
    SafeZoneStateToStartSpawning = EFortSafeZoneState::None;
    SafeZoneIndexToSpawnIn = 0;
    bAvoidRepeatClassSpawning = false;
    BasePlacementQuery = NULL;
    SpawnActorPlacementQuery = NULL;
    bIncludeMutatorBasePlacementQueryResults = false;
    SpawnedActorRemovalQuery = NULL;
    BaseQueryingAttemptIntervalTimeSeconds = 0.0f;
    SpawnedActorRemovalQueryInterval = 0.0f;
}
