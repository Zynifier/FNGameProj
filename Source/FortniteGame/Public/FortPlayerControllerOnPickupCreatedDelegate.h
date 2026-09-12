#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerOnPickupCreatedDelegate.generated.h"

class AFortPickup;
class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerControllerOnPickupCreated, const AFortPlayerController*, PlayerController, AFortPickup*, PickUp);
