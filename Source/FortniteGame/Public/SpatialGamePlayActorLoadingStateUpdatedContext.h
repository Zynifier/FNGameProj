#pragma once
#include "CoreMinimal.h"
#include "ESpatialLoadingState.h"
#include "SpatialGamePlayActorLoadingStateUpdatedContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpatialGamePlayActorLoadingStateUpdatedContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpatialGameplayInterfaceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpatialLoadingState State;
    
    FORTNITEGAME_API FSpatialGamePlayActorLoadingStateUpdatedContext();
};
