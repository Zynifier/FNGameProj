#pragma once
#include "CoreMinimal.h"
#include "SpatialGameplayInterfaceContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpatialGameplayInterfaceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpatialGameplayInterfaceActor;
    
    FORTNITEGAME_API FSpatialGameplayInterfaceContext();
};
