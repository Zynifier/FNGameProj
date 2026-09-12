#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPoiTracker.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPoiTracker : public UObject {
    GENERATED_BODY()
public:
    UFortPoiTracker();
private:
    UFUNCTION(BlueprintCallable)
    void HandleEndSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnChanged(AFortPawn* NewPawn);
    
};

