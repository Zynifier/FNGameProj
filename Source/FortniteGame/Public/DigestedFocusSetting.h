#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedFocusSetting.generated.h"

USTRUCT(BlueprintType)
struct FDigestedFocusSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery WeaponTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequireAmmoToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreThreatTimeWhenNotAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreThreatDeviationWhenNotAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreThreatDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreThreatDurationDeviation;
    
public:
    FORTNITEGAME_API FDigestedFocusSetting();
};
