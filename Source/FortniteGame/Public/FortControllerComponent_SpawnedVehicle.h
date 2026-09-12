#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_SpawnedVehicle.generated.h"

class AActor;
class AFortAthenaVehicle;
class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_SpawnedVehicle : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedVehicle, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* SpawnedVehicle;
    
public:
    UFortControllerComponent_SpawnedVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDeferredExitSpawnVehicle(const FVector& FinalExitVelocity);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDisconnectedChanged(AFortPlayerStateAthena* DisconnectingPlayerState, bool bIsDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void HandleTestStillAttached();
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedVehicle();
    
};
