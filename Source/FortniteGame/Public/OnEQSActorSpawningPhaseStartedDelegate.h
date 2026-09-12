#pragma once
#include "CoreMinimal.h"
#include "OnEQSActorSpawningPhaseStartedDelegate.generated.h"

class UEQSActorSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEQSActorSpawningPhaseStarted, const UEQSActorSpawner*, EQSActorSpawner, int32, ActivationIndex);
