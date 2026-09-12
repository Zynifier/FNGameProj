#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_HasResource.generated.h"

class UFortResourceItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasResource : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig ThresholdTestConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortResourceItemDefinition* ResourceItemDefinition;
    
public:
    UFortControllerRequirement_HasResource();
    
};
