#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_LookAt.h"
#include "WeightedLookAtBoneWeightDefinition.h"
#include "FortAnimNode_WeightedLookAt.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimNode_WeightedLookAt : public FAnimNode_LookAt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedLookAtBoneWeightDefinition> BoneWeightsToApply;
    
    FORTNITEGAME_API FFortAnimNode_WeightedLookAt();
};
