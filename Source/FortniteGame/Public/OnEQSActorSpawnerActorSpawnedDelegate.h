#pragma once
#include "CoreMinimal.h"
#include "OnEQSActorSpawnerActorSpawnedDelegate.generated.h"

class AActor;
class UEQSActorSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEQSActorSpawnerActorSpawned, AActor*, SpawnedActor, const UEQSActorSpawner*, EQSActorSpawner);
