#pragma once
#include "CoreMinimal.h"
#include "MarkerID.h"
#include "OnRemoveMapMarkerOnServerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveMapMarkerOnServer, const FMarkerID&, MarkerID);
