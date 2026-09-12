#pragma once
#include "CoreMinimal.h"
#include "OnVehicleAbilitiesRemovedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleAbilitiesRemoved, AFortPlayerController*, ExitedPlayerController);
