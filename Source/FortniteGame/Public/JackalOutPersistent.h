#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutPersistent.h"
#include "JackalOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FJackalOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldCorrectYaw;
    
    FORTNITEGAME_API FJackalOutPersistent();
};
