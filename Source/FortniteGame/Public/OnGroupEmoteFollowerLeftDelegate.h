#pragma once
#include "CoreMinimal.h"
#include "OnGroupEmoteFollowerLeftDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroupEmoteFollowerLeft, AFortPlayerPawn*, LeavingPawn);
