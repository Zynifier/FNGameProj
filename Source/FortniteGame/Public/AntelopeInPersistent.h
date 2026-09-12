#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENaturalSlideState.h"
#include "FortVehicleInPersistent.h"
#include "AntelopeInPersistent.generated.h"

class UFortAntelopeVehicleConfigs;

USTRUCT(BlueprintType)
struct FAntelopeInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAntelopeVehicleConfigs* FortAntelopeVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ENaturalSlideState NaturalSlideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TopSpeedCurrentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PushForceCurrentMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BackLeanSocketPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanImpulseScaleBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BounceForceBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceOffsetBack;
    
    FORTNITEGAME_API FAntelopeInPersistent();
};
