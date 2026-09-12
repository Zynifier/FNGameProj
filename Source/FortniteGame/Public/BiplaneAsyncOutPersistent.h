#pragma once
#include "CoreMinimal.h"
#include "AileronRoll.h"
#include "FortRechargingActionTimer.h"
#include "FortVehicleOutPersistent.h"
#include "BiplaneAsyncOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FBiplaneAsyncOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngineOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartEngineInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEngineStartIsBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAileronRoll AileronRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer BoostAction;
    
    FORTNITEGAME_API FBiplaneAsyncOutPersistent();
};
