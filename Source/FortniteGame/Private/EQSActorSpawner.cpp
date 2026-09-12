#include "EQSActorSpawner.h"

void UEQSActorSpawner::OnFindActorSpawnLocationQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus) {
}

FEQSActorSpawnerData UEQSActorSpawner::GetSpawnerData() {
    return FEQSActorSpawnerData{};
}

UEQSActorSpawner::UEQSActorSpawner() {
    OwningActorSpawnerMutator = NULL;
}
