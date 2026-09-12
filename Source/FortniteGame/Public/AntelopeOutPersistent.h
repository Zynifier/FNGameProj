#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleOutPersistent.h"
#include "AntelopeOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FAntelopeOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionTargetBack;
    
    FORTNITEGAME_API FAntelopeOutPersistent();
};
