#pragma once
#include "CoreMinimal.h"
#include "ConvertedEventDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvertedEvent, AFortPawn*, InstigatorPawn);
