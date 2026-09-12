#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECoastState.h"
#include "FortVehicleInPersistent.h"
#include "SKPushVehicleInPersistent.generated.h"

class UFortSKPushVehicleConfigs;

USTRUCT(BlueprintType)
struct FSKPushVehicleInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSKPushVehicleConfigs* SKPushVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDriverTargetting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPedalForceCooldown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConstrainedRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCoastingOrDismounting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoastState CurrentPhysicsCoastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoastState CurrentAnimCoastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeAboveTopSpeedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PushForceRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardForceTractionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopSpeedCurrentMultiplier;
    
    FORTNITEGAME_API FSKPushVehicleInPersistent();
};
