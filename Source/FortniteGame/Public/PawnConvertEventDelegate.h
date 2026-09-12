#pragma once
#include "CoreMinimal.h"
#include "PawnConvertEventDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnConvertEvent, AFortPawn*, ConvertedPawn);
