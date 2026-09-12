#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDataLoadedDelegate.generated.h"

class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDataLoaded, AFortPlayerControllerAthena*, FortPlayerController);
