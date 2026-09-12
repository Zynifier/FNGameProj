#pragma once
#include "CoreMinimal.h"
#include "EAdHocSquads_LeaveSquadReason.h"
#include "ControllerComponentAdHocSquads_OwningPlayerLeftSquadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerComponentAdHocSquads_OwningPlayerLeftSquad, const EAdHocSquads_LeaveSquadReason, Reason);
