#include "EQSActorSpawnerClassToSpawnData.h"

FEQSActorSpawnerClassToSpawnData::FEQSActorSpawnerClassToSpawnData() {
    SpawnActorType = EEQSActorSpawnerSpawnType::Actor;
    ActorClassToSpawn = NULL;
    AdjustSpawnedActorToGroundLocationTraceZOffset = 0.0f;
    AISpawnerData = NULL;
    PickupClassToSpawn = NULL;
    PickupItemDefinition = NULL;
}
