#pragma once
#include "CoreMinimal.h"
#include "OnVehicleStateChangeEventDelegate.generated.h"

class AActor;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVehicleStateChangeEvent, AFortPlayerPawn*, FortPlayerPawn, AActor*, NewVehicle, AActor*, OldVehicle);
