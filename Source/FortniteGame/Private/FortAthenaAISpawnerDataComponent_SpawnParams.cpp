#include "FortAthenaAISpawnerDataComponent_SpawnParams.h"

UFortAthenaAISpawnerDataComponent_SpawnParams::UFortAthenaAISpawnerDataComponent_SpawnParams() {
    PawnClass = NULL;
    SpawnTracePadding = 1;
    bCheckForOverlaps = false;
    bSpawnInAir = false;
    bSetSkyDivingFromBus = false;
    InAirSpawnTraceStartHeight = 0.0f;
    InAirSpawnTraceEndHeight = 0.0f;
    InAirSpawnTraceSphereRadius = 0.0f;
    bAddPOILocationTagsOnSpawn = false;
}

