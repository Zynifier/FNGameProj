#pragma once
#include "CoreMinimal.h"
#include "PlayerExitSpatialActorContext.generated.h"

class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct FPlayerExitSpatialActorContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpatialGameplayInterfaceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* ExitingPlayerState;
    
    FORTNITEGAME_API FPlayerExitSpatialActorContext();
};
