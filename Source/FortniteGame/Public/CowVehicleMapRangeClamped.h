#pragma once
#include "CoreMinimal.h"
#include "CowVehicleMapRangeClamped.generated.h"

USTRUCT(BlueprintType)
struct FCowVehicleMapRangeClamped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InRangeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InRangeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutRangeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutRangeB;
    
    FORTNITEGAME_API FCowVehicleMapRangeClamped();
};
