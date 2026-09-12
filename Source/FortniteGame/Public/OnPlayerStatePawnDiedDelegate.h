#pragma once
#include "CoreMinimal.h"
#include "PawnDamageData.h"
#include "OnPlayerStatePawnDiedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStatePawnDied, const FPawnDamageData&, PawnDamageInfo);
