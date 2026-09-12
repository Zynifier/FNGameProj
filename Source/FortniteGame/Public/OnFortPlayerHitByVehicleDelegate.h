#pragma once
#include "CoreMinimal.h"
#include "OnFortPlayerHitByVehicleDelegate.generated.h"

class AFortAthenaVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFortPlayerHitByVehicle, AFortAthenaVehicle*, InstigatingVehicle);
