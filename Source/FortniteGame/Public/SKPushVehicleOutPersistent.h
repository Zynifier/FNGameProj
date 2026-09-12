#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutPersistent.h"
#include "SKPushVehicleOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FSKPushVehicleOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalBrakingDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingInPlaceSteerAngle;
    
    FORTNITEGAME_API FSKPushVehicleOutPersistent();
};
