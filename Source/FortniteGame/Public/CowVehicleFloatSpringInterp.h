#pragma once
#include "CoreMinimal.h"
#include "CowVehicleFloatSpringInterp.generated.h"

USTRUCT(BlueprintType)
struct FCowVehicleFloatSpringInterp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    FORTNITEGAME_API FCowVehicleFloatSpringInterp();
};
