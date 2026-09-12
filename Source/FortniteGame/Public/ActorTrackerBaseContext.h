#pragma once
#include "CoreMinimal.h"
#include "ActorTrackerBaseContext.generated.h"

class UPlayspaceComponent_SpatialActorTracker;

USTRUCT(BlueprintType)
struct FActorTrackerBaseContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayspaceComponent_SpatialActorTracker* SpatialActorTrackerComponent;
    
    FORTNITEGAME_API FActorTrackerBaseContext();
};
