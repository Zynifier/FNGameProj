#pragma once
#include "CoreMinimal.h"
#include "OnRoofStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoofStateChanged, bool, bHasRoof);
