#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator_MatchCondition.h"
#include "FortAthenaMutator_MatchCondition_DeadTeams.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_MatchCondition_DeadTeams : public AFortAthenaMutator_MatchCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumTeamsToDie;
    
public:
    AFortAthenaMutator_MatchCondition_DeadTeams();
    
};
