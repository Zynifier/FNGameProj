#pragma once
#include "CoreMinimal.h"
#include "CowVehicleImpactPointInterp.generated.h"

USTRUCT(BlueprintType)
struct FCowVehicleImpactPointInterp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    FORTNITEGAME_API FCowVehicleImpactPointInterp();
};
