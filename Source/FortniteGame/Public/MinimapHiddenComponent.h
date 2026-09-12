#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinimapHiddenComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UMinimapHiddenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMinimapHiddenComponent();
    
    UFUNCTION(BlueprintCallable)
    void PrepareForCapture();
    
};
