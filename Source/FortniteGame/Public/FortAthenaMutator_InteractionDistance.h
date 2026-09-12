#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_InteractionDistance.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_InteractionDistance : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistanceOverride;
    
public:
    AFortAthenaMutator_InteractionDistance();
    
};
