#include "EQSActorSpawnerHelperDestroyActorsInArea.h"

void UEQSActorSpawnerHelperDestroyActorsInArea::EQSActorSpawnerHelperDestroyActorsInArea_Implementation(TArray<AActor*>& OutDestroyedActors, const FTransform& Transform) {
}

UEQSActorSpawnerHelperDestroyActorsInArea::UEQSActorSpawnerHelperDestroyActorsInArea() {
    bDestroyBuildingActorsOnSpawn = false;
}
