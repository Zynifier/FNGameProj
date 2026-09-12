#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_AttributeThresholdCheck.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_AttributeThresholdCheck : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute QueryAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig ThresholdTestConfig;
    
    UFortControllerRequirement_AttributeThresholdCheck();
    
};
