#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_MatchConditionManager.generated.h"

class AFortAthenaMutator_MatchCondition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_MatchConditionManager : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaMutator_MatchCondition*> MatchConditionMutators;
    
public:
    AFortAthenaMutator_MatchConditionManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnSatisfied(const AFortAthenaMutator_MatchCondition* MatchConditionMutator, const bool bSatisfied);
    
};
