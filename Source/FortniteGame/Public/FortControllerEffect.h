#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EffectRequestContext.h"
#include "FortControllerEffect.generated.h"

class AController;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect : public UObject {
    GENERATED_BODY()
public:
    UFortControllerEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ApplyEffect(AController* TargetController, const FEffectRequestContext& RequestContext) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyEffectInternal(AController* TargetController, const FEffectRequestContext& RequestContext) const;
    
};
