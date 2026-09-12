#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTrackableAIObjectComponent.h"
#include "FortAthenaTrackableAIObjectVehicleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAthenaTrackableAIObjectVehicleComponent : public UFortAthenaTrackableAIObjectComponent {
    GENERATED_BODY()
public:
    UFortAthenaTrackableAIObjectVehicleComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSleepStateChanged(const bool bIsAwake);
    
};
