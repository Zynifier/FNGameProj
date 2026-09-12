#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemEntryOfferBase.h"
#include "AthenaSeasonItemEntryReward.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemEntryReward : public UAthenaSeasonItemEntryOfferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFreePassReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsNeededForUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalRewardsNeededForUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> RequiredItems;
    
    UAthenaSeasonItemEntryReward();
    
};
