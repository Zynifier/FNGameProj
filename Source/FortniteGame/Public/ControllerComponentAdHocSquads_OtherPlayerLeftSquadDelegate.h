#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_LeaveSquadReason.h"
#include "ControllerComponentAdHocSquads_OtherPlayerLeftSquadDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerComponentAdHocSquads_OtherPlayerLeftSquad, const AFortPlayerStateAthena*, LeavingPlayerState, const EAdHocSquads_LeaveSquadReason, Reason);
