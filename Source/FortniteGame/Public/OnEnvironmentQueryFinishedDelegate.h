#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnEnvironmentQueryFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvironmentQueryFinished, const TArray<FVector>&, QueryResultLocations);
