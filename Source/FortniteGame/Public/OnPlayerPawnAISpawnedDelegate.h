#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPawnAISpawnedDelegate.generated.h"

class AFortAthenaAIBotController;
class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerPawnAISpawned, AFortAthenaAIBotController*, BotController, AFortPlayerPawnAthena*, BotPawn);
