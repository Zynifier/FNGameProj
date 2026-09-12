#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "AudioCurveInfo.generated.h"

USTRUCT(BlueprintType)
struct FAudioCurveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve Curve;
    
    FORTNITEGAME_API FAudioCurveInfo();
};
