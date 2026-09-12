#pragma once
#include "CoreMinimal.h"
#include "OnPrePlayerJoinInProgressDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrePlayerJoinInProgress, const AFortPlayerState*, FortPlayerState);
