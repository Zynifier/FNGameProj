#pragma once
#include "CoreMinimal.h"
#include "OnGroupEmoteFollowerJoinedDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroupEmoteFollowerJoined, AFortPlayerPawn*, JoiningPawn);
