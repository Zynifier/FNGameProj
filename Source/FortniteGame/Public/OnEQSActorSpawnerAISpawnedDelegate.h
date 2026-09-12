#pragma once
#include "CoreMinimal.h"
#include "OnEQSActorSpawnerAISpawnedDelegate.generated.h"

class APawn;
class UEQSActorSpawner;
class UFortAthenaAISpawnerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEQSActorSpawnerAISpawned, APawn*, SpawnedPawn, const UFortAthenaAISpawnerData*, AISpawnerData, const UEQSActorSpawner*, EQSActorSpawner);
