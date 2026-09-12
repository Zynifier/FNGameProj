#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_GameplayEvent.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorial_GameplayEvent : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_GameplayEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePostSkydivingActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePostSkydivingCompletion();
    
};
