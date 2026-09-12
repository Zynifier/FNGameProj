#pragma once
#include "CoreMinimal.h"
#include "FortVehiclePontoonsComponent.h"
#include "FortMeatballPontoonsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent {
    GENERATED_BODY()
public:
    UFortMeatballPontoonsComponent(const FObjectInitializer& ObjectInitializer);
    
};
