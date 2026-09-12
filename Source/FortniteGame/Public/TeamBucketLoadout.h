#pragma once
#include "CoreMinimal.h"
#include "ItemLoadoutContainer.h"
#include "TeamBucketCosmeticLoadoutContainer.h"
#include "TeamBucketLoadout.generated.h"

USTRUCT(BlueprintType)
struct FTeamBucketLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamBucketCosmeticLoadoutContainer CosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemLoadoutContainer ItemLoadout;
    
    FORTNITEGAME_API FTeamBucketLoadout();
};
