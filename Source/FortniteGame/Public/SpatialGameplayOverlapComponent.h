#pragma once
#include "CoreMinimal.h"
#include "OverlapComponent.h"
#include "SpatialGameplayOverlapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API USpatialGameplayOverlapComponent : public UOverlapComponent {
    GENERATED_BODY()
public:
    USpatialGameplayOverlapComponent();
    
};
