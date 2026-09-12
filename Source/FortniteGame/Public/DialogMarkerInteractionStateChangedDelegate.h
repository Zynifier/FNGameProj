#pragma once
#include "CoreMinimal.h"
#include "EDialogMarkerInteractionState.h"
#include "DialogMarkerInteractionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogMarkerInteractionStateChanged, const EDialogMarkerInteractionState, CurrentInteractionState);
