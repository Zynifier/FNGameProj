#pragma once
#include "CoreMinimal.h"
#include "OnPlayerRevivedFromDBNODelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRevivedFromDBNO, AFortPlayerPawn*, RevivedPawn);
