#pragma once
#include "CoreMinimal.h"
#include "FortPhysicsObjectNavigationComponent.h"
#include "FortVehicleNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVehicleNavModifierComponent : public UFortPhysicsObjectNavigationComponent {
    GENERATED_BODY()
public:
    UFortVehicleNavModifierComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleSleepStateChanged(const bool bIsAwake);
    
};
