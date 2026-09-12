#pragma once
#include "CoreMinimal.h"
#include "ActorTrackerBaseContext.h"
#include "ActorTrackerActorExitContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorTrackerActorExitContext : public FActorTrackerBaseContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExitingActor;
    
    FORTNITEGAME_API FActorTrackerActorExitContext();
};
