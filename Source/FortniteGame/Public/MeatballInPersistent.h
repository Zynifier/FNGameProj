#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInPersistent.h"
#include "MeatballInPersistent.generated.h"

class UFortMeatballVehicleConfigs;

USTRUCT(BlueprintType)
struct FMeatballInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMeatballVehicleConfigs* FortMeatballVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopSpeedCurrentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForceCurrentMultiplier;
    
    FORTNITEGAME_API FMeatballInPersistent();
};
