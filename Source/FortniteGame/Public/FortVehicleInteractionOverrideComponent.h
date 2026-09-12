#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortVehicleInteractionOverrideComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVehicleInteractionOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortVehicleInteractionOverrideComponent();
    
};
