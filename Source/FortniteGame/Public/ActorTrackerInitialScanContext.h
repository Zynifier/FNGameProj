#pragma once
#include "CoreMinimal.h"
#include "ActorTrackerBaseContext.h"
#include "ActorTrackerInitialScanContext.generated.h"

USTRUCT(BlueprintType)
struct FActorTrackerInitialScanContext : public FActorTrackerBaseContext {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FActorTrackerInitialScanContext();
};
