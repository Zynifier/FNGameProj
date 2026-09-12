#pragma once
#include "CoreMinimal.h"
#include "FortCreativeAnimateFloatCurveResult.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeAnimateFloatCurveResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComplete;
    
    FORTNITEGAME_API FFortCreativeAnimateFloatCurveResult();
};
