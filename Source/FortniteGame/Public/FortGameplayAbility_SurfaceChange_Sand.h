#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayAbility.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayAbility_SurfaceChange_Sand.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayAbility_SurfaceChange_Sand : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle SnareGEHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SnareGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPawnOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RequiresSandEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SandEnabledTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsThatBlockSnare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinAccelerationToPreventSnareStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxWaterDepthToApplySnare;
    
public:
    UFortGameplayAbility_SurfaceChange_Sand();
    
    UFUNCTION(BlueprintCallable)
    void AddSnareStack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSnareMonitor();
    
};
