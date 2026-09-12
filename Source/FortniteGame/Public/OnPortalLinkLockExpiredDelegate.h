#pragma once
#include "CoreMinimal.h"
#include "EPortalLinkCodeLockStatus.h"
#include "OnPortalLinkLockExpiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPortalLinkLockExpired, EPortalLinkCodeLockStatus, Status);
