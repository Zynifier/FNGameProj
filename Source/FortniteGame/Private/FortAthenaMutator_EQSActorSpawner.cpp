#include "FortAthenaMutator_EQSActorSpawner.h"

UEQSActorSpawner* AFortAthenaMutator_EQSActorSpawner::GetEQSActorSpawnerByNameId(const FName NameId) {
    return NULL;
}

bool AFortAthenaMutator_EQSActorSpawner::StartSpawningManually(const FName NameId, int32 OptionalActivationId) {
    return false;
}

bool AFortAthenaMutator_EQSActorSpawner::ShouldOverrideClassesToSpawn_Implementation(TArray<FEQSActorSpawnerClassToSpawnData>& OutOverrideClassesToSpawn, const FEQSActorSpawnerData& SpawnerData) {
    return false;
}

AFortAthenaMutator_EQSActorSpawner::AFortAthenaMutator_EQSActorSpawner() {
    MutatorBasePlacementQuery = NULL;
    MutatorBaseQueryingAttemptIntervalTimeSeconds = 0.0f;
}
