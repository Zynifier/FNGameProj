#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInPersistent.h"
#include "BiplaneAsyncInPersistent.generated.h"

class UFortDoghouseVehicleConfigs;

USTRUCT(BlueprintType)
struct FBiplaneAsyncInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDoghouseVehicleConfigs* FortAirVehicleConfigs;
    
    FORTNITEGAME_API FBiplaneAsyncInPersistent();
};
