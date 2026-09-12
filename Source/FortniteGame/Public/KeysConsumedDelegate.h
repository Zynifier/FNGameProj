#pragma once
#include "CoreMinimal.h"
#include "KeysConsumedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeysConsumed, int32, NumKeysConsumed);
