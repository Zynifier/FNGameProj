#pragma once
#include "CoreMinimal.h"
#include "ControllerComponentAdHocSquads_SquadJoinedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerComponentAdHocSquads_SquadJoined, const AFortPlayerStateAthena*, PlayerState, const bool, bInviteInstigatedByThisPlayer);
