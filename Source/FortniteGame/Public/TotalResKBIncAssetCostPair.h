#pragma once
#include "CoreMinimal.h"
#include "TotalResKBIncAssetCostPair.generated.h"

USTRUCT(BlueprintType)
struct FTotalResKBIncAssetCostPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CostKBInc;
    
    FORTNITEGAME_API FTotalResKBIncAssetCostPair();
};
