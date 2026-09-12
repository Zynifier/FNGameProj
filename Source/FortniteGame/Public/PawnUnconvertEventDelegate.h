#pragma once
#include "CoreMinimal.h"
#include "PawnUnconvertEventDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnUnconvertEvent, AFortPawn*, UnconvertedPawn);
