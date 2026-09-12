#pragma once
#include "CoreMinimal.h"
#include "ActorTrackerBaseContext.h"
#include "ActorTrackerActorEnteredContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorTrackerActorEnteredContext : public FActorTrackerBaseContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EnteredActor;
    
    FORTNITEGAME_API FActorTrackerActorEnteredContext();
};
