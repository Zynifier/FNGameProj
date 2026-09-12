#pragma once
#include "CoreMinimal.h"
#include "OnGroupEmoteSyncValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroupEmoteSyncValueChanged, uint8, NewSyncValue);
