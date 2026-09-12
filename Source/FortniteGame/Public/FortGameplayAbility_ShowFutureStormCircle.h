#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_ShowFutureStormCircle.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayAbility_ShowFutureStormCircle : public UFortGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumCirclesToShowBeforeEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TrackShownCirclesDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumDuration;
    
public:
    UFortGameplayAbility_ShowFutureStormCircle();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSafeZoneUpdated();
    
};
