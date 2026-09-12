#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TransformGeneratorResult.generated.h"

USTRUCT(BlueprintType)
struct FTransformGeneratorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform OutputTransform;
    
    FORTNITEGAME_API FTransformGeneratorResult();
};
