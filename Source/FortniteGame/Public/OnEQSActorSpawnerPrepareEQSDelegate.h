#pragma once
#include "CoreMinimal.h"
#include "OnEQSActorSpawnerPrepareEQSDelegate.generated.h"

class UEQSActorSpawner;
class UEnvQueryInstanceBlueprintWrapper;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEQSActorSpawnerPrepareEQS, const UEQSActorSpawner*, EQSActorSpawner, UEnvQueryInstanceBlueprintWrapper*, EQSInstance);
