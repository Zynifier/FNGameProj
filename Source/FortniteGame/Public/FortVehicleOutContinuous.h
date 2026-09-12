#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AverageSpringNormal;
    
    FORTNITEGAME_API FFortVehicleOutContinuous();
};
