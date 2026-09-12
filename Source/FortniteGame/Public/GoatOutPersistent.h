#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleOutPersistent.h"
#include "GoatOutPersistent.generated.h"

USTRUCT(BlueprintType)
struct FGoatOutPersistent : public FFortVehicleOutPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionTargetFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionTargetBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeanPositionTargetBL;
    
    FORTNITEGAME_API FGoatOutPersistent();
};
