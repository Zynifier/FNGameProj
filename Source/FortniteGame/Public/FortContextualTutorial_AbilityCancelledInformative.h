#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_AbilityCancelledInformative.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorial_AbilityCancelledInformative : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_AbilityCancelledInformative();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};
