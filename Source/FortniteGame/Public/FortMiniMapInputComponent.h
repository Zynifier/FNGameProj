#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "FortMiniMapInputComponent.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMiniMapInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    UFortMiniMapInputComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFullScreenMapToggled(bool bMapVisible);
    
};
