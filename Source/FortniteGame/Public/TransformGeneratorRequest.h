#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TransformGeneratorRequest.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FTransformGeneratorRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform OriginTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    FORTNITEGAME_API FTransformGeneratorRequest();
};
