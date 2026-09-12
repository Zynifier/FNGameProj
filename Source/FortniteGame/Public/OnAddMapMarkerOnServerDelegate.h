#pragma once
#include "CoreMinimal.h"
#include "FortWorldMarkerData.h"
#include "OnAddMapMarkerOnServerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddMapMarkerOnServer, const FFortWorldMarkerData&, WorldMarkerData);
