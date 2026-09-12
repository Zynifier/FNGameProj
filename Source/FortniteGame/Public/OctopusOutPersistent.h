#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleOutPersistent.h"
#include "OctopusOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FOctopusOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat ShellRotation;
    
    FORTNITEGAME_API FOctopusOutPersistent();
};
