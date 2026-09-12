#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSeasonPageGrid.generated.h"

class UAthenaSeasonItemEntryBase;

USTRUCT(BlueprintType)
struct FAthenaSeasonPageGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelsNeededForUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsNeededForUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSeasonItemEntryBase*> RewardEntryList;
    
    FORTNITEGAME_API FAthenaSeasonPageGrid();
};
