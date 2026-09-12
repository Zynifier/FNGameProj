#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "AthenaPhysicsAIPerceptionStimuliSourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UAthenaPhysicsAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent {
    GENERATED_BODY()
public:
    UAthenaPhysicsAIPerceptionStimuliSourceComponent(const FObjectInitializer& ObjectInitializer);
    
};
