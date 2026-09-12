#pragma once
#include "CoreMinimal.h"
#include "EMatchConditionMutatorTeamStatus.h"
#include "MatchConditionMutatorTeamData.generated.h"

USTRUCT(BlueprintType)
struct FMatchConditionMutatorTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchConditionMutatorTeamStatus TeamStatus;
    
    FORTNITEGAME_API FMatchConditionMutatorTeamData();
};
