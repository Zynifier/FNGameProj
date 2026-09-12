#pragma once
#include "CoreMinimal.h"
#include "ControllerComponentAdHocSquads_NearbySquadInviteUpdateDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerComponentAdHocSquads_NearbySquadInviteUpdate, const AFortPlayerStateAthena*, PlayerNearInviter, const AFortPlayerStateAthena*, InvitingPlayer);
