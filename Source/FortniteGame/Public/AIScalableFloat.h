#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAIScalableFloatScalingType.h"
#include "AIScalableFloat.generated.h"

USTRUCT(BlueprintType)
struct FAIScalableFloat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScalableFloat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIScalableFloatScalingType ScalingType;
    
public:
    FORTNITEGAME_API FAIScalableFloat();
};
