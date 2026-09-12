#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_LeadingTeam.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayAbility_LeadingTeam : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinLeadToApplyAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxLeadToRemoveAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* LeaderAbilitySetToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bApplyAbilitiesOnLand;
    
public:
    UFortGameplayAbility_LeadingTeam();
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplyLeaderAbilitySet();
    
};
