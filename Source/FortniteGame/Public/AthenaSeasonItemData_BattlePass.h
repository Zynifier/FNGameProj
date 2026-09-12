#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemData.h"
#include "BattlePassLevelReward.h"
#include "AthenaSeasonItemData_BattlePass.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemData_BattlePass : public UAthenaSeasonItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassLevelReward> RewardsGrantedForPremiumBattlePassLevels;
    
public:
    UAthenaSeasonItemData_BattlePass();
    
};
