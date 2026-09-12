#pragma once
#include "CoreMinimal.h"
#include "OnWatchedHitPointsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnWatchedHitPointsChanged, float, Health, float, MaxHealth, float, Shield, float, MaxShield);
