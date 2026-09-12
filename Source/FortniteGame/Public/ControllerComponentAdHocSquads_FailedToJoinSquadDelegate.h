#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_SquadUpResult.h"
#include "ControllerComponentAdHocSquads_FailedToJoinSquadDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerComponentAdHocSquads_FailedToJoinSquad, const AFortPlayerStateAthena*, PlayerFromSquad, const EAdHocSquads_SquadUpResult, FailureReason);
