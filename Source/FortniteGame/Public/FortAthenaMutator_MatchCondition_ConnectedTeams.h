#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator_MatchCondition.h"
#include "FortAthenaMutator_MatchCondition_ConnectedTeams.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_MatchCondition_ConnectedTeams : public AFortAthenaMutator_MatchCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinConnectedTeams;
    
public:
    AFortAthenaMutator_MatchCondition_ConnectedTeams();
    
};
