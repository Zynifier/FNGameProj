#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EThresholdRequirement.h"
#include "ThresholdTestConfig.generated.h"

USTRUCT(BlueprintType)
struct FThresholdTestConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThresholdRequirement Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Quantity;
    
public:
    FORTNITEGAME_API FThresholdTestConfig();
};
