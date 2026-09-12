#pragma once
#include "CoreMinimal.h"
#include "OnSquadIdChangedDelegateDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadIdChangedDelegate, AFortPlayerStateAthena*, PlayerState, const uint8, OldSquadIndex);
