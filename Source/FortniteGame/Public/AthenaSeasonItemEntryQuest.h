#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "AthenaSeasonItemEntryBase.h"
#include "AthenaSeasonItemEntryQuest.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemEntryQuest : public UAthenaSeasonItemEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference QuestItem;
    
    UAthenaSeasonItemEntryQuest();
    
};
