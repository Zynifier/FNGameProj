#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardSchedule.h"
#include "AthenaSeasonItemData.h"
#include "GameplayTagContainer.h"
#include "TrackCategory.h"
#include "AthenaSeasonItemData_Level.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemData_Level : public UAthenaSeasonItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBattlePassLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAdditionalBattlePassLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattlePassXpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeLevelsThatNavigateToBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackCategory> TrackCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlePassFreeItemContentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlePassPaidItemContentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlePassAdditionalItemContentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardSchedule BattlePassXpScheduleFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardSchedule BattlePassXpSchedulePaid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardSchedule AdditionalBattlePassSchedule;
    
public:
    UAthenaSeasonItemData_Level();
    
};
