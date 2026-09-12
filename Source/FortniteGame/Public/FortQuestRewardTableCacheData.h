#pragma once
#include "CoreMinimal.h"
#include "FortQuestRewardTableRow.h"
#include "FortQuestRewardTableCacheData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortQuestRewardTableCacheData : public FFortQuestRewardTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemPtr;
    
    FORTNITEGAME_API FFortQuestRewardTableCacheData();
};
