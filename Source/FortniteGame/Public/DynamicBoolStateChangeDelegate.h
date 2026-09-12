#pragma once
#include "CoreMinimal.h"
#include "DynamicBoolStateChangeDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDynamicBoolStateChange, const AFortPlayerStateAthena*, FortPlayerState, bool, bNewValue);
