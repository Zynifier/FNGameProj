#pragma once
#include "CoreMinimal.h"
#include "FortUpdatedObjectiveStat.h"
#include "FortDisplayQuestUpdateData.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FFortDisplayQuestUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUpdatedObjectiveStat ObjectiveUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* QuestOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* AssistingPlayer;
    
    FORTNITEGAME_API FFortDisplayQuestUpdateData();
};
