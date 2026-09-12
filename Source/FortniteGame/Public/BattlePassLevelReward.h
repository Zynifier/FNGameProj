#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "BattlePassLevelReward.generated.h"

USTRUCT(BlueprintType)
struct FBattlePassLevelReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFromGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedOnLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference Reward;
    
    FORTNITEGAME_API FBattlePassLevelReward();
};
