#include "FortAthenaAISpawnerDataComponent_SpawnParamsBase.h"
#include "Templates/SubclassOf.h"

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldCheckForOverlaps_Implementation() {
    return false;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnTracePadding_Implementation() {
    return 0.0f;
}

TArray<TSubclassOf<UFortAthenaAISpawnerData>> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnerDataSpawnedAsChildren_Implementation() {
    return TArray<TSubclassOf<UFortAthenaAISpawnerData>>();
}

TSubclassOf<APawn> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnClass_Implementation() {
    return NULL;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceEndHeight_Implementation() {
    return 0.0f;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceSphereRadius_Implementation() {
    return 0.0f;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceStartHeight_Implementation() {
    return 0.0f;
}

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldSpawnInAir_Implementation() {
    return false;
}

UFortAthenaAISpawnerDataComponent_SpawnParamsBase::UFortAthenaAISpawnerDataComponent_SpawnParamsBase() {
}

