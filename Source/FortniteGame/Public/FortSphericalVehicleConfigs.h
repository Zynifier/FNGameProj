#pragma once
#include "CoreMinimal.h"
#include "FortPhysicsVehicleConfigs.h"
#include "FortSphericalVehicleConfigs.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortSphericalVehicleConfigs : public UFortPhysicsVehicleConfigs {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPassengersUpright;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustSpeedOnWaterEntry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalWaterEntrySpeedUp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalWaterEntrySpeedDown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalWaterEntrySpeed;
    
public:
    UFortSphericalVehicleConfigs();
    
};
