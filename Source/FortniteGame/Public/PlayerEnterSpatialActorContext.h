#pragma once
#include "CoreMinimal.h"
#include "PlayerEnterSpatialActorContext.generated.h"

class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct FPlayerEnterSpatialActorContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpatialGameplayInterfaceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* EnteringPlayerState;
    
    FORTNITEGAME_API FPlayerEnterSpatialActorContext();
};
