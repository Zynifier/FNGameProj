#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortPlayerSaveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPlayerSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortPlayerSaveComponent();
    
};
