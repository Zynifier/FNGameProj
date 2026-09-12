#pragma once
#include "CoreMinimal.h"
#include "OnEQSActorSpawningPhaseEndedDelegate.generated.h"

class UEQSActorSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEQSActorSpawningPhaseEnded, const UEQSActorSpawner*, EQSActorSpawner);
