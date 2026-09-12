#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemCustomSkinCategoryData.generated.h"

class UAthenaSeasonItemEntryReward;

USTRUCT(BlueprintType)
struct FAthenaSeasonItemCustomSkinCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSeasonItemEntryReward*> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRewardsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    FORTNITEGAME_API FAthenaSeasonItemCustomSkinCategoryData();
};
