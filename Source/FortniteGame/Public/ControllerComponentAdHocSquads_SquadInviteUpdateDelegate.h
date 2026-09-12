#pragma once
#include "CoreMinimal.h"
#include "ControllerComponentAdHocSquads_SquadInviteUpdateDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerComponentAdHocSquads_SquadInviteUpdate, const AFortPlayerStateAthena*, InvitingPlayer);
