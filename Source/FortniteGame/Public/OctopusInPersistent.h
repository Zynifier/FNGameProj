#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleInPersistent.h"
#include "SphericalDriveContact.h"
#include "OctopusInPersistent.generated.h"

class UFortOctopusVehicleConfigs;

USTRUCT(BlueprintType)
struct FOctopusInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortOctopusVehicleConfigs* FortOctopusVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSphericalDriveContact> CachedContactPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalBoostForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TowhookAimDir;
    
    FORTNITEGAME_API FOctopusInPersistent();
};
