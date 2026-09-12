#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlaystyleSwitchToAggressiveDataDigested.generated.h"

USTRUCT(BlueprintType)
struct FPlaystyleSwitchToAggressiveDataDigested {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnToAggressiveMinimumDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnToAggressiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageThresholdToSwitchToAggressive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SwitchBackToDefensivePreventionTime;
    
public:
    FORTNITEGAME_API FPlaystyleSwitchToAggressiveDataDigested();
};
