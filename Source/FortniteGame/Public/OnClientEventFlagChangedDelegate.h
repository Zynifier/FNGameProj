#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnClientEventFlagChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnClientEventFlagChanged, const FString&, EventName, const FTimespan&, TimeUntilEnd, const FTimespan&, TimeSinceBegin, float, TimespanRatio);
