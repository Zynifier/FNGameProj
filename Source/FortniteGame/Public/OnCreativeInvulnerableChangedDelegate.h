#pragma once
#include "CoreMinimal.h"
#include "OnCreativeInvulnerableChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeInvulnerableChanged, bool, bIsInvulnerable);
