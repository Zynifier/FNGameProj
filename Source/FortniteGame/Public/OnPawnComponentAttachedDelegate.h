#pragma once
#include "CoreMinimal.h"
#include "OnPawnComponentAttachedDelegate.generated.h"

class AFortPawn;
class UFortPawnComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnComponentAttached, AFortPawn*, OwnerPawn, UFortPawnComponent*, AttachedComponent);
