#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaSKVehicle.h"
#include "SphericalDriveParams.h"
#include "Templates/SubclassOf.h"
#include "FortSphericalVehicle.generated.h"

class AActor;
class UFortPhysicsVehicleConfigs;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortSphericalVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphericalDriveParams BaseSphericalDriveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPhysicsVehicleConfigs> FortSphericalVehicleConfigsClass;
    
public:
    AFortSphericalVehicle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHit(const FVector& Location, const FVector& Normal, const float Force, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void TickSpawnEffects(float DeltaTime, float Val, float ForwardSpeedKmH);
    
};
