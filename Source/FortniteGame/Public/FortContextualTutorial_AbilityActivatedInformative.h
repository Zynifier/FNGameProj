#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_AbilityActivatedInformative.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorial_AbilityActivatedInformative : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_AbilityActivatedInformative();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};
