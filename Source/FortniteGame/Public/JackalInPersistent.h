#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInPersistent.h"
#include "JackalInPersistent.generated.h"

class UFortAthenaJackalVehicleConfigs;

USTRUCT(BlueprintType)
struct FJackalInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaJackalVehicleConfigs* FortJackalVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingJumpCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FrontLateralFrictionRuntimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TopSpeedCurrentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PushForceCurrentMultiplier;
    
    FORTNITEGAME_API FJackalInPersistent();
};
