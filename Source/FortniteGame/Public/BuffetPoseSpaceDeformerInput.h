#pragma once
#include "CoreMinimal.h"
#include "BuffetPoseSpaceDeformerInput.generated.h"

USTRUCT(BlueprintType)
struct FBuffetPoseSpaceDeformerInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeformationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseBoneName;
    
    FORTNITEGAME_API FBuffetPoseSpaceDeformerInput();
};
