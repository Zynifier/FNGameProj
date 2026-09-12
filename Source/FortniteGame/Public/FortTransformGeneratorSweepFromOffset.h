#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortTransformGenerator.h"
#include "FortTransformGeneratorSweepFromOffset.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTransformGeneratorSweepFromOffset : public UFortTransformGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayOriginOffsetFromOriginal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAllowedAdjustment;
    
public:
    UFortTransformGeneratorSweepFromOffset();
    
};
