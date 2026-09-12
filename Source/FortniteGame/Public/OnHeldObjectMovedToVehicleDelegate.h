#pragma once
#include "CoreMinimal.h"
#include "OnHeldObjectMovedToVehicleDelegate.generated.h"

class UFortHeldObjectComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeldObjectMovedToVehicle, UFortHeldObjectComponent*, HeldObject);
