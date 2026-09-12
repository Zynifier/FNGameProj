#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortControllerEffect_ApplyGameplayEffectBase.h"
#include "FortControllerEffect_HealPlayer.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_HealPlayer : public UFortControllerEffect_ApplyGameplayEffectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthRestoreQuantity;
    
public:
    UFortControllerEffect_HealPlayer();
    
};
