#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChaseExternalForce.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FChaseExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MagnitudeScaleCurve;
    
    FORTNITEGAME_API FChaseExternalForce();
};
