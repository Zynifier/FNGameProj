#pragma once
#include "CoreMinimal.h"
#include "OnWarmupCountdownEndTimeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarmupCountdownEndTimeUpdated, float, NewEndTime);
