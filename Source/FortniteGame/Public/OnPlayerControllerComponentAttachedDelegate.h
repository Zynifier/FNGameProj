#pragma once
#include "CoreMinimal.h"
#include "OnPlayerControllerComponentAttachedDelegate.generated.h"

class AFortPlayerController;
class UFortControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerControllerComponentAttached, AFortPlayerController*, OwnerController, UFortControllerComponent*, AttachedComponent);
