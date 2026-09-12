#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortControllerEffect_ApplyGameplayEffectBase.h"
#include "FortControllerEffect_ShieldPlayer.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerEffect_ShieldPlayer : public UFortControllerEffect_ApplyGameplayEffectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShieldRestoreQuantity;
    
public:
    UFortControllerEffect_ShieldPlayer();
    
};
