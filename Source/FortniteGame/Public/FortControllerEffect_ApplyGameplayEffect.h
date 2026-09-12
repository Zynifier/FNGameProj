#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortControllerEffect_ApplyGameplayEffectBase.h"
#include "FortControllerEffect_ApplyGameplayEffect.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_ApplyGameplayEffect : public UFortControllerEffect_ApplyGameplayEffectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ParameterQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnalyticsEventAttributeName;
    
public:
    UFortControllerEffect_ApplyGameplayEffect();
    
};
