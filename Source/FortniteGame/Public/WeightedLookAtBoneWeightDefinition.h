#pragma once
#include "CoreMinimal.h"
#include "WeightedLookAtBoneWeightDefinition.generated.h"

USTRUCT(BlueprintType)
struct FWeightedLookAtBoneWeightDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FWeightedLookAtBoneWeightDefinition();
};
